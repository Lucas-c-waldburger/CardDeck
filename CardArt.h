#ifndef ARRAYOBJECTS_CARDART_H
#define ARRAYOBJECTS_CARDART_H

#include <iostream>
#include <vector>


class CardArt {
public:
    CardArt();

    static std::string arts[13][4];

private:

    std::string suits[4]{"^", "v", "&", "o"};

    std::string line1 = " _______ \n";
    std::string line2;
    std::string line3;
    std::string line4;
    std::string line5;
    std::string line6;

    std::string get2(std::string suit);
    std::string get3(std::string suit);
    std::string get4(std::string suit);
    std::string get5(std::string suit);
    std::string get6(std::string suit);
    std::string get7(std::string suit);
    std::string get8(std::string suit);
    std::string get9(std::string suit);
    std::string get10(std::string suit);
    std::string getJack(std::string suit);
    std::string getQueen(std::string suit);
    std::string getKing(std::string suit);
    std::string getAce(std::string suit);

    std::string combineLines();
    void populateArts();
};

#endif //ARRAYOBJECTS_CARDART_H
