//
// Created by Lucas on 3/18/2023.
//

#include "Hand.h"

Hand::Hand(int maxSize) {
    this->maxSize = maxSize;
    draw(maxSize);
    this->currentSize = cards.size();
}

void Hand::draw(int numCards) {
    for (int i = 0; i < numCards; i ++) {
        this->cards.emplace_back(std::move(Deck::cards.back()));
        Deck::cards.erase(Deck::cards.end());
    }
}

void Hand::printHand() {
    for (int i = 0; i < getCurrentSize(); i++) {
        std::cout << this->cards[i] << '\n';
    }
}

int Hand::getCurrentSize(bool update) {
    if (update) {
        updateCurrentSize();
    }
    return currentSize;
}

void Hand::updateCurrentSize() {
    this->currentSize = cards.size();
}
