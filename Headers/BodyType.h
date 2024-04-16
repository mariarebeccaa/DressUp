#ifndef OOP_BODYTYPE_H
#define OOP_BODYTYPE_H

#include <string>
#include <iostream>
#include "Clothing.h"
#include "Features.h"

using namespace std;

class BodyType : public Features {

public:
    explicit BodyType(const string &name);

    ~BodyType() override;

    friend ostream &operator<<(ostream &os, const BodyType &item);

    std::string getDetail() const override;

    BodyType* clone() const;
};

#endif //OOP_BODYTYPE_H
