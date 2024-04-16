//
// Created by asus on 12.04.2024.
//

#include "../Headers/ButtomItem.h"

ButtomItem::ButtomItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const ButtomItem &item) {
    os << "ButtomItem: " << item.name;
    return os;
}

ButtomItem* ButtomItem::clone() const {
    return new ButtomItem(*this);
}

std::string ButtomItem::getDetail() const {
    return "You chose: " + name;
}