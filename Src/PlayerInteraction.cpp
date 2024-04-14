#include <iostream>
#include "../Headers/PlayerInteraction.h"
#include "../Headers/Features.h"
#include "../Headers/AvailableFeatures.h"

std::vector<Features *> PlayerInteraction::selectFeatures(const AvailableFeatures &availableFeatures) {
    std::vector<Features *> chosenFeatures;

    std::cout << "Available features:" << std::endl;
    std::cout << "Write 1 for Eyes" << std::endl;
    std::cout << "Write 2 for Hair" << std::endl;
    std::cout << "Write 3 for Body" << std::endl;

    int choice;
    do {
        std::cout << "Choose the features that you want from the available ones (0 to exit): ";
        std::cin >> choice;

        if (choice > 0 && choice <= 4) {
            switch (choice) {
                case 1: {
                    std::cout << "Choose an eyes type" << std::endl;
                    const auto &eyesTypes = availableFeatures.getAvailableEyesTypes();
                    for (size_t i = 0; i < eyesTypes.size(); i++) {
                        std::cout << i + 1 << ". " << eyesTypes[i].getName() << std::endl;
                    }
                    int eyesChoice;
                    std::cin >> eyesChoice;
                    if (eyesChoice > 0 &&eyesChoice <= eyesTypes.size()) {
                        chosenFeatures.push_back(new EyesType(eyesTypes[eyesChoice - 1].getName()));
                    }
                    break;
                }
                case 2: {
                    std::cout << "Choose a hair type:" << std::endl;
                    const auto &hairTypes = availableFeatures.getAvailableHairTypes();
                    for (size_t i = 0; i < hairTypes.size(); i++) {
                        std::cout << i + 1 << ". " << hairTypes[i].getName() << std::endl;
                    }
                    int hairChoice;
                    std::cin >> hairChoice;
                    if (hairChoice > 0 && hairChoice <= hairTypes.size()) {
                        chosenFeatures.push_back(new HairType(hairTypes[hairChoice - 1].getName()));
                    }
                    break;
                }
                case 3: {
                    std::cout << "Choose a body type:" << std::endl;
                    const auto &bodyTypes = availableFeatures.getAvailableBodyTypes();
                    for (size_t i = 0; i < bodyTypes.size(); i++) {
                        std::cout << i + 1 << ". " << bodyTypes[i].getName() << std::endl;
                    }
                    int bodyChoice;
                    std::cin >> bodyChoice;
                    if (bodyChoice > 0 && bodyChoice <= bodyTypes.size()) {
                        chosenFeatures.push_back(new BodyType(bodyTypes[bodyChoice - 1].getName()));
                    }
                    break;
                }
            }
        } else if (choice != 0) {
            std::cout << "Invalid option. Please choose again." << std::endl;
        }
    } while (choice != 0);

    return chosenFeatures;
}

std::vector<Clothing *> PlayerInteraction::selectClothing(const AvailableClothing &availableClothing) {
    std::vector<Clothing *> chosenClothing;

    std::cout << "Available clothing items:" << std::endl;
    std::cout << "Write 1 for Head" << std::endl;
    std::cout << "Write 2 for Top" << std::endl;
    std::cout << "Write 3 for Buttom" << std::endl;
    std::cout << "Write 4 for Shoes" << std::endl;

    int choice;
    do {
        std::cout << "Choose the clothing item(s) that you want from the available ones (0 to exit): ";
        std::cin >> choice;

        if (choice > 0 && choice <= 4) {
            switch (choice) {
                case 1: {
                    std::cout << "Choose a head item:" << std::endl;
                    const auto &headItems = availableClothing.getAvailableHeadItems();
                    for (size_t i = 0; i < headItems.size(); ++i) {
                        std::cout << i + 1 << ". " << headItems[i].getName() << std::endl;
                    }
                    int headChoice;
                    std::cin >> headChoice;
                    if (headChoice > 0 && headChoice <= headItems.size()) {
                        chosenClothing.push_back(new HeadItem(headItems[headChoice - 1].getName()));
                    }
                    break;
                }
                case 2: {
                    std::cout << "Choose a top item:" << std::endl;
                    const auto &topItems = availableClothing.getAvailableTopItems();
                    for (size_t i = 0; i < topItems.size(); i++) {
                        std::cout << i + 1 << ". " << topItems[i].getName() << std::endl;
                    }
                    int topChoice;
                    std::cin >> topChoice;
                    if (topChoice > 0 && topChoice <= topItems.size()) {
                        chosenClothing.push_back(new TopItem(topItems[topChoice - 1].getName()));
                    }
                    break;
                }
                case 3: {
                    std::cout << "Choose a buttom item:" << std::endl;
                    const auto &buttomItems = availableClothing.getAvailableButtomItems();
                    for (size_t i = 0; i < buttomItems.size(); i++) {
                        std::cout << i + 1 << ". " << buttomItems[i].getName() << std::endl;
                    }
                    int buttomChoice;
                    std::cin >> buttomChoice;
                    if (buttomChoice > 0 && buttomChoice <= buttomItems.size()) {
                        chosenClothing.push_back(new ButtomItem(buttomItems[buttomChoice - 1].getName()));
                    }
                    break;
                }
                case 4: {
                    std::cout << "Choose a shoes item:" << std::endl;
                    const auto &shoesItems = availableClothing.getAvailableShoesItems();
                    for (size_t i = 0; i < shoesItems.size(); i++) {
                        std::cout << i + 1 << ". " << shoesItems[i].getName() << std::endl;
                    }
                    int shoesChoice;
                    std::cin >> shoesChoice;
                    if (shoesChoice > 0 && shoesChoice <= shoesItems.size()) {
                        chosenClothing.push_back(new TopItem(shoesItems[shoesChoice - 1].getName()));
                    }
                    break;
                }
            }
        } else if (choice != 0) {
            std::cout << "Invalid option. Please choose again." << std::endl;
        }
    } while (choice != 0);

    return chosenClothing;
}