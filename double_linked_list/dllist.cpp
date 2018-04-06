#include <iostream>
#include <stdio.h>
#include <typeinfo>
#include <cstdlib>

using namespace std;

const int listLength = 3;
bool passengersLoaded = false;

struct seat{
    int seatNumber;
    bool isOccupied = false;
    char departmentToVisit[];
    struct seat *prevSeat;
    struct seat *nextSeat;
};

struct seat bus[listLength];

void numberSeats(){
    for (int i = 0; i < listLength-1; i++){
        bus[i].seatNumber = i+1;
    }
}

void clear(){
    cout << "\033[2J\033[1;1H";"]]";
}

int randomizeSeat(int maxValue){
    srand(time(0));
    int randomSeat = rand()%(maxValue-1 + 1) + 1;
    //printf("random number: %d\n", randomSeat);
    return randomSeat;
}

void loadPassengers(){
    numberSeats();
    int seatsOcuppied = randomizeSeat(listLength);
    for (int i = 1; i <= seatsOcuppied; i++){
        int seatToFill = randomizeSeat(listLength); seatToFill--;
        if (!bus[seatToFill].isOccupied){

        }
    }
    passengersLoaded = true;
}

int main(){
    while(true){
        int option = 0;
        printf("Control de autobus Litegua\n");
        printf("\nElige la opción deseada\n");
        printf("\n\t1. Ingresar pasajeros\n");
        printf("\t2. Verificar disponibilidad de asientos\n");
        printf("\t3. Consultar parada en departamento\n");
        printf("\t4. Descargar pasajeros\n");
        printf("\t5. Salir\n");
        cin >> option;
        if(option == 1){
            if (!passengersLoaded){
                clear();
                loadPassengers();
            }
        }
        else if(option == 5){
            clear();
            return 0;
        }
    }
}
