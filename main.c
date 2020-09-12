#include <string.h>
#include <stdio.h>


typedef struct arregloConTope {
    int arreglo[100];
    int tope;
}arregloConTope;

arregloConTope arreglo1,arreglo2;




void cargarArrays(){
    arreglo1.tope = -1;
    arreglo2.tope = -1;
    //printf("%d %d\n",arreglo1.tope,arreglo2.tope);

    arreglo1.tope ++;
    //printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 1;
    
    arreglo1.tope ++;
    //printf("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 2;

    arreglo1.tope ++;
    //("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 3;



    arreglo2.tope ++;
    //printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 6;

    arreglo2.tope ++;
    //printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 7;

    arreglo2.tope ++;
    //printf("Arreglo 2 Tope vale %d\n",arreglo2.tope);
    arreglo2.arreglo[arreglo1.tope] = 8;

    //printf("%d (%d) %d (%d)\n\n",arreglo1.tope,arreglo1.tope+1,arreglo2.tope,arreglo2.tope+1);

}

void verificarCantidadDeElementos(){
    if(arreglo1.tope < arreglo2.tope){
        printf("El segundo arreglo tiene mas elementos (%d elementos)\n",arreglo2.tope+1);
    }
    else{
        if(arreglo1.tope > arreglo2.tope){
            printf("El primer arreglo tiene mas elementos (%d elementos)\n",arreglo1.tope+1);
        }
        else {
            printf("Ambos arreglos tienen la misma cantidad de elementos (%d)\n",arreglo1.tope+1);
        }
    }
}

void verificarEspacioLibre(){
    if(arreglo1.tope < arreglo2.tope){
        printf("El primer arreglo tiene mas espacio libre\n");
    }
    else{
        if(arreglo1.tope > arreglo2.tope){
            printf("El segundo arreglo tiene mas espacio libre\n");
        }
        else{
            printf("Ambos elementos tienen el mismo espacio libre\n");
        }
    }
}


void compararArrays(){
    verificarCantidadDeElementos();
    verificarEspacioLibre();
}






int main(){
    cargarArrays();
    compararArrays();
    return 0;
}