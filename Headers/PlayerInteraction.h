#ifndef PLAYER_INTERACTION_H
#define PLAYER_INTERACTION_H

#include "AvailableClothing.h"
#include "Features.h"
#include "AvailableFeatures.h"
#include <vector>
#include "AvatarExceptions.h"
#include "Avatar.h"
#include "RandomGenerationStrategy.h"

class PlayerInteraction {
private:
    static const RandomGenerationStrategy* randomStrategy;
    static std::mutex randomStrategyMutex;
public:
    PlayerInteraction(); // Constructor pentru a seta strategia implicita
    virtual ~PlayerInteraction(); // Destructor pentru a elibera memoria alocată pentru strategie

    static void setRandomStrategy(const RandomGenerationStrategy* strategy); // Metoda pentru a seta strategia
    static int getRandomChoice(int maxChoice) ; // Metoda pentru a obține o alegere aleatoare

    static std::vector<Features *> selectFeatures(const AvailableFeatures &availableFeatures);
    static std::vector<Clothing *> selectClothing(const AvailableClothing &availableClothing);
    static std::vector<Features *> generateRandomFeatures(const AvailableFeatures &availableFeatures);
    static std::vector<Clothing *> generateRandomClothing(const AvailableClothing &availableClothing);
};


#endif // PLAYER_INTERACTION_H
