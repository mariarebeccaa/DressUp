#include "../Headers/HeadItem.h"


HeadItem::HeadItem(const string &name) : Clothing(name) {}

ostream &operator<<(ostream &os, const HeadItem &item) {
    os << "HeadItem: " <<item.name;//Acceseaza direct membrul name
    return os;
}

HeadItem* HeadItem::clone() const {
    return new HeadItem(*this);
}

std::string HeadItem::getDetail() const {
    return "You chose: " + name;
}

HeadItem::~HeadItem() = default;
