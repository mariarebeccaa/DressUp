//
// Created by asus on 14.04.2024.
//

#include "../Headers/AvailableFeatures.h"

void AvailableFeatures::addEyesType(const EyesType &item) {
    this->availableEyesTypes.push_back(item);
}

void AvailableFeatures::addHairType(const HairType &item) {
    this->availableHairTypes.push_back(item);
}

void AvailableFeatures::addBodyType(const BodyType &item) {
    this->availableBodyTypes.push_back(item);
}


const vector<EyesType> &AvailableFeatures::getAvailableEyesTypes() const {
    return availableEyesTypes;
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
    for (const auto &eyesType : features.getAvailableEyesTypes()) {
        os << eyesType << std::endl;
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