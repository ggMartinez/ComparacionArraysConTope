#include<stdio.h>
#include<string.h>
typedef char cadena[10];


void cargarCadena(){
    cadena entrada;
    printf("Ingrese una cadena de texto: ");
    scanf("%s",entrada);
}

int ObtenerLargoCadena(cadena entrada){
    int largo = 0;
    int continuar = 0;

    while( continuar != 1){
        if(entrada[largo] != '\0' ){
            largo++;
        }
        else{
            continuar = 1;
        }
    }
    return largo;
}

void mostrarLargoCadena(){
    cadena entrada;
    scanf("%s",entrada);
    printf("El largo de la cadena es %d",ObtenerLargoCadena(entrada));

}


void concatenarCadenas(){
    cadena cadena1, cadena2, concatenacion;
    scanf("%s",cadena1);
    scanf("%s",cadena2);

    if( (ObtenerLargoCadena(cadena1) + ObtenerLargoCadena(cadena2)) < 10){
        strcat(concatenacion,cadena1);
        strcat(concatenacion,cadena2);

        printf("La concatenacion de %s y %s es %s\n\n",cadena1,cadena2,concatenacion);

    }
    else{
        printf("La concatenacion de ambas cadenas supera el tamanio maximo\n\n");
    }

}

void desplegarCadena(){
    cadena entrada;
    printf("Ingrese una cadena de texto: ");
    scanf("%s",entrada);
    printf("La cadena ingresada es %s\n",entrada);

}

void contarCaracterEnCadena(cadena entrada, char caracter){
    int cantidad = 0;
    int continuar;
    int contador = 0;


    while( continuar != 1){
        if(entrada[contador] != '\0' ){
            if(entrada[contador] == caracter){
                cantidad++;
            }
            contador++;
        }
        else{
            continuar = 1;
        }
    }
    printf("El caracter %c aparece %d veces en la cadena %s\n\n",caracter,cantidad,entrada);

}
void mostrarMenu(){
    char opcion;
    do{
        printf("a) Cargar Cadena \n");
        printf("b) Largo \n");
        printf("c) Concatenar \n");
        printf("d) Desplegar \n");
        printf("e) Cantidad \n");
        printf("f) Reemplazar \n");
        printf("g) Eliminar \n");
        printf("h) Pertenece \n");
        printf("i) Posicion \n");
        printf("s) Salir \n\n");

        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c",&opcion);

        switch(opcion){
            case 'a': 
                cargarCadena();
                break;
            case 'b':
                mostrarLargoCadena();
            case 'c':
                concatenarCadenas();
                break;
            case 'd':
                desplegarCadena();
            case 's':
                break;
            case 'e':
                contarCaracterEnCadena("Josesito",'o');

            default:
                printf("Opcion invalida\n");
                break;
        }
    }while(opcion != 's');
}

int main(){
    mostrarMenu();
    return 0;
}