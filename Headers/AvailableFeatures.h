#ifndef OOP_AVAILABLEFEATURES_H
#define OOP_AVAILABLEFEATURES_H
#include <iostream>
#include <vector>
#include "BodyType.h"
#include "HairType.h"
#include "EyesColour.h"

class AvailableFeatures {
private:
    std::vector<EyesColour> availableEyesColours;
    std::vector<HairType> availableHairTypes;
    std::vector<BodyType> availableBodyTypes;
public:
    void addEyesColour(const EyesColour &item);
    void addHairType(const HairType &item);
    void addBodyType(const BodyType &item);

    [[nodiscard]] const vector<EyesColour> &getAvailableEyesColours() const;
    [[nodiscard]] const vector<HairType> &getAvailableHairTypes() const;
    [[nodiscard]] const vector<BodyType> &getAvailableBodyTypes() const;

    friend ostream &operator<<(ostream &os, const AvailableFeatures &features);

};


#endif //OOP_AVAILABLEFEATURES_H
