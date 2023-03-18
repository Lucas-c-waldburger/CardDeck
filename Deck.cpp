//
// Created by Lower School Music on 3/17/23.
//

#include "Deck.h"
#include <random>



std::vector<std::unique_ptr<Card>> Deck::cards;

Deck::Deck(int maxSize) {
    this->maxSize = maxSize;
    populate();
    this->currentSize = cards.size();

    mt.seed(rd());
    setDistrib(0, maxSize-1);
}

void Deck::populate() {
    for (int s = 0; s < 4; s++) {
        for (int n = 2; n < 15; n++) {
            cards.emplace_back(std::make_unique<Card>(n, s));
        }
    }

}


void Deck::shuffle() {
    int maxNum = maxSize - 1;

    for (int i = 0; i < maxNum; i++) {
        setDistrib(i + 1, maxNum);
        int randIndex = getRand();
        std::cout << "current card index: " << i << ", current card value: " << cards[i]->getValue() << std::endl;
        std::cout << "card to swap with it index: " << randIndex << ", card to swap with it value: "
                  << cards[randIndex]->getValue() << std::endl;
        std::swap(cards[i], cards[randIndex]);
        std::cout << "current card index is now: " << i << ", current card value is now: " << cards[i]->getValue()
                  << std::endl;
        std::cout << "original card that got swapped index: " << randIndex << ", original card that got swapped value: "
                  << cards[randIndex]->getValue() << std::endl;
    }
}

int Deck::getRand() {
    return distrib(mt);
}

void Deck::setDistrib(int minNum, int maxNum) {
    distrib.param(std::uniform_int_distribution<int>::param_type(minNum, maxNum));
}

int Deck::getCurrentSize(bool update) {
    if (update) {
        updateCurrentSize();
    }
    return currentSize;
}

void Deck::updateCurrentSize() {
    this->currentSize = cards.size();
}

