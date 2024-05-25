#ifndef OOP_AVATAR_H
#define OOP_AVATAR_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Features.h"
#include "Clothing.h"
#include "AvailableClothing.h"
#include "AvatarExceptions.h"

class Avatar {
private:

    std::string name, gender;
    int age;
    std::vector<Features*> features;
    std::vector<Clothing*> clothing;

public:
    Avatar(std::string  name, std::string  gender, int age, const std::vector<Features*>& features, const std::vector<Clothing*>& clothing);

    virtual ~Avatar();

    friend std::ostream &operator<<(std::ostream &os, const Avatar &avatar);

};

#endif //OOP_AVATAR_H
