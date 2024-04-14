#ifndef OOP_HEADITEM_H
#define OOP_HEADITEM_H

#include <string>
#include <iostream>
#include "Clothing.h"

class HeadItem : public Clothing {

public:
    explicit HeadItem(const string &name);

    friend ostream &operator<<(ostream &os, const HeadItem &item);


};


#endif //OOP_HEADITEM_H
