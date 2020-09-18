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
    printf("Ingrese 2 strings (la suma debe ser menor a 10)\n");
    scanf("%s",cadena1);
    scanf("%s",cadena2);


    if( (ObtenerLargoCadena(cadena1) + ObtenerLargoCadena(cadena2)) < 10){
        int indice = 0;
        for(int a = 0 ; a < ObtenerLargoCadena(cadena1); a++ ){
            concatenacion[indice] = cadena1[a];
            indice++;
        }

        for(int b = 0; b < ObtenerLargoCadena(cadena2) ; b++){
            concatenacion[indice] = cadena2[b];
            indice++;
        }

        concatenacion[indice] = '\0';

        printf("La concatenacion de \"%s\" y \"%s\" es \"%s\"\n\n",cadena1,cadena2,concatenacion);

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

void contarCaracterEnCadena(){
    cadena entrada;
    char caracter;

    int cantidad = 0;
    int continuar;
    int contador = 0;

    printf("Ingrese una cadena: ");
    //scanf("%s",entrada);
    
    printf("Ingrese un caracter: ");
    //scanf("%c",&caracter);

    strcpy(entrada,"Joseso"); // SACALO A LA MIERDA DESPUES
    caracter = 'o';


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


void reemplazarCaracterEnCadena(){
    cadena entrada;
    char caracterBusqueda,caracterReemplazo;

    printf("Ingrese una cadena: ");
    //scanf("%s",entrada);
    strcpy(entrada,"gran puta");
    printf("Ingrese un caracter para buscar: ");
    //scanf("%c",&caracterBusqueda);
    caracterBusqueda = 'a';
    printf("Ingrese un caracter a reemplazar: ");
    //scanf("%c",&caracterReemplazo);
    caracterReemplazo = 'e';


    int continuar = 0;
    int contador = 0;



    while( continuar != 1){
        
        if(entrada[contador] != '\0' ){
            if(entrada[contador] == caracterBusqueda){
                entrada[contador] = caracterReemplazo;
            }
            contador++;
        }
        else{
            continuar = 1;
        }
    }
    printf("%s\n",entrada);




}

void eliminarCaracterEnCadena(){
    cadena entrada,cadenaFinal;
    char caracterBusqueda;
    int topeCadenaFinal = 0;

    printf("Ingrese una cadena: ");
    //scanf("%s",entrada);
    strcpy(entrada,"gran puta");
    printf("Ingrese un caracter para eliminar: ");
    //scanf("%c",&caracterBusqueda);
    caracterBusqueda = 'l';


    int continuar = 0;
    int contador = 0;
    int encontrado = 0;



    while( continuar != 1){
        
        if(entrada[contador] != '\0' ){
            if(entrada[contador] != caracterBusqueda){

                cadenaFinal[topeCadenaFinal] = entrada[contador];
                topeCadenaFinal++;
                
            }
            else{
                encontrado = 1;
            }
            contador++;
        }
        else{
            cadenaFinal[topeCadenaFinal] = '\0';
            continuar = 1;
        }
    }
    if(encontrado == 1)
        printf("%s\n",cadenaFinal);
    else
        printf("No encontrado\n");

}


void buscarCaracterEnCadena(){
    cadena entrada;
    char caracterBusqueda;

    printf("Ingrese una cadena: ");
    //scanf("%s",entrada);
    strcpy(entrada,"gran puta");
    printf("Ingrese un caracter para eliminar: ");
    //scanf("%c",&caracterBusqueda);
    caracterBusqueda = 'g';


    int continuar = 0;
    int contador = 0;
    int encontrado = 0;



    while( continuar != 1){
        
        if(entrada[contador] != '\0' ){
            if(entrada[contador] == caracterBusqueda){
                encontrado = 1;
            }
            
            contador++;
        }
        else{
            continuar = 1;
        }
    }
    if(encontrado == 1)
        printf("Encontrado\n");
    else
        printf("No encontrado\n");

}

void buscarCaracterEnCadenaYMostrarPosicion(){
    cadena entrada;
    char caracterBusqueda;

    printf("Ingrese una cadena: ");
    //scanf("%s",entrada);
    strcpy(entrada,"gran puta");
    printf("Ingrese un caracter para eliminar: ");
    //scanf("%c",&caracterBusqueda);
    caracterBusqueda = 'l';


    int continuar = 0;
    int contador = 0;
    int encontrado = 0;



    while( continuar != 1){
        
        if(entrada[contador] != '\0' ){
            if(entrada[contador] == caracterBusqueda){
                continuar = 1;
                encontrado = 1;
            }
            else{
                contador++;
            }
            
            
        }
        else{
            continuar = 1;
        }
    }
    if(encontrado != 1)
        contador = -1;
    else 
        contador++;

    printf("\n\n%c en %s se encuentra en la posicion %d\n\n",caracterBusqueda,entrada,contador);

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
                contarCaracterEnCadena();
                break;
            case 'f':
                reemplazarCaracterEnCadena();
                break;
            case 'g':
                eliminarCaracterEnCadena();
                break;
            case 'h':
                buscarCaracterEnCadena();
                break;
            case 'i':
                buscarCaracterEnCadenaYMostrarPosicion();
                break;

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