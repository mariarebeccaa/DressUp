#ifndef OOP_AVAILABLECLOTHING_H
#define OOP_AVAILABLECLOTHING_H
#include <iostream>
#include <vector>
#include "HeadItem.h"
#include "TopItem.h"
#include "ButtomItem.h"
#include "ShoesItem.h"

using namespace std;

class AvailableClothing {
private:
    std::vector<HeadItem> availableHeadItems;
    std::vector<TopItem> availableTopItems;
    std::vector<ButtomItem> availableButtomItems;
    std::vector<ShoesItem> availableShoesItems;
public:
    void addHeadItem(const HeadItem &item);
    void addTopItem(const TopItem &item);
    void addButtomItem(const ButtomItem &item);
    void addShoesItem(const ShoesItem &item);

    [[nodiscard]] const vector<HeadItem> &getAvailableHeadItems() const;
    [[nodiscard]] const vector<TopItem> &getAvailableTopItems() const;
    [[nodiscard]] const vector<ButtomItem> &getAvailableButtomItems() const;
    [[nodiscard]] const vector<ShoesItem> &getAvailableShoesItems() const;

    friend ostream &operator<<(ostream &os, const AvailableClothing &clothing);

};


#endif //OOP_AVAILABLECLOTHING_H
