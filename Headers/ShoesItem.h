#ifndef OOP_SHOESITEM_H
#define OOP_SHOESITEM_H


#include <ostream>
#include "Clothing.h"

class ShoesItem : public Clothing{
public:
    explicit ShoesItem(const string &name);

    friend ostream &operator<<(ostream &os, const ShoesItem &item);

    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] ShoesItem* clone() const override;
};


#endif //OOP_SHOESITEM_H
