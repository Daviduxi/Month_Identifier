#include <stdio.h>

int main() {

    //definicion variables
    int numero, dias, year;

    //pedir el numero del mes
    printf("Inrtoduce el numero del mes: ");
    scanf("%d", &numero);

    //calculo de los dias del mes
    if (numero >= 1 && numero <= 12){

        if(numero == 4 || numero == 6 || numero == 9 || numero == 11) {
            dias = 30;
        
        } else if (numero == 2) {
            printf("Es bisiesto? (utiliza 1 si es bisiesto o 0 si no lo es): ");
            scanf("%d", &year);

            if(year == 1) {
                dias = 29;
            
            } else if (year == 0) {
                dias = 28;

            } else {
                printf("Eres tonto o que??");
                return 0;
            }
            
        } else {
            dias = 31;

        }
        //muestro los dias del mes
        printf("El mes que has escogido tiene %d dias \n", dias);

        //Segun el numero introducido te identifica el mes
        switch(numero) {
            case 1:
                printf("El mes que has escogido es enero");
                break;

            case 2:
                printf("El mes que has escogido es febrero");
                break;

            case 3:
                printf("El mes que has escogido es marzo");
                break;

            case 4:
                printf("El mes que has escogido es abril");
                break;

            case 5:
                printf("El mes que has escogido es mayo");
                break;

            case 6:
                printf("El mes que has escogido es junio");
                break;

            case 7:
                printf("El mes que has escogido es julio");
                break;

            case 8:
                printf("El mes que has escogido es agosto");
                break;

            case 9:
                printf("El mes que has escogido es septiembre");
                break;

            case 10:
                printf("El mes que has escogido es octubre");
                break;

            case 11:
                printf("El mes que has escogido es noviembre");
                break;

            case 12:
                printf("El mes que has escogido es diciembre");
                break;

        }

    //Si el tio es tontito y pone un numero de mes que no existe
    } else {
        printf("Has introducido un numero de mes no valido!!");

    }

    return 0;

}