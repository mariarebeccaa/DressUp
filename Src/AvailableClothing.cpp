#include "../Headers/AvailableClothing.h"

void AvailableClothing::addHeadItem(const HeadItem &item) {
    this->availableHeadItems.push_back(item);
}

void AvailableClothing::addTopItem(const TopItem &item) {
    this->availableTopItems.push_back(item);
}

void AvailableClothing::addButtomItem(const ButtomItem &item) {
    this->availableButtomItems.push_back(item);
}

void AvailableClothing::addShoesItem(const ShoesItem &item) {
    this->availableShoesItems.push_back(item);
}

const vector<HeadItem> &AvailableClothing::getAvailableHeadItems() const {
    return availableHeadItems;
}

const vector<TopItem> &AvailableClothing::getAvailableTopItems() const {
    return availableTopItems;
}

const vector<ButtomItem> &AvailableClothing::getAvailableButtomItems() const {
    return availableButtomItems;
}

const vector<ShoesItem> &AvailableClothing::getAvailableShoesItems() const {
    return availableShoesItems;
}

std::ostream &operator<<(std::ostream &os, const AvailableClothing &clothing) {
    os << "Available clothing details:" << std::endl;
    os << "Head items:" << std::endl;
    for (const auto &headItem : clothing.getAvailableHeadItems()) {
        os << headItem << std::endl;
    }
    os << "Top items:" << std::endl;
    for (const auto &topItem : clothing.getAvailableTopItems()) {
        os << topItem << std::endl;
    }
    os << "Bottom items:" << std::endl;
    for (const auto &bottomItem : clothing.getAvailableButtomItems()) {
        os << bottomItem << std::endl;
    }
    os << "Shoes items:" << std::endl;
    for (const auto &shoesItem : clothing.getAvailableShoesItems()) {
        os << shoesItem << std::endl;
    }
    return os;
}

