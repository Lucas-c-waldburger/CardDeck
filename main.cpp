#include <iostream>
#include "Card.h"
#include "CardArt.h"
#include "Deck.h"
#include "Hand.h"


int main() {
    CardArt cardArt;

//    Card Hearts3 = Card{2, Card::clubs};
//    for (int i = 0; i < 13; i++) {
//        Hearts3.setValue(i+2, true);
//        std::cout << Hearts3.getArt() << '\n';
//    }


    Deck deck;
    deck.shuffle();
    Hand hand(7);


//    std::vector<std::unique_ptr<Card>> hand;
//
    std::cout << deck.getCurrentSize() << std::endl;
    std::cout << hand.getCurrentSize() << std::endl;
//
//    hand.emplace_back(std::move(deck.cards.back()));
////    hand.emplace_back(std::move(deck.cards[]));
////    hand.emplace_back(std::move(deck.cards[0]));
//
//    std::cout << *hand[0] << std::endl;

//    std::cout << deck.cards[51] << std::endl;
//    std::cout << *deck.cards[51] << std::endl;

//    hand[0] = std::move(deck.cards[51]);



//    std::cout << hand[0] << std::endl;
//    std::cout << *hand[0] << std::endl;
//    std::cout << hand[51] << std::endl;
//    std::cout << *deck.cards[0] << std::endl;

//    deck.shuffle();
//
//    for (std::unique_ptr<Card> &card: deck.cards) {
//    deck.cards.erase(deck.cards.end());
//    std::cout << deck.cards.size() << std::endl;
//    std::cout << *deck.cards[50] << std::endl;
//    }

//    Card* card1 = new Card(1, 1);
//    Card* card2 = new Card(2, 2);
//    Card* card3 = new Card(3, 3);
//    Card* card4 = new Card(4, 1);
//    Card* card5 = new Card(5, 1);
//    Card* card6 = new Card(6, 1);
//
//
//    std::vector<Card*> firstCards;
//    firstCards.push_back(card1);
//    firstCards.push_back(card2);
//    firstCards.push_back(card3);
//    firstCards.push_back(card4);
//    firstCards.push_back(card5);
//    firstCards.push_back(card6);
//
//
//    std::vector<Card*> secondCards(6);
//
//
//
//    for (int i = 0; i < 6; i++) {
//        secondCards[i] = firstCards[0];
//        std::cout << firstCards[0] << '\n';
//        firstCards.erase(firstCards.begin());
//        std::cout << *firstCards[0] << '\n';
//    }
//
//    for (Card* card: firstCards) {
//        std::cout << *card;
//    }

    return 0;
}
