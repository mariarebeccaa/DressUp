
#ifndef OOP_HAIRTYPE_H
#define OOP_HAIRTYPE_H
#include <string>
#include <iostream>
#include "Features.h"

using namespace std;

class HairType : public Features {

public:
    explicit HairType(const string &name);

    friend ostream &operator<<(ostream &os, const HairType &item);

};


#endif //OOP_HAIRTYPE_H
