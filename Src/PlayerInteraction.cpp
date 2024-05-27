#include <iostream>
#include "../Headers/PlayerInteraction.h"

std::vector<Features *> PlayerInteraction::selectFeatures(const AvailableFeatures &availableFeatures) {
    std::vector<Features *> chosenFeatures;

    std::cout << "Available features:" << "\n";
    std::cout << "Write 1 for Eyes" << "\n";
    std::cout << "Write 2 for Hair" << "\n";
    std::cout << "Write 3 for Body" << "\n";

    int choice;
    do {
        std::cout << "Choose the features that you want from the available ones (0 to exit): ";
        std::cin >> choice;

        if (choice < 0 || choice > 3) {
            throw AvatarFeatureException("Invalid feature choice.");
        } else if (choice > 0) {
            //if (choice > 0 && choice <= 4) {
            switch (choice) {
                case 1: {
                    std::cout << "Choose an eyes type" << std::endl;
                    const auto &eyesColours = availableFeatures.getAvailableEyesColours();
                    for (size_t i = 0; i < eyesColours.size(); i++) {
                        std::cout << i + 1 << ". " << eyesColours[i].getName() << "\n";
                    }
                    int eyesChoice;
                    std::cin >> eyesChoice;
                    if (eyesChoice > 0 && eyesChoice <= static_cast<int>(eyesColours.size())) {
                        chosenFeatures.push_back(new EyesColour(eyesColours[eyesChoice - 1].getName()));
                        std::cout << eyesColours[eyesChoice - 1].getDetail() <<"\n";
                        std::cout <<"Amaizing choice!" << "\n";
                    }else {
                        throw AvatarFeatureException("Invalid eyes choice.");
                    }
                    break;
                }
                case 2: {
                    std::cout << "Choose a hair type:" << "\n";
                    const auto &hairTypes = availableFeatures.getAvailableHairTypes();
                    for (size_t i = 0; i < hairTypes.size(); i++) {
                        std::cout << i + 1 << ". " << hairTypes[i].getName() << "\n";

                    }
                    int hairChoice;
                    std::cin >> hairChoice;
                    if (hairChoice > 0 && hairChoice <= static_cast<int>(hairTypes.size())) {
                        chosenFeatures.push_back(new HairType(hairTypes[hairChoice - 1].getName()));
                        std::cout << hairTypes[hairChoice - 1].getDetail() <<"\n";
                        std::cout <<"Wow! Keep going!" <<"\n";
                    }else {
                        throw AvatarFeatureException("Invalid hair choice.");
                    }
                    break;
                }
                case 3: {
                    std::cout << "Choose a body type:" << "\n";
                    const auto &bodyTypes = availableFeatures.getAvailableBodyTypes();
                    for (size_t i = 0; i < bodyTypes.size(); i++) {
                        std::cout << i + 1 << ". " << bodyTypes[i].getName() << "\n";
                    }
                    int bodyChoice;
                    std::cin >> bodyChoice;
                    if (bodyChoice > 0 && bodyChoice <= static_cast<int>(bodyTypes.size())) {
                        chosenFeatures.push_back(new BodyType(bodyTypes[bodyChoice - 1].getName()));
                        std::cout << bodyTypes[bodyChoice - 1].getDetail() <<"\n";
                        std::cout <<"Wow!" << "\n";
                    }else {
                        throw AvatarFeatureException("Invalid body choice.");
                    }
                    break;
                }
                default: {
                    // Mesaj de eroare pentru opțiune invalidă
                    std::cout << "Invalid option. Please choose again." << "\n";
                    break;
                }
            }
        }
//        else if (choice != 0) {
//            std::cout << "Invalid option. Please choose again." << "\n";
//        }

    } while (choice != 0);

    // Downcasting cu dynamic_cast
    for (auto feature : chosenFeatures) {
        if (auto eyesColour = dynamic_cast<EyesColour *>(feature)) {
            std::cout << "For eyes: " << eyesColour->getDetail() << "\n";
        } else if (auto hairType = dynamic_cast<HairType *>(feature)) {
            std::cout << "For hair: " << hairType->getDetail() << "\n";
        } else if (auto bodyType = dynamic_cast<BodyType *>(feature)) {
            std::cout << "For body: " << bodyType->getDetail() << "\n";
        }
    }

    return chosenFeatures;
}

std::vector<Clothing *> PlayerInteraction::selectClothing(const AvailableClothing &availableClothing) {
    std::vector<Clothing *> chosenClothing;

    std::cout << "Available clothing items:" << "\n";
    std::cout << "Write 1 for Head" << "\n";
    std::cout << "Write 2 for Top" << "\n";
    std::cout << "Write 3 for Buttom" << "\n";
    std::cout << "Write 4 for Shoes" << "\n";

    int choice;
    do {
        std::cout << "Choose the clothing item(s) that you want from the available ones (0 to exit): ";
        std::cin >> choice;

       // if (choice > 0 && choice <= 4) {
        if (choice < 0 || choice > 4) {
            throw AvatarClothingException("Invalid clothing choice.");
        }
        else if (choice > 0) {
            switch (choice) {
                case 1: {
                    std::cout << "Choose a head item:" << "\n";
                    const auto &headItems = availableClothing.getAvailableHeadItems();
                    for (size_t i = 0; i < headItems.size(); ++i) {
                        std::cout << i + 1 << ". " << headItems[i].getName() << "\n";
                    }
                    int headChoice;
                    std::cin >> headChoice;
                    if (headChoice > 0 && headChoice <= static_cast<int>(headItems.size())) {
                        chosenClothing.push_back(new HeadItem(headItems[headChoice - 1].getName()));
                        std::cout << headItems[headChoice - 1].getDetail() <<"\n";
                        std::cout <<"Wow!" << "\n";
                    }else {
                        throw AvatarClothingException("Invalid head item choice.");
                    }
                    break;
                }
                case 2: {
                    std::cout << "Choose a top item:" << "\n";
                    const auto &topItems = availableClothing.getAvailableTopItems();
                    for (size_t i = 0; i < topItems.size(); i++) {
                        std::cout << i + 1 << ". " << topItems[i].getName() << "\n";
                    }
                    int topChoice;
                    std::cin >> topChoice;
                    if (topChoice > 0 && topChoice <= static_cast<int>(topItems.size())) {
                        chosenClothing.push_back(new TopItem(topItems[topChoice - 1].getName()));
                        std::cout << topItems[topChoice - 1].getDetail() <<"\n";
                        std::cout <<"Amazing!" << "\n";
                    }else {
                        throw AvatarClothingException("Invalid top item choice.");
                    }
                    break;
                }
                case 3: {
                    std::cout << "Choose a buttom item:" << "\n";
                    const auto &buttomItems = availableClothing.getAvailableButtomItems();
                    for (size_t i = 0; i < buttomItems.size(); i++) {
                        std::cout << i + 1 << ". " << buttomItems[i].getName() << "\n";
                    }
                    int buttomChoice;
                    std::cin >> buttomChoice;
                    if (buttomChoice > 0 && buttomChoice <= static_cast<int>(buttomItems.size())) {
                        chosenClothing.push_back(new ButtomItem(buttomItems[buttomChoice - 1].getName()));
                        std::cout << buttomItems[buttomChoice - 1].getDetail() <<"\n";
                        std::cout <<"Good choice!" << "\n";
                    }else {
                        throw AvatarClothingException("Invalid bottom item choice.");
                    }
                    break;
                }
                case 4: {
                    std::cout << "Choose a shoes item:" << "\n";
                    const auto &shoesItems = availableClothing.getAvailableShoesItems();
                    for (size_t i = 0; i < shoesItems.size(); i++) {
                        std::cout << i + 1 << ". " << shoesItems[i].getName() << "\n";
                    }
                    int shoesChoice;
                    std::cin >> shoesChoice;
                    if (shoesChoice > 0 && shoesChoice <= static_cast<int>(shoesItems.size())) {
                        chosenClothing.push_back(new ShoesItem(shoesItems[shoesChoice - 1].getName()));
                        std::cout << shoesItems[shoesChoice - 1].getDetail() <<"\n";
                        std::cout <<"It looks great!" << "\n";
                    }else
                    {
                        throw AvatarClothingException("Invalid shoes item choice.");
                    }
                    break;
                }
                default: {
                    // Mesaj de eroare pentru opțiune invalidă
                    std::cout << "Invalid option. Please choose again." << "\n";
                    break;
                }
            }
        } //else if (choice != 0) {
//            std::cout << "Invalid option. Please choose again." << "\n";
//        }

    }  while (choice != 0);

    // Downcasting cu dynamic_cast
    for (auto clothing: chosenClothing) {
        if (auto headItem = dynamic_cast<HeadItem *>(clothing)) {
            std::cout << "For head: " << headItem->getDetail() << "\n";
        } else if (auto topItem = dynamic_cast<TopItem *>(clothing)) {
            std::cout << "For top: " << topItem->getDetail() << "\n";
        } else if (auto buttomItem = dynamic_cast<ButtomItem *>(clothing)) {
            std::cout << "For buttom: " << buttomItem->getDetail() << "\n";
        } else if (auto shoesItem = dynamic_cast<ShoesItem *>(clothing)) {
            std::cout << "For shoes: " << shoesItem->getDetail() << "\n";
        }
    }
    return chosenClothing;
}

