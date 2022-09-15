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
    printf("\n\nCoureurs prets ! Dans...\n5\n4\n3\n2\n1\nCourse !");
}

void printCongratulation(){ //une fonction doit accéder aux variables membres de race et afficher un message de félicitations
    struct Race race;
    race.firstPlaceDriverName="OSSAMA";
    race.firstPlaceRaceCarColor="blue";
    printf("Felicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\nC'etait vraiment une belle course et bonne nuit a tous !",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}

// Logic functions section
int calculateTimeToCompleteLap(){ //return le moyen de calculer le temps que met une voiture de course pour effectuer un tour.
    int s;
    int vitesse=(rand() %3)+1;
    int acceleration=(rand() %3)+1;
    int nerves=(rand() %3)+1;
    s = vitesse+acceleration+nerves;
    return s;
}



int main()
{
    printIntro();
    printCountDown();
//    printf("%d",calculateTimeToCompleteLap());
    srand(time(0));
};
