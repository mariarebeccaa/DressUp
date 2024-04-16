#ifndef OOP_TOPITEM_H
#define OOP_TOPITEM_H


#include <ostream>
#include "Clothing.h"

class TopItem: public Clothing {
public:
    explicit TopItem(const string &name);

    friend ostream &operator<<(ostream &os, const TopItem &item);

    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] TopItem* clone() const override;
};


#endif //OOP_TOPITEM_H
