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

HairType::~HairType() {

}
