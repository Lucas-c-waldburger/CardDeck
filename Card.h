//
// Created by Lower School Music on 3/17/23.
//

#ifndef ARRAYOBJECTS_CARD_H
#define ARRAYOBJECTS_CARD_H

#include <iostream>
#include "CardArt.h"


class Card {
public:
    Card(int value, int suit);

    const static int diamonds;
    const static int hearts;
    const static int clubs;
    const static int spades;


    int getValue() const;
    void setValue(int value, bool update = false);

    int getSuit() const;
    void setSuit(int suit, bool update = false);

    std::string getArt();
    void setArt(std::string cardArt);
    void updateArt();

    std::string determineColor();
    std::string getColor() const;
    void setColor(std::string color);

private:
    int value;
    int suit;
    std::string color;
    std::string art;

    friend std::ostream& operator<<(std::ostream& stream, const Card& card);

};


#endif //ARRAYOBJECTS_CARD_H
