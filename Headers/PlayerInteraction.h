#ifndef PLAYER_INTERACTION_H
#define PLAYER_INTERACTION_H

#include "AvailableClothing.h"
#include "Features.h"
#include "AvailableFeatures.h"
#include <vector>
#include "AvatarExceptions.h"
class PlayerInteraction {
public:
    static std::vector<Features *> selectFeatures(const AvailableFeatures &availableFeatures);
    static std::vector<Clothing *> selectClothing(const AvailableClothing &availableClothing);
};

#endif // PLAYER_INTERACTION_H
