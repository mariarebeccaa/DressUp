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
    Clothing(const std::string &name);

    const string &getName() const;

    void setName(const string &name);


};

#endif //OOP_CLOTHING_H
