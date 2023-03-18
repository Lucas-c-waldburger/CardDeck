//
// Created by Lucas on 3/18/2023.
//

#ifndef CARDDECK_HAND_H
#define CARDDECK_HAND_H
#include <iostream>
#include <memory>
#include <vector>
#include "Card.h"
#include "Deck.h"


class Hand {
public:
    Hand() = default;
    Hand(int maxSize);

    std::vector<std::unique_ptr<Card>> cards;

    void draw(int numCards);
    void printHand();
    int getCurrentSize(bool update = true);
    void updateCurrentSize();

private:
    int maxSize;
    int currentSize;
};


#endif //CARDDECK_HAND_H
