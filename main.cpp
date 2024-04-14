#include <iostream>
#include <string>
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
    EyesType *eyesType1 = new EyesType("blue almond eyes");
    availableFeatures.addEyesType(*eyesType1);
    EyesType *eyesType2 = new EyesType("brown monolid eyes");
    availableFeatures.addEyesType(*eyesType2);
    EyesType *eyesType3 = new EyesType("green round eyes");
    availableFeatures.addEyesType(*eyesType3);

    HairType *hairType1 = new HairType("short blonde hair");
    availableFeatures.addHairType(*hairType1);
    HairType *hairType2 = new HairType("long brunette hair");
    availableFeatures.addHairType(*hairType2);

    BodyType *bodyType1 = new BodyType("slim");
    availableFeatures.addBodyType(*bodyType1);

    // Selectam hainele
    vector<Features*> chosenFeatures = PlayerInteraction::selectFeatures(availableFeatures);

    // Creeam un obiect AvailableClothing
    AvailableClothing availableClothing;

    // Adaugăm articole de îmbrăcăminte la AvailableClothing
    HeadItem *headItem1 = new HeadItem("hat");
    availableClothing.addHeadItem(*headItem1);
    HeadItem *headItem2 = new HeadItem("cap");
    availableClothing.addHeadItem(*headItem2);
    HeadItem *headItem3 = new HeadItem("scarf");
    availableClothing.addHeadItem(*headItem3);


    TopItem *topItem1 = new TopItem("T-shirt");
    availableClothing.addTopItem(*topItem1);
    TopItem *topItem2 = new TopItem("sweatshirt");
    availableClothing.addTopItem(*topItem2);
    TopItem *topItem3 = new TopItem("jacket");
    availableClothing.addTopItem(*topItem3);
    TopItem *topItem4 = new TopItem("top");
    availableClothing.addTopItem(*topItem4);

    ButtomItem *buttomItem1 = new ButtomItem("jeans");
    availableClothing.addButtomItem(*buttomItem1);
    ButtomItem *buttomItem2 = new ButtomItem("skirt");
    availableClothing.addButtomItem(*buttomItem2);
    ButtomItem *buttomItem3 = new ButtomItem("pants");
    availableClothing.addButtomItem(*buttomItem3);

    ShoesItem *shoesItem1 = new ShoesItem("sneakers");
    availableClothing.addShoesItem(*shoesItem1);
    ShoesItem *shoesItem2 = new ShoesItem("sandals");
    availableClothing.addShoesItem(*shoesItem2);

    // Selectam hainele
    vector<Clothing*> chosenClothing = PlayerInteraction::selectClothing(availableClothing);


    // Cream un obiect Avatar utilizând hainele alese
    Avatar avatar1("Ana", "feminin", 20, chosenFeatures, chosenClothing);

    // Afișam informațiile despre Avatar
    cout << avatar1 << endl;


    return 0;
}