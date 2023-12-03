#ifndef GUARDA_HPP
#define GUARDA_HPP

#include "Cpp-ASCII-Game-Engine-main/ASCII_Engine/ObjetoDeJogo.hpp"

class Adversario : public ObjetoDeJogo {

public:

    Adversario(const ObjetoDeJogo &obj, int velAtaque=1) :
            ObjetoDeJogo(obj), velAtaque(velAtaque){}

    virtual ~Adversario(){}
    virtual void ver();
    virtual void atirar();

private:
    int velAtaque;
};

#endif