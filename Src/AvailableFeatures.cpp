//
// Created by asus on 14.04.2024.
//

#include "../Headers/AvailableFeatures.h"

void AvailableFeatures::addEyesColour(const EyesColour &item) {
    this->availableEyesColours.push_back(item);
}

void AvailableFeatures::addHairType(const HairType &item) {
    this->availableHairTypes.push_back(item);
}

void AvailableFeatures::addBodyType(const BodyType &item) {
    this->availableBodyTypes.push_back(item);
}


const vector<EyesColour> &AvailableFeatures::getAvailableEyesColours() const {
    return availableEyesColours;
}

const vector<HairType> &AvailableFeatures::getAvailableHairTypes() const {
    return availableHairTypes;
}

const vector<BodyType> &AvailableFeatures::getAvailableBodyTypes() const {
    return availableBodyTypes;
}


std::ostream &operator<<(std::ostream &os, const AvailableFeatures &features) {
    os << "Available features details:" << std::endl;
    os << "Eyes types: " << std::endl;
    for (const auto &eyesColour : features.getAvailableEyesColours()) {
        os << eyesColour << std::endl;
    }
    os << "Hair types:" << std::endl;
    for (const auto &hairType : features.getAvailableHairTypes()) {
        os << hairType << std::endl;
    }
    os << "Bottom items:" << std::endl;
    for (const auto &bodyType : features.getAvailableBodyTypes()) {
        os << bodyType << std::endl;
    }
    return os;
}