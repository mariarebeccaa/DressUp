#include <utility>

#include "../Headers/Avatar.h"

Avatar::Avatar(std::string  name, std::string  gender, int age, const std::vector<Features*>& features, const std::vector<Clothing*>& clothing)
        : name(std::move(name)), gender(std::move(gender)), age(age), features(features), clothing(clothing) {}

Avatar::~Avatar() = default;

std::ostream &operator<<(std::ostream &os, const Avatar &avatar) {
    os << "name: " << avatar.name <<"\n"<< " gender: " << avatar.gender <<"\n"<< " age: " << avatar.age <<"\n"<< " features: ";
    for (const auto& item : avatar.features) {
        os << item->getName() << ", ";
    }

    os <<"\n"<< " clothing: ";
    for (const auto& item : avatar.clothing) {
        os << item->getName() << ", ";
    }
    return os;
}
