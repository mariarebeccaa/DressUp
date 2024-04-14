#ifndef OOP_AVAILABLEFEATURES_H
#define OOP_AVAILABLEFEATURES_H
#include <iostream>
#include <vector>
#include "BodyType.h"
#include "HairType.h"
#include "EyesType.h"

class AvailableFeatures {
private:
    std::vector<EyesType> availableEyesTypes;
    std::vector<HairType> availableHairTypes;
    std::vector<BodyType> availableBodyTypes;
public:
    void addEyesType(const EyesType &item);
    void addHairType(const HairType &item);
    void addBodyType(const BodyType &item);

    const vector<EyesType> &getAvailableEyesTypes() const;
    const vector<HairType> &getAvailableHairTypes() const;
    const vector<BodyType> &getAvailableBodyTypes() const;

    friend ostream &operator<<(ostream &os, const AvailableFeatures &features);

};


#endif //OOP_AVAILABLEFEATURES_H
