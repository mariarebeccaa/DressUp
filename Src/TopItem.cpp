#include "../Headers/TopItem.h"

TopItem::TopItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const TopItem &item) {
    os << "topItem: " << item.name;
    return os;
}
