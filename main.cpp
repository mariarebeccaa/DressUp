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
#include "Headers/AvatarExceptions.h"
using namespace std;

int main() {
    bool avatarCreated = false;
    while (!avatarCreated) {
        try {
            // Cream un obiect AvailableFeatures
            AvailableFeatures availableFeatures;

            //Adaugam tipuri de trasaturi la AvailableFeatures
            auto *eyesColour1 = new EyesColour("blue almond eyes");
            availableFeatures.addEyesColour(*eyesColour1);
            auto *eyesColour2 = new EyesColour("brown monolid eyes");
            availableFeatures.addEyesColour(*eyesColour2);
            auto *eyesColour3 = new EyesColour("green round eyes");
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

            std::string name;
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cin.ignore();

            std::string gender;
            std::cout << "Enter gender: ";
            std::cin >> gender;
            std::cin.ignore();

            int age;
            std::cout << "Enter age: ";
            std::cin >> age;
            while (std::cin.fail() || age <= 0) {
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cout << "Invalid age. Please enter a positive integer: ";
                std::cin >> age;
            }
            std::cin.ignore(256, '\n');

            Avatar avatar1(name, gender, age, chosenFeatures, chosenClothing);

            // Afișam informațiile despre Avatar
            cout << avatar1 << endl;
            avatarCreated = true;  // Setam la true dacă avatarul a fost creat cu succes

        } catch (const AvatarFeatureException& e) {
            cout << "Feature selection error: " << e.what() << endl;
        } catch (const AvatarClothingException& e) {
            cout << "Clothing selection error: " << e.what() << endl;
        } catch (const AvatarException& e) {
            cout << "Avatar creation error: " << e.what() << endl;
        } catch (const std::exception& e) {
            cout << "Standard exception: " << e.what() << endl;
        } catch (...) {
            cout << "Unknown error occurred." << endl;
        }

        if (!avatarCreated) {
            char choice;
            cout << "Would you like to try creating the avatar again? (y/n): ";
            cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                break;
            }
        }
    }

    return 0;
}
