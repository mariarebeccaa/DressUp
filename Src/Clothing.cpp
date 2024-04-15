#include "../Headers/Clothing.h"

using namespace std;


Clothing::Clothing(const string &name) : name(name) {}

const string &Clothing::getName() const {
    return name;
}

[[maybe_unused]] void Clothing::setName(const string &name) {
    Clothing::name = name;
}
