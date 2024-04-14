#ifndef OOP_EYESTYPE_H
#define OOP_EYESTYPE_H

#include <string>
#include <iostream>
#include "Clothing.h"
#include "Features.h"

using namespace std;

class EyesType : public Features {

public:
    explicit EyesType(const string &name);

    friend ostream &operator<<(ostream &os, const EyesType &item);

};


#endif //OOP_HEADITEM_H