#include <string.h>
#include <stdio.h>


typedef struct arregloConTope {
    int arreglo[100];
    int tope;
}arregloConTope;

arregloConTope arreglo1,arreglo2;




void cargarArrays(){
    

    int entrada = 0;
    int contador = 0;

    printf("Arreglo 1: (para terminar de cargar ingrese -1): \n");
    while (entrada != -1){
        printf("Valor para Arreglo 1 Posicion %d: ",contador);
        scanf("%d",&entrada);
        if (entrada != -1){
            arreglo1.tope = contador;
            arreglo1.arreglo[arreglo1.tope] = entrada;
        }
        contador ++;
    }

    contador = 0;
    entrada = 0;

    printf("\n\nArreglo 2: (para terminar de cargar ingrese -1) \n");
    while (entrada != -1){
        printf("Valor para Arreglo 2 Posicion %d: ",contador);
        scanf("%d",&entrada);
        if (entrada != -1){
            arreglo2.tope = contador;
            arreglo2.arreglo[arreglo2.tope] = entrada;
        }
            
        contador ++;
    }
}

void mostrarArrays(){
    printf("\n\n");
    printf("=========================\n");
    printf("Arreglo 1: \n");
    printf("=========================\n");
    for(int a = 0; a <= arreglo1.tope; a++){
        printf("%d: %d\n",a,arreglo1.arreglo[a]);
    }
    printf("=========================\n");

    printf("\n\n");
    printf("=========================\n");
    printf("Arreglo 2: \n");
    printf("=========================\n");
    for(int b = 0; b <= arreglo2.tope; b++){
        printf("%d: %d\n",b,arreglo2.arreglo[b]);
    }
    printf("=========================\n");
    printf("\n\n");
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
            printf("El primer arreglo tiene mas espacio libre (%d elementos disponibles)\n",100-arreglo1.tope);
            break;
        case 1: 
            printf("El segundo arreglo tiene mas espacio libre (%d elementos disponibles)\n",100-arreglo2.tope);
            break;
        case 2:
            printf("Ambos elementos tienen el mismo espacio libre (%d elementos disponibles)\n",100-arreglo1.tope);
            break;

    }

}

void compararArrays(){
    verificarCantidadDeElementos();
    verificarEspacioLibre();
}

void copiarDeUnArregloAOtro(){
        int arregloConMasElementos = CompararCantidadDeElementos();switch(arregloConMasElementos){
        case 0: 
            printf("No es necesario realizar ninguna operacion\n");
            break;
        case 1: 
            
            if(arreglo1.tope <= (100 - arreglo2.tope)){ // El arreglo 1 entra en el arreglo 
            printf("TOY ACA");
                for (int a = 0;a <= arreglo1.tope; a++ ){
                    arreglo2.tope ++;
                    arreglo2.arreglo[arreglo2.tope] = arreglo1.arreglo[a];
                }
            }
            
            break;
        case 2:
            if(arreglo2.tope <= (100 - arreglo1.tope)){ // El arreglo 1 entra en el arreglo 
            printf("TOY ACA");
                for (int a = 0;a <= arreglo2.tope; a++ ){
                    arreglo1.tope ++;
                    arreglo1.arreglo[arreglo1.tope] = arreglo2.arreglo[a];
                }
            }
            
            break;

    }

}




int main(){
    cargarArrays();
    mostrarArrays();
    compararArrays();
    copiarDeUnArregloAOtro();
    mostrarArrays();
    return 0;
}