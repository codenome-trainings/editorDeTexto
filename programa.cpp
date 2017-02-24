#include <iostream>
#include <stdio_ext.h>
#include "getch.h"
#include "programa.h"

int qtdDeCaracteres = 0;
char **_matrizDeCaracteres;
int linhas = 0;
int colunas = 0;
using namespace std;

void programa() {

    char digito;

    __fpurge(stdin);
    cout << "Digite qualquer tecla ou pressione ESC para sair: ";
    digito = getch();

    if (converteAscii(digito) == 27) {
        cout << "Você pressiou ESC para sair do programa." << endl;
        return;
    }
    cout << "Caracter: " << digito << endl;


    programa();

}

char **alocaMatrizDeCaracteres(char digito) {
    char **matriz;
    matriz = _matrizDeCaracteres;

    if(qtdDeCaracteres > 0) matriz = (char **) realloc(matriz, qtdDeCaracteres * sizeof(char *));//realoca(numero);
    else matriz = (char **) malloc(sizeof(char *));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            
        }
    }
}

int converteAscii(char digito) {
    return (int) digito;
}

