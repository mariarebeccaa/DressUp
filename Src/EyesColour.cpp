#include "../Headers/EyesColour.h"

using namespace std;

EyesColour::EyesColour(const string &name) : Features(name) {}

ostream &operator<<(ostream &os, const EyesColour &item) {
    os << "EyesColour: " <<item.name;//Acceseaza direct membrul name
    return os;
}
std::string EyesColour::getDetail() const {
return "You chose: " + name; // Exemplu de detaliu specific trăsăturii
}
EyesColour* EyesColour::clone() const {
return new EyesColour(*this);
}

EyesColour::~EyesColour() {

}
