#include "../Headers/ShoesItem.h"

ShoesItem::ShoesItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const ShoesItem &item) {
    os << "ShoesItem: " <<item.name;
    return os;
}

ShoesItem* ShoesItem::clone() const {
    return new ShoesItem(*this);
}

std::string ShoesItem::getDetail() const {
    return "You chose: " + name;
}