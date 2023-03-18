//
// Created by Lower School Music on 3/17/23.
//

#ifndef ARRAYOBJECTS_DECK_H
#define ARRAYOBJECTS_DECK_H
#include "Card.h"
#include <random>
#include <memory>

enum DeckSizes {
    poker = 52,
};


class Deck {
public:
    explicit Deck(int maxSize = poker);

    static std::vector<std::unique_ptr<Card>> cards;
    static void populate();

    void shuffle();

    std::mt19937 mt;
    std::random_device rd;
    std::uniform_int_distribution<> distrib;
    void setDistrib(int minNum, int maxNum);
    int getRand();

    int getCurrentSize(bool update = true);
    void updateCurrentSize();

private:
    int maxSize;
    int currentSize;

};


#endif //ARRAYOBJECTS_DECK_H
