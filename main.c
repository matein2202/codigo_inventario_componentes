#include <stdio.h>
#include "funciones.h"

int main() {
    int opcion;
    char procesador[50];
    float precioProcesador;
    char memoriaRAM[50];
    float precioRAM;
    char grafica[50];
    float precioGrafica;
    char tarjetaMadre[50];
    float precioTarjetaMadre;

    do {
        printf("\nMenu de Componentes de PC\n");
        printf("1. Ver productos\n");
        printf("2. Modificar productos\n");
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                verProductos(procesador, precioProcesador, memoriaRAM, precioRAM, grafica, precioGrafica, tarjetaMadre, precioTarjetaMadre);
                break;
            case 2:
                modificarProductos(&precioProcesador, &precioRAM, &precioGrafica, &precioTarjetaMadre);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}
