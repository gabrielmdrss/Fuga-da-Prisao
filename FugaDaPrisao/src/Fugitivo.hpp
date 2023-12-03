#ifndef FUGITIVO_HPP
#define FUGITIVO_HPP

#include "Cpp-ASCII-Game-Engine-main/ASCII_Engine/ObjetoDeJogo.hpp"

class Fugitivo : public ObjetoDeJogo
{
public:
    Fugitivo(const ObjetoDeJogo &obj, int life=100) : ObjetoDeJogo(obj), life(life), chave(false) {}
    virtual ~Fugitivo()	{}

    bool isAlive() const { return life != 0; }
    int getLife() const { return life; }

    void sofrerAtaque(int ataque) { life = (life - ataque >= 0)?(life - ataque):0; }


    void pegarChave() { chave = true; }
    bool possuiChave() const { return chave; }

private:
    int life;
    bool chave;
};

#endif