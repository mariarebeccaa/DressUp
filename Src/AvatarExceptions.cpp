//
// Created by asus on 25.05.2024.
//

#include "../Headers/AvatarExceptions.h"

const char* AvatarException::what() const noexcept {
    return "Avatar exception occurred.";
}

// Implementarea pentru AvatarReadException
// Nu este necesară, deoarece metoda what() este deja implementată în clasa de bază.

// Implementarea pentru AvatarFeatureException
// Nu este necesară, deoarece metoda what() este deja implementată în clasa de bază.

// Implementarea pentru AvatarClothingException
// Nu este necesară, deoarece metoda what() este deja implementată în clasa de bază.
