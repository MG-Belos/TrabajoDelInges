#include <stdio.h>
int main() {
	float fBase, fAltura, fArea;
	printf("Calcular el Area de un Rectangulo \n");
	printf("introduzca la cantidad para la Base: ");
	scanf_s("%f", &fBase);
	float fArea, fRadio;
	printf("Calcular el Area de un Circulo \n");
	printf("introduzca la cantidad para el radio: ");
	scanf_s("%f", &fRadio);
	printf("Introduzca la cantidad para la altura: ");
	scanf_s("%f", &fAltura);
	fArea = fBase * fAltura;
	fArea = fRadio * fRadio * 3.1416;
	printf("El area para el rectangulo es: %f", fArea);

}