#ifndef OOP_AVATAR_H
#define OOP_AVATAR_H

#include <string>
#include <iostream>
#include <vector>
#include "Features.h"
#include "Clothing.h"
#include "AvailableClothing.h"

class Avatar {
private:
    std::string name, gender;
    int age;
    std::vector<Features*> features;
    std::vector<Clothing*> clothing;

public:

    Avatar(const string &name, const string &gender, int age, const vector<Features *> &features,
           const vector<Clothing *> &clothing);

    Avatar(const Avatar& other);

    Avatar();

    Avatar& operator=(const Avatar& other);

    virtual ~Avatar();

    friend ostream &operator<<(ostream &os, const Avatar &avatar);

    void setClothing(const vector<Clothing *> &clothing);

    const vector<Clothing *> &getClothing() const;

    void setFeatures(const vector<Features *> &features);

    const vector<Features *> &getFeatures() const;
};

#endif //OOP_AVATAR_H
