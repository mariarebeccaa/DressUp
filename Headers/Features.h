#ifndef OOP_FEATURES_H
#define OOP_FEATURES_H

//#include <iostream>
//
//using namespace std;
//
//class Features{
//private:
//    std::string eyeColour, hairType, hairColour, bodyType;
//
//public:
//    Features(string eyeColour, const string &hairType, const string &hairColour, const string &bodyType);
//
//    friend ostream &operator<<(ostream &os, const Features &features);
//};

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Features {

protected:

    string name;

public:

    explicit Features(string name);
    virtual ~Features();

    [[nodiscard]] const string &getName() const;

    void setName(const string &name);

    [[nodiscard]] virtual Features* clone() const = 0;
    [[nodiscard]] virtual std::string getDetail() const = 0;


};
#endif //OOP_FEATURES_H
