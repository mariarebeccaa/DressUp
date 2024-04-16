#ifndef OOP_BODYTYPE_H
#define OOP_BODYTYPE_H

#include <string>
#include <iostream>
#include "Clothing.h"
#include "Features.h"

using namespace std;

class BodyType : public Features {

public:
    explicit BodyType(const string &name);

    ~BodyType() override;

    friend ostream &operator<<(ostream &os, const BodyType &item);

    // Constructorul de copiere
    BodyType(const BodyType &other);
    // Operatorul de atribuire
    BodyType& operator=(const BodyType& other);

    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] BodyType* clone() const override;

private:
    static void swap(BodyType& first, BodyType& second) noexcept;
};

#endif //OOP_BODYTYPE_H
