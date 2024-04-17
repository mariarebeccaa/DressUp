#include "../Headers/TopItem.h"

TopItem::TopItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const TopItem &item) {
    os << "topItem: " << item.name;
    return os;
}

TopItem* TopItem::clone() const {
    return new TopItem(*this);
}

std::string TopItem::getDetail() const {
    return "You chose: " + name;
}

TopItem::~TopItem() = default;
