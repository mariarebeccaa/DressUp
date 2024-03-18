#include <iostream>
#include <string>

using namespace std;

class Trasaturi{
private:
    std::string culoareOchi;
    std::string hairType;
    std::string hairColour;
    std::string bodyType;
    //std::vector

public:
    Trasaturi(const string &culoareOchi, const string &hairType, const string &hairColour, const string &bodyType)
            : culoareOchi(culoareOchi), hairType(hairType), hairColour(hairColour), bodyType(bodyType) {
        std::cout<<"Constr de initializare Trasaturi\n";
    }

    friend ostream &operator<<(ostream &os, const Trasaturi &trasaturi) {
        os << "culoareOchi: " << trasaturi.culoareOchi << " hairType: " << trasaturi.hairType << " hairColour: "
           << trasaturi.hairColour << " bodyType: " << trasaturi.bodyType;
        return os;
    }

};



class Clothing{

private:
    std::string head, top, buttom, shoes;

public:
    Clothing(const string &head, const string &top, const string &buttom, const string &shoes)
            : head(head), top(top), buttom(buttom), shoes(shoes) {
        std::cout<< "Constr de initializare Clothing\n";
    }

    //functie care verifica daca am pus articolul vestimentar
    bool isHead()
    {
        if (this->head == "")
        {
            return false;
        }
        return true;
    }

    bool isTop()
    {
        if (this->top == "")
        {
            return false;
        }
        return true;
    }

    bool isButtom()
    {
        if (this->buttom =="")
        {
            return false;
        }
        return true;
    }

    bool isShoes()
    {
        if (this->shoes =="")
        {
            return false;
        }
        return true;
    }

    //functie care verifica daca item ul de imbracaminte corespunde cu partea corpului respectiva
    bool isTheCorrectClothingItem_Position_Head()
    {
        if (this->head == "sapca" || this->head == "palarie" || this->head == "caciula")
            return true;
        return false;
    }

    bool isTheCorrectClothingItem_Position_Top()
    {
        if (this->top == "tricou" || this->top == "geaca" || this->top == "bluza" || this->top == "hanorac")
            return true;
        return false;
    }

    bool isTheCorrectClothingItem_Position_Buttom()
    {
        if (this->buttom == "blugi" || this->buttom == "pantaloni lungi" || this->buttom == "pantaloni scurti" || this->buttom == "fusta")
            return true;
        return false;
    }

    bool isTheCorrectClothingItem_Position_Shoes()
    {
        if (this->shoes == "adidasi" || this->shoes == "papuci" || this->shoes == "cizme" || this->shoes == "pantofi")
            return true;
        return false;
    }

    void formatare_Clothing_Top_Item()
    {
        if(isTop())
        {
            for(auto &i : this->top) {
                std::cout<< static_cast<int>(i) << " ";
            }
        }
    }

    void formatare_Clothing_Head_Item()
    {
        if(isHead()==true)
        {
            for(auto &i : this->head) {
                std::cout<< static_cast<int>(i) << " ";
            }
        }
    }

    void formatare_Clothing_Buttom_Item()
    {
        if(isButtom()==true)
        {
            for(auto &i : this->buttom) {
                std::cout<< static_cast<int>(i) << " ";
            }
        }
    }

    void formatare_Clothing_Shoes_Item()
    {
        if(isShoes()==true)
        {
            for(auto &i : this->shoes) {
                std::cout<< static_cast<int>(i) << " ";
            }
        }
    }

    friend ostream &operator<<(ostream &os, const Clothing &clothing) {
        os << "head: " << clothing.head << " top: " << clothing.top << " buttom: " << clothing.buttom << " shoes: "
           << clothing.shoes;
        return os;
    }

//    bool
};

class Avatar{
private:
    std::string gen;
    std::string nume;
    int age;
    Trasaturi trasaturi;
    Clothing clothing;

public:
    Avatar(const string &gen, const string &nume, int age, const Trasaturi &trasaturi, const Clothing &clothing)
            : gen(gen), nume(nume), age(age), trasaturi(trasaturi), clothing(clothing) {
        std::cout<< "Constr de initializare Avatar\n";
    }

    Avatar(const Avatar& other)
            : gen(other.gen), nume(other.nume), age(other.age), trasaturi(other.trasaturi), clothing(other.clothing) {
        std::cout<< "Constr de copiere Avatar\n";
    }

    Avatar& operator=(const Avatar& other) {
        gen = other.gen;
        nume = other.nume;
        age = other.age;
        trasaturi = other.trasaturi;
        clothing = other.clothing;
        std::cout<<"Operator copiere Avatar\n";
        return *this;
    }

    virtual ~Avatar() {}

    friend ostream &operator<<(ostream &os, const Avatar &avatar) {
        os << "gen: " << avatar.gen << " nume: " << avatar.nume << " age: " << avatar.age <<"\n"<< " trasaturi: "
           << avatar.trasaturi << " clothing: " << avatar.clothing;
        return os;
    }
};

int main() {
    Trasaturi trasaturi("albastru", "lung", "saten", "mic");
    std::cout<< trasaturi;
    Clothing clothes("sapca", "tricou", "blugi", "sneakers");
    std::cout<< clothes;
    std::cout<<clothes.isHead()<<"\n";
    std::cout<<clothes.isTop()<<"\n";
    std::cout<<clothes.isButtom()<<"\n";
    std::cout<<clothes.isShoes()<<"\n";
    std::cout<<clothes.isTheCorrectClothingItem_Position_Head()<<"\n";
    std::cout<<clothes.isTheCorrectClothingItem_Position_Top()<<"\n";
    std::cout<<clothes.isTheCorrectClothingItem_Position_Buttom()<<"\n";
    std::cout<<clothes.isTheCorrectClothingItem_Position_Shoes()<<"\n";
    Avatar avatar("feminin", "Ana", 20, trasaturi, clothes);
    clothes.formatare_Clothing_Top_Item();
    std::cout<<"\n";
    clothes.formatare_Clothing_Buttom_Item();
    std::cout<<"\n";
    clothes.formatare_Clothing_Head_Item();
    std::cout<<"\n";
    clothes.formatare_Clothing_Shoes_Item();
    std::cout<<"\n";
    std::cout<<avatar;


    Trasaturi trasaturi2("verzi", "scurt", "blond", "mare");
    Clothing clothes2("palarie", "geaca", "fusta", "pantofi");
    Avatar avatar2("feminin", "Maria", 45, trasaturi2, clothes2);
    avatar = avatar2;
    std::cout<<avatar;
    return 0;
}
