#ifndef OOP_TOPITEM_H
#define OOP_TOPITEM_H


#include <ostream>
#include "Clothing.h"

class TopItem: public Clothing {
public:
    explicit TopItem(const string &name);

    friend ostream &operator<<(ostream &os, const TopItem &item);

    bool verifyAvailabilityClothingObj() const;
};


#endif //OOP_TOPITEM_H
