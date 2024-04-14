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