#include "../Headers/ShoesItem.h"

ShoesItem::ShoesItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const ShoesItem &item) {
    os << "ShoesItem: " <<item.name;
    return os;
}
