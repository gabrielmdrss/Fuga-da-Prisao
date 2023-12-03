#ifndef GAME_HPP
#define GAME_HPP

#include "Fase1.hpp"
#include "Cpp-ASCII-Game-Engine-main/ASCII_Engine/Sprite.hpp"
#include "Cpp-ASCII-Game-Engine-main/ASCII_Engine/SpriteAnimado.hpp"

class Game {

public:
    Game(){}
    ~Game(){}

    static void run(){

        SpriteBuffer buffer(250,57);

        Fase1 fase1("Fase1", Sprite("rsc/fase1.txt"));
        fase1.init();
        fase1.run(buffer);
    }


};

#endif