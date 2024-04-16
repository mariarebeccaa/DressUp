
#ifndef OOP_HAIRTYPE_H
#define OOP_HAIRTYPE_H
#include <string>
#include <iostream>
#include "Features.h"

using namespace std;

class HairType : public Features {

public:
    explicit HairType(const string &name);

    ~HairType() override;

    friend ostream &operator<<(ostream &os, const HairType &item);

    std::string getDetail() const override;

    HairType* clone() const;
};


#endif //OOP_HAIRTYPE_H
