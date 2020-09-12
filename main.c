#include <string.h>
#include <stdio.h>

int main(){
    typedef struct arregloConTope {
        int arreglo[100];
        int tope;
    }arregloConTope;

    arregloConTope arreglo1,arreglo2;

    arreglo1.tope = arreglo2.tope = -1;

    printf("%d %d\n",arreglo1.tope,arreglo2.tope);

    arreglo1.tope ++;
    printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 1;
    
    arreglo1.tope ++;
    printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 2;

    arreglo1.tope ++;
    printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 3;

    arreglo1.tope ++;
    printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 4;

    arreglo2.tope ++;
    printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 6;

    arreglo2.tope ++;
    printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 7;

    arreglo2.tope ++;
    printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 8;


    printf("%d (%d) %d (%d)\n\n",arreglo1.tope,arreglo1.tope+1,arreglo2.tope,arreglo2.tope+1);


    if(arreglo1.tope < arreglo2.tope){
        printf("El primer arreglo tiene mas espacio libre\n");
        printf("El segundo arreglo tiene mas elementos (%d elementos)\n",arreglo2.tope+1);
    }
    else{
        printf("El segundo arreglo tiene mas espacio libre\n");
        printf("El primer arreglo tiene mas elementos (%d elementos)\n",arreglo1.tope+1);

    }


    
    return 0;
}