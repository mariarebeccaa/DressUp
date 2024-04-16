//
// Created by asus on 14.04.2024.
//

#include "../Headers/BodyType.h"

using namespace std;

BodyType::BodyType(const string &name) : Features(name) {}

ostream &operator<<(ostream &os, const BodyType &item) {
    os << "BodyType: " <<item.name;//Acceseaza direct membrul name
    return os;
}

std::string BodyType::getDetail() const {
    return "You chose: " + name; // Exemplu de detaliu specific trăsăturii
}

BodyType* BodyType::clone() const {
    return new BodyType(*this);
}

BodyType::~BodyType() = default;

// Constructorul de copiere
BodyType::BodyType(const BodyType &other) : Features(other.getName()) {}
// Operatorul de atribuire
BodyType& BodyType::operator=(const BodyType& other) {
    swap(*this, const_cast<BodyType &>(other));
    return *this;
}
void BodyType::swap(BodyType& first, BodyType& second) noexcept {
    using std::swap;
    swap(first.name, second.name);
}
