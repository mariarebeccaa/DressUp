#include "../Headers/RandomGenerationStrategy.h"

int SimpleRandomGenerationStrategy::getRandomChoice(int maxChoice) const {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, maxChoice);
    return dist(gen);
}