#include "../Headers/Avatar.h"

//Avatar::Avatar(const std::string &name, const std::string &gender, int age, const Features &features, Clothing *clothing)
//        : name(name), gender(gender), age(age), features(features), clothing(clothing) {
//    //std::cout<< "Constr de initializare Avatar\n";
//}

Avatar::Avatar(const Avatar& other)
        : name(other.name), gender(other.gender), age(other.age), features(other.features), clothing(other.clothing) {
    //std::cout<< "Constr de copiere Avatar\n";
}

Avatar& Avatar::operator=(const Avatar& other) {
    if (this != &other) {
        name = other.name;
        gender = other.gender;
        age = other.age;
        features = other.features;
        clothing = other.clothing;
        //std::cout<<"Operator copiere Avatar\n";
    }
    return *this;
}

Avatar::~Avatar() = default;


Avatar::Avatar(const string &name, const string &gender, int age, const vector<Features *> &features,
               const vector<Clothing *> &clothing) : name(name), gender(gender), age(age), features(features), clothing(clothing){}

void Avatar::setClothing(const vector<Clothing *> &clothing) {
    Avatar::clothing = clothing;
}

const vector<Clothing *> &Avatar::getClothing() const {
    return clothing;
}

void Avatar::setFeatures(const vector<Features *> &features) {
    Avatar::features = features;
}

const vector<Features *> &Avatar::getFeatures() const {
    return features;
}

ostream &operator<<(ostream &os, const Avatar &avatar) {
    os << "name: " << avatar.name <<"\n"<< " gender: " << avatar.gender <<"\n"<< " age: " << avatar.age <<"\n"<< " features: ";
       //<< avatar.features << " clothing: ";

    // Iterează prin vectorul de pointeri la obiecte Features și afișează fiecare element
    for (const auto& item : avatar.features) {
        os << item->getName() << ", "; // Afișează numele fiecărui obiect Features
    }

    os <<"\n"<< " clothing: ";
    // Iterează prin vectorul de pointeri la obiecte Clothing și afișează fiecare element
    for (const auto& item : avatar.clothing) {
        os << item->getName() << ", "; // Afișează numele fiecărui obiect Clothing
    }
    return os;
}









