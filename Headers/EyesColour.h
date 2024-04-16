#ifndef OOP_EYESCOLOUR_H
#define OOP_EYESCOLOUR_H

#include <string>
#include <iostream>
#include "Clothing.h"
#include "Features.h"

using namespace std;

class EyesColour : public Features {

public:
    explicit EyesColour(const string &name);

    ~EyesColour() override;

    friend ostream &operator<<(ostream &os, const EyesColour &item);

//    // Copy constructor
    //EyesColour(const EyesColour& other);
//
//    // Assignment operator
    //EyesColour& operator=(const EyesColour& other) ;

    std::string getDetail() const override;

    EyesColour* clone() const override;

};


#endif //OOP_HEADITEM_H