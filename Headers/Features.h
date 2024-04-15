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
   // Features(const std::string &name);
   explicit Features(string name);

    //const string &getName() const;
    [[nodiscard]] const string &getName() const;

    //void setName(const string &name);
    [[maybe_unused]] void setName(const string &name);


};
#endif //OOP_FEATURES_H
