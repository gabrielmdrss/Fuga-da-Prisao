#include "Fase1.hpp"
#include <iostream>


void Fase1::init() {

    fugitivo = new Fugitivo(ObjetoDeJogo("Fugitivo",SpriteAnimado("rsc/fugitivoAndandoDireita.txt", 3), 30, 5));
    chave = new ObjetoDeJogo("Chave", Sprite("rsc/chave.txt"), 5, 145);
    guardas[0] = new Adversario(ObjetoDeJogo("Guarda1", Sprite("rsc/guardaParadoDireita.txt"), 11, 78));
    guardas[1] = new Adversario(ObjetoDeJogo("Guarda2", Sprite("rsc/guardaParadoEsquerda.txt"), 34, 144));
    guardas[2] = new Adversario(ObjetoDeJogo("Guarda3", Sprite("rsc/guardaParadoDireita.txt"), 15, 54));

}

unsigned Fase1::run(SpriteBuffer &screen) {

    std::string ent;

    Fase::draw(screen);
    system("clear");
    show(screen);

    while(true){

        getline(std::cin, ent);

        int posL = fugitivo->getPosL(), posC = fugitivo->getPosC();

        if (ent == "w" && fugitivo->getPosL() > 10)
            fugitivo->moveUp(3);
        else if (ent == "s" && fugitivo->getPosL() < screen.getAltura() - 15)
            fugitivo->moveDown(3);
        else if (ent == "a" && fugitivo->getPosC() > 12)
            fugitivo->moveLeft(3);
        else if (ent == "d" && fugitivo->getPosC() < screen.getLargura() - fugitivo->getSprite()->getLargura() - 13)
            fugitivo->moveRight(3);


        else if (ent == "q")
            return Fase::END_GAME;


        update();
        draw(screen);
        system("clear");
        show(screen);
    }
}