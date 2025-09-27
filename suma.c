#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    printf("La suma es: %d\n", num1 + num2);
    
    // Pausa para que el resultado se mantenga visible
    printf("Presione Enter para salir...\n");
    
    // Limpia el buffer y espera Enter
    getchar();  // Ignora el salto de línea residual después de scanf
    getchar();  // Espera a que presiones Enter
    
    return 0;
}