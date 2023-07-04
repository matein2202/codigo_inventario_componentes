#include <stdio.h>
#include "funciones.h"

void verProductos(char procesador[], float precioProcesador, char memoriaRAM[], float precioRAM, char grafica[], float precioGrafica, char tarjetaMadre[], float precioTarjetaMadre) {
    printf("\nProductos:\n");
    printf("Procesador: %s ($%.2f)\n", procesador, precioProcesador);
    printf("Memoria RAM: %s ($%.2f)\n", memoriaRAM, precioRAM);
    printf("Grafica: %s ($%.2f)\n", grafica, precioGrafica);
    printf("Tarjeta Madre: %s ($%.2f)\n", tarjetaMadre, precioTarjetaMadre);
}

void modificarProductos(float *precioProcesador, float *precioRAM, float *precioGrafica, float *precioTarjetaMadre) {
    int opcion;

    printf("\nMenu de Modificacion de Productos\n");
    printf("1. Modificar precio del procesador\n");
    printf("2. Modificar precio de la memoria RAM\n");
    printf("3. Modificar precio de la grafica\n");
    printf("4. Modificar precio de la tarjeta madre\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese el nuevo precio del procesador: ");
            scanf("%f", precioProcesador);
            printf("Precio del procesador modificado exitosamente.\n");
            break;
        case 2:
            printf("Ingrese el nuevo precio de la memoria RAM: ");
            scanf("%f", precioRAM);
            printf("Precio de la memoria RAM modificado exitosamente.\n");
            break;
        case 3:
            printf("Ingrese el nuevo precio de la grafica: ");
            scanf("%f", precioGrafica);
            printf("Precio de la grafica modificado exitosamente.\n");
            break;
        case 4:
            printf("Ingrese el nuevo precio de la tarjeta madre: ");
            scanf("%f", precioTarjetaMadre);
            printf("Precio de la tarjeta madre modificado exitosamente.\n");
            break;
        default:
            printf("Opcion no valida. Intente de nuevo.\n");
    }
}
