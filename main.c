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


    arreglo1.tope ++;
    //("Arreglo 1 Tope vale %d\n",arreglo1.tope);
    arreglo1.arreglo[arreglo1.tope] = 4;

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


int CompararCantidadDeElementos(){
    if(arreglo1.tope < arreglo2.tope){
        return 2;
    }
    else{
        if(arreglo1.tope > arreglo2.tope){
            return 1;
        }
        else {
            return 0;
        }
    }
}

int CompararEspacioLibre(){
    if(arreglo1.tope < arreglo2.tope){
        return 1;
    }
    else{
        if(arreglo1.tope > arreglo2.tope){
            return 2;
        }
        else{
            return 0;
        }
    }
}


void verificarCantidadDeElementos(){
    int arregloConMasElementos = CompararCantidadDeElementos();
    
    switch(arregloConMasElementos){
        case 0: 
            printf("Ambos arreglos tienen la misma cantidad de elementos (%d)\n",arreglo1.tope+1);
            break;
        case 1: 
            printf("El primer arreglo tiene mas elementos (%d elementos)\n",arreglo1.tope+1);
            break;
        case 2:
            printf("El segundo arreglo tiene mas elementos (%d elementos)\n",arreglo2.tope+1);
            break;

    }

}




void verificarEspacioLibre(){
    int arregloConMasEspaciLibre = CompararEspacioLibre();
    
    switch(arregloConMasEspaciLibre){
        case 0: 
            printf("El primer arreglo tiene mas espacio libre\n");
            break;
        case 1: 
            printf("El segundo arreglo tiene mas espacio libre\n");
            break;
        case 2:
            printf("Ambos elementos tienen el mismo espacio libre\n");
            break;

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