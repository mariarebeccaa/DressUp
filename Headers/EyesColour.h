#ifndef OOP_EYESCOLOUR_H
#define OOP_EYESCOLOUR_H

#include <string>
#include <iostream>
#include "Clothing.h"
#include "Features.h"

using namespace std;

class EyesColour : public Features {

public:
    explicit EyesColour(const string &name);

    ~EyesColour() override;

    friend ostream &operator<<(ostream &os, const EyesColour &item);

    // Constructorul de copiere
    EyesColour(const EyesColour &other);
    // Operatorul de atribuire
    EyesColour& operator=(const EyesColour& other);


    [[nodiscard]] std::string getDetail() const override;

    [[nodiscard]] EyesColour* clone() const override;

private:
    static void swap(EyesColour& first, EyesColour& second) noexcept;
};


#endif //OOP_EYESCOLOUR_H