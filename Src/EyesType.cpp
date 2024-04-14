//
// Created by asus on 14.04.2024.
//

#include "../Headers/EyesType.h"

using namespace std;

EyesType::EyesType(const string &name) : Features(name) {}

ostream &operator<<(ostream &os, const EyesType &item) {
    os << "EyesType: " <<item.name;//Acceseaza direct membrul name
    return os;
}