#include <iostream>
#include <vector>
#include "Headers/Features.h"
#include "Headers/Clothing.h"
#include "Headers/Avatar.h"
#include "Headers/HeadItem.h"
#include "Headers/TopItem.h"
#include "Headers/ButtomItem.h"
#include "Headers/ShoesItem.h"
#include "Headers/AvailableClothing.h"
#include "Headers/PlayerInteraction.h"
#include "Headers/AvailableFeatures.h"

using namespace std;


int main() {

    // Cream un obiect AvailableFeatures
    AvailableFeatures availableFeatures;

    //Adaugam tipuri de trasaturi la AvailableFeatures
    auto *eyesColour1 = new EyesColour( "blue almond eyes");
    availableFeatures.addEyesColour(*eyesColour1);
    auto *eyesColour2 = new EyesColour( "brown monolid eyes");
    availableFeatures.addEyesColour(*eyesColour2);
    auto *eyesColour3 = new EyesColour( "green round eyes");
    availableFeatures.addEyesColour(*eyesColour3);

    auto *hairType1 = new HairType("short blonde hair");
    availableFeatures.addHairType(*hairType1);
    auto *hairType2 = new HairType("long brunette hair");
    availableFeatures.addHairType(*hairType2);

    auto *bodyType1 = new BodyType("slim");
    availableFeatures.addBodyType(*bodyType1);

    // Selectam trasaturile
    vector<Features*> chosenFeatures = PlayerInteraction::selectFeatures(availableFeatures);

    // Creeam un obiect AvailableClothing
    AvailableClothing availableClothing;

    // Adaugăm articole de îmbrăcăminte la AvailableClothing
    auto *headItem1 = new HeadItem("hat");
    availableClothing.addHeadItem(*headItem1);
    auto *headItem2 = new HeadItem("cap");
    availableClothing.addHeadItem(*headItem2);
    auto *headItem3 = new HeadItem("scarf");
    availableClothing.addHeadItem(*headItem3);


    auto *topItem1 = new TopItem("T-shirt");
    availableClothing.addTopItem(*topItem1);
    auto *topItem2 = new TopItem("sweatshirt");
    availableClothing.addTopItem(*topItem2);
    auto *topItem3 = new TopItem("jacket");
    availableClothing.addTopItem(*topItem3);
    auto *topItem4 = new TopItem("top");
    availableClothing.addTopItem(*topItem4);

    auto *buttomItem1 = new ButtomItem("jeans");
    availableClothing.addButtomItem(*buttomItem1);
    auto *buttomItem2 = new ButtomItem("skirt");
    availableClothing.addButtomItem(*buttomItem2);
    auto *buttomItem3 = new ButtomItem("pants");
    availableClothing.addButtomItem(*buttomItem3);

    auto *shoesItem1 = new ShoesItem("sneakers");
    availableClothing.addShoesItem(*shoesItem1);
    auto *shoesItem2 = new ShoesItem("sandals");
    availableClothing.addShoesItem(*shoesItem2);

    // Selectam hainele
    vector<Clothing*> chosenClothing = PlayerInteraction::selectClothing(availableClothing);


    // Cream un obiect Avatar utilizând hainele alese
    Avatar avatar1("Ana", "feminin", 20, chosenFeatures, chosenClothing);

    // Afișam informațiile despre Avatar
    cout << avatar1 << endl;

    return 0;
}