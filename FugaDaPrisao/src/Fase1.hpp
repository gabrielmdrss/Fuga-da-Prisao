#ifndef FASE1_HPP
#define FASE1_HPP

#include "Cpp-ASCII-Game-Engine-main/ASCII_Engine/Fase.hpp"
#include <string>
#include <list>

#include "Adversario.hpp"
#include "Fugitivo.hpp"

class Fase1 : public Fase {

public:
    Fase1(std::string name, const Sprite &bkg) : Fase(name,bkg) {}
    Fase1(std::string name, const SpriteAnimado &bkg) : Fase(name,bkg) {}
    virtual ~Fase1() {}


    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);

private:
    Adversario *guardas[3];
    Fugitivo *fugitivo;
    ObjetoDeJogo *tapetePorta;
    ObjetoDeJogo *chave;


};
#endif