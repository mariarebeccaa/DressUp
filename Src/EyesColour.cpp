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
return new EyesColour( *this);
}
// Constructorul de copiere
EyesColour::EyesColour(const EyesColour &other) : Features(other.getName()) {}
// Operatorul de atribuire
EyesColour& EyesColour::operator=(const EyesColour& other) {
    swap(*this, const_cast<EyesColour &>(other));
    return *this;
}
void EyesColour::swap(EyesColour& first, EyesColour& second) noexcept {
    using std::swap;
    swap(first.name, second.name);
}

EyesColour::~EyesColour() = default;


