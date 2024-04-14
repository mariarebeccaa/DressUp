#include "../Headers/HeadItem.h"


HeadItem::HeadItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const HeadItem &item) {
    os << "HeadItem: " <<item.name;//Acceseaza direct membrul name
    return os;
}
