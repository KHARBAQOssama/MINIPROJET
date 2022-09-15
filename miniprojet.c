#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race{//une structure Race qui possède les variables membres
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName;
    char firstPlaceRaceCarColor;

};

struct RaceCar { //une structure RaceCar qui a les variables cars
    char driverName;
    char raceCarColor;
    int totalLapTime;
};
// Print functions section
void printIntro(){  //une fonction  qui imprime un message d'introduction amusant pour la course sur la console
        printf(" Bienvenue a notre evenement principal, les fans de course numerique !\n");
        printf("J'espere que tout le monde a pris son gouter car nous allons commencer !");
}

void printCountDown(){ // une fonction qui imprime un message amusant de compte à rebours pour nos coureurs
    printf("Coureurs prêts ! Dans...\n5\n4\n3\n2\n1\nCourse !");
}

// Logic functions section

int main()
{
    printIntro();
    srand(time(0));
};
