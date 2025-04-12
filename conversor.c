#include <stdio.h>

void convertirQuetzales() {
    float cantidad;
    int opcion;
    printf("Ingresa la cantidad en Quetzales (GTQ): ");
    scanf("%f", &cantidad);
    
    printf("Selecciona la moneda a la que deseas convertir:\n");
    printf("1. Dólares estadounidenses (USD)\n");
    printf("2. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("%.2f GTQ = %.2f USD\n", cantidad, cantidad / 7.7);  // Tasa de cambio aproximada: 1 USD = 7.7 GTQ
            break;
        case 2:
            printf("%.2f GTQ = %.2f EUR\n", cantidad, cantidad / 8.5);  // Tasa de cambio aproximada: 1 EUR = 8.5 GTQ
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }
}

void convertirDolares() {
    float cantidad;
    int opcion;
    printf("Ingresa la cantidad en Dólares (USD): ");
    scanf("%f", &cantidad);
    
    printf("Selecciona la moneda a la que deseas convertir:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("%.2f USD = %.2f GTQ\n", cantidad, cantidad * 7.7);  // Tasa de cambio aproximada: 1 USD = 7.7 GTQ
            break;
        case 2:
            printf("%.2f USD = %.2f EUR\n", cantidad, cantidad * 0.92);  // Tasa de cambio aproximada: 1 USD = 0.92 EUR
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }
}

void convertirEuros() {
    float cantidad;
    int opcion;
    printf("Ingresa la cantidad en Euros (EUR): ");
    scanf("%f", &cantidad);
    
    printf("Selecciona la moneda a la que deseas convertir:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("%.2f EUR = %.2f GTQ\n", cantidad, cantidad * 8.5);  // Tasa de cambio aproximada: 1 EUR = 8.5 GTQ
            break;
        case 2:
            printf("%.2f EUR = %.2f USD\n", cantidad, cantidad / 0.92);  // Tasa de cambio aproximada: 1 EUR = 0.92 USD
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }
}

int main() {
    int opcion;
    
    do {
        printf("\n### Conversor de Monedas ###\n");
        printf("1. Convertir de Quetzales (GTQ)\n");
        printf("2. Convertir de Dólares (USD)\n");
        printf("3. Convertir de Euros (EUR)\n");
        printf("4. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                convertirQuetzales();
                break;
            case 2:
                convertirDolares();
                break;
            case 3:
                convertirEuros();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida, por favor ingresa una opción válida.\n");
        }
    } while(opcion != 4);
    
    return 0;
}
