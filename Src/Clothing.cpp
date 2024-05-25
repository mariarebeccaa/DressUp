#include <utility>

#include "../Headers/Clothing.h"

using namespace std;


Clothing::Clothing(string name) : name(std::move(name)) {}

const string &Clothing::getName() const {
    return name;
}

Clothing::~Clothing() = default;


