#include "./../../include/calculator.h"
// Implémentation des fonctions existantes
double _add(double a, double b) {
    return a + b;
}

double _sub(double a, double b) {
    return a - b;
}

double _mul(double a, double b) {
    return a * b;
}

double _div(double a, double b) {
    if (b == 0) {
        // Gérer la division par zéro, par exemple en retournant une erreur ou en affichant un message
        // Ici nous allons simplement retourner 0
        return 0;
    }
    return a / b;
}

// Implémentation de la nouvelle fonction pour mettre au carré
double _square(double a) {
    return a * a;
}
