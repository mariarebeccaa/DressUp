#include <utility>

#include "../Headers/Features.h"

using namespace std;


Features::Features(string name) : name(std::move(name)) {}

const string &Features::getName() const {
    return name;
}

Features::~Features() = default;




