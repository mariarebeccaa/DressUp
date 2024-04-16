#include <utility>

#include "../Headers/Features.h"
#include "../Headers/EyesColour.h"

using namespace std;


Features::Features(string name) : name(name) {}

// Copy constructor
//Features::Features(const Features& other) : name(other.name) {}

//// Assignment operator
//Features& Features::operator=(const Features& other) {
//    Features temp(other);  // Copiem obiectul sursă într-un obiect temporar folosind constructorul de copiere
//    swap(*this, temp);
//    return *this;
//}

const string &Features::getName() const {
    return name;
}

void Features::setName(const string &name) {
    Features::name = name;
}

Features::~Features() {

}




