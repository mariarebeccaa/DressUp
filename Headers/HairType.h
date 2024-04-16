
#ifndef OOP_HAIRTYPE_H
#define OOP_HAIRTYPE_H
#include <string>
#include <iostream>
#include "Features.h"

using namespace std;

class HairType : public Features {

public:
    explicit HairType(const string &name);

    ~HairType() override;

    friend ostream &operator<<(ostream &os, const HairType &item);

    // Constructorul de copiere
    HairType(const HairType &other);
    // Operatorul de atribuire
    HairType& operator=(const HairType& other);

    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] HairType* clone() const override;

private:
    static void swap(HairType& first, HairType& second) noexcept;
};


#endif //OOP_HAIRTYPE_H
