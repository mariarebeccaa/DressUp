#include <utility>

#include "../Headers/Features.h"

//using namespace std;
//
//Features::Features(const string eyeColour, const string &hairType, const string &hairColour, const string &bodyType)
//        : eyeColour(eyeColour), hairType(hairType), hairColour(hairColour), bodyType(bodyType) {
//    //std::cout<<"Constr de initializare Trasaturi\n";
//}
//
//ostream &operator<<(ostream &os, const Features &features) {
//    os << "eyeColour: " << features.eyeColour <<"\n"<< "hairType: " << features.hairType <<"\n"<< "hairColour: "
//       << features.hairColour <<"\n"<< "bodyType: " << features.bodyType;
//    return os;
//}
using namespace std;


Features::Features(const string &name) : name(name) {}

const string &Features::getName() const {
    return name;
}

void Features::setName(const string &name) {
    Features::name = name;
}




