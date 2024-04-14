#include "../Headers/HairType.h"

using namespace std;

HairType::HairType(const string &name) : Features(name) {}

ostream &operator<<(ostream &os, const HairType &item) {
    os << "HairType: " <<item.name;//Acceseaza direct membrul name
    return os;
}