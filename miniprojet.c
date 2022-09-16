#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
typedef struct {//une structure Race qui possède les variables membres
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName;
    char firstPlaceRaceCarColor;

}Race ;

typedef struct  { //une structure RaceCar qui a les variables cars

    char driverName;
    char raceCarColor;
    int totalLapTime;
}RaceCar;
// Print functions section
void printIntro(){  //une fonction  qui imprime un message d'introduction amusant pour la course sur la console
        printf(" Bienvenue a notre evenement principal, les fans de course numerique !\n");
        printf("J'espere que tout le monde a pris son gouter car nous allons commencer !");
}

void printCountDown(){ // une fonction qui imprime un message amusant de compte à rebours pour nos coureurs
    printf("\n\nCoureurs prets ! Dans... \n");
    int i;
    for (i=5;i>0;i--){
        printf("%d\n",i);
        sleep(1);
    }
    printf("Course !");
}

void printFirstPlaceAfterLap(Race race){
    printf("Après le tour numéro %d \nLa première place est occupée par : %s dans la voiture de course %s !",race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}

void printCongratulation(){ //une fonction doit accéder aux variables membres de race et afficher un message de félicitations
    Race race;
    race.firstPlaceDriverName;
    race.firstPlaceRaceCarColor;
    printf("Felicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\nC'etait vraiment une belle course et bonne nuit a tous !",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}

// Logic functions section
int calculateTimeToCompleteLap(){ //return le moyen de calculer le temps que met une voiture de course pour effectuer un tour.
    int s;
    srand(time(0));
    int vitesse=(rand() %3)+1;
    int acceleration=(rand() %3)+1;
    int nerves=(rand() %3)+1;
    s = vitesse+acceleration+nerves;
    return s;
}

void updateRaceCar( RaceCar *raceCar){
//    struct RaceCar raceCar;
      raceCar->totalLapTime+=calculateTimeToCompleteLap();
}

void updateFirstPlace( Race * race , RaceCar * raceCar1 , RaceCar * raceCar2){

        if(raceCar1->totalLapTime<=raceCar2->totalLapTime){
                strcpy(race->firstPlaceDriverName,raceCar1->driverName);
                strcpy(race->firstPlaceRaceCarColor,raceCar1->raceCarColor);

        }else{
            strcpy(race->firstPlaceDriverName,raceCar2->driverName);
            strcpy(race->firstPlaceRaceCarColor,raceCar2->raceCarColor);

        }
}

void startRace(RaceCar *raceCar1,RaceCar *raceCar2){
    int i;
  Race race={5,1};

    for (i=0;i<race.numberOfLaps;i++){

            updateRaceCar(raceCar1);
            updateRaceCar(raceCar2);
            updateFirstPlace(&race ,raceCar1 , raceCar2);
            printFirstPlaceAfterLap(race);
            sleep(1);
            }
            printCongratulation();


}

int main()
{
    RaceCar car1={"Ossama","Blue",calculateTimeToCompleteLap()};
    RaceCar car2={"Shurlee","White",calculateTimeToCompleteLap()};
    printIntro();
    printCountDown();
    startRace(&car1,&car2);
    return 0;
}


