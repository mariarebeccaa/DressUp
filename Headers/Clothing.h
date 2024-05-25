#ifndef OOP_CLOTHING_H
#define OOP_CLOTHING_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Clothing {

protected:

    string name;

public:
    explicit Clothing(std::string name);

    [[nodiscard]] const string &getName() const;
    [[nodiscard]] virtual Clothing* clone() const = 0;
    [[nodiscard]] virtual std::string getDetail() const = 0;


};

#endif //OOP_CLOTHING_H
