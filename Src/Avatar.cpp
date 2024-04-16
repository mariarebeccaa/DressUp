#include <utility>
#include <memory>
#include "../Headers/Avatar.h"

//Avatar::Avatar(std::string  name, std::string  gender, int age, const std::vector<Features*>& features, const std::vector<Clothing*>& clothing) : name(std::move(name)), gender(std::move(gender)), age(age), features(features), clothing(clothing){}
Avatar::Avatar(const std::string& name, const std::string& gender, int age, const std::vector<Features*>& features, const std::vector<Clothing*>& clothing)
        : name(name), gender(gender), age(age), features(features), clothing(clothing) {}


[[maybe_unused]] Avatar::Avatar(const Avatar &other)
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

void Avatar::addFeature(Features* feature) {
    features.push_back(feature);
}

// Funcție pentru a accesa detaliile trăsăturilor
void Avatar::printFeaturesDetails() const {
    for (const auto& feature : features) {
        std::cout << feature->getDetail() << std::endl;
    }
}

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









