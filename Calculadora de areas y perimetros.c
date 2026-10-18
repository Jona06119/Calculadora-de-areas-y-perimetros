#include <stdio.h>

#define PI 3.14159265

int main() {
    int opcion;
    float lado, base, altura, largo, ancho;
    float radio, lado1, lado2, lado3;
    float area, perimetro;

    printf("====================================\n");
    printf(" CALCULADORA DE AREAS Y PERIMETROS\n");
    printf("====================================\n");

    printf("1. Cuadrado\n");
    printf("2. Rectangulo\n");
    printf("3. Triangulo\n");
    printf("4. Circulo\n");
    printf("Selecciona una figura: ");
    scanf("%d", &opcion);

    switch (opcion) {

        case 1:
            printf("\nIngresa el lado del cuadrado: ");
            scanf("%f", &lado);

            if (lado <= 0) {
                printf("El lado debe ser mayor que cero.\n");
                return 1;
            }

            area = lado * lado;
            perimetro = 4 * lado;

            printf("\nFigura: Cuadrado\n");
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            break;

        case 2:
            printf("\nIngresa el largo del rectangulo: ");
            scanf("%f", &largo);

            printf("Ingresa el ancho del rectangulo: ");
            scanf("%f", &ancho);

            if (largo <= 0 || ancho <= 0) {
                printf("Las medidas deben ser mayores que cero.\n");
                return 1;
            }

            area = largo * ancho;
            perimetro = 2 * (largo + ancho);

            printf("\nFigura: Rectangulo\n");
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            break;

        case 3:
            printf("\nIngresa el primer lado: ");
            scanf("%f", &lado1);

            printf("Ingresa el segundo lado: ");
            scanf("%f", &lado2);

            printf("Ingresa el tercer lado: ");
            scanf("%f", &lado3);

            if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
                lado1 + lado2 <= lado3 ||
                lado1 + lado3 <= lado2 ||
                lado2 + lado3 <= lado1) {
                printf("Las medidas no forman un triangulo valido.\n");
                return 1;
            }

            printf("Ingresa la base: ");
            scanf("%f", &base);

            printf("Ingresa la altura correspondiente a la base: ");
            scanf("%f", &altura);

            if (base <= 0 || altura <= 0) {
                printf("La base y la altura deben ser mayores que cero.\n");
                return 1;
            }

            area = (base * altura) / 2;
            perimetro = lado1 + lado2 + lado3;

            printf("\nFigura: Triangulo\n");
            printf("Area: %.2f\n", area);
            printf("Perimetro: %.2f\n", perimetro);
            break;

        case 4:
            printf("\nIngresa el radio del circulo: ");
            scanf("%f", &radio);

            if (radio <= 0) {
                printf("El radio debe ser mayor que cero.\n");
                return 1;
            }

            area = PI * radio * radio;
            perimetro = 2 * PI * radio;

            printf("\nFigura: Circulo\n");
            printf("Area: %.2f\n", area);
            printf("Circunferencia: %.2f\n", perimetro);
            break;

        default:
            printf("\nOpcion no valida.\n");
            return 1;
    }

    printf("====================================\n");

    return 0;
}