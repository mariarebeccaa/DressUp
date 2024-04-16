#include "../Headers/HairType.h"

using namespace std;

HairType::HairType(const string &name) : Features(name) {}

std::string HairType::getDetail() const {
    return "You chose: " + name; // Exemplu de detaliu specific trăsăturii
}

ostream &operator<<(ostream &os, const HairType &item) {
    os << "HairType: " <<item.name;//Acceseaza direct membrul name
    return os;
}

HairType* HairType::clone() const {
    return new HairType(*this);
}

HairType::~HairType() = default;

// Constructorul de copiere
HairType::HairType(const HairType &other) : Features(other.getName()) {}
// Operatorul de atribuire
HairType& HairType::operator=(const HairType& other) {
    swap(*this, const_cast<HairType &>(other));
    return *this;
}
void HairType::swap(HairType& first, HairType& second) noexcept {
    using std::swap;
    swap(first.name, second.name);
}
