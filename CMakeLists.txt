cmake_minimum_required(VERSION 3.24)
project(CardDeck)

set(CMAKE_CXX_STANDARD 20)

add_executable(CardDeck main.cpp Card.cpp CardArt.cpp Deck.cpp Hand.h Hand.cpp)
