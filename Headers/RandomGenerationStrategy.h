//
// Created by asus on 28.05.2024.
//

#ifndef OOP_RANDOMGENERATIONSTRATEGY_H
#define OOP_RANDOMGENERATIONSTRATEGY_H
#include <random>

class RandomGenerationStrategy {
public:
    virtual ~RandomGenerationStrategy() = default; // Destructor virtual
    [[nodiscard]] virtual int getRandomChoice(int maxChoice) const = 0;
};

class SimpleRandomGenerationStrategy : public RandomGenerationStrategy {
public:
    [[nodiscard]] int getRandomChoice(int maxChoice) const override;
};


#endif //OOP_RANDOMGENERATIONSTRATEGY_H
