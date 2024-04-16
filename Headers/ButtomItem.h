#ifndef OOP_BUTTOMITEM_H
#define OOP_BUTTOMITEM_H


#include <ostream>
#include "Clothing.h"

class ButtomItem : public Clothing {
public:
    explicit ButtomItem(const string &name);

    friend ostream &operator<<(ostream &os, const ButtomItem &item);

    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] ButtomItem* clone() const override;
};


#endif //OOP_BUTTOMITEM_H
