#include <iostream>
#include <conio.h>
#include <cstdlib> // Para a função system
#include <cstdio>  // Para a função fflush
using std::cout, std::endl;

int main() {
    char caractere;
    int contador = 0;

    while (true) {
        system("sleep 0.1");

        if (kbhit()) {
            caractere = getche();

            contador++;

            if (caractere == 'q' || caractere == 'Q') {
                cout << " Tecla Q pressionada. Saindo do loop." << endl;
                break;
            }

            cout << endl << " Tecla pressionada, contador é " << contador << endl;
        } else {
            cout << contador << " teclas pressionadas." << endl;
        }

        // Limpa o buffer de saída
        fflush(stdout);
    }

    return 0;
}