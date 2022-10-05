// Librerías
#include <stdio.h> // Fundamental
#include <stdlib.h> // Colores
#include <stdbool.h> // Lógica booleana

// Función principal
int main(){
	// Colores
	system("color 5f");
	
	// Título con marco
	printf("\n");
	printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175);
	printf("   %c                   %c\n", 175, 175);
	printf("   %c  Tabla l%cgica OR  %c\n", 175, 162, 175);
	printf("   %c                   %c\n", 175, 175);
	printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n", 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175);
	
	// Solicitar numeros
	int number_1;
	int number_2;
	int number_3;
	
	printf("%cHola! Ingrese 3 n%cmeros enteros, por favor:\n", 173, 163);
	scanf("%i %i %i", &number_1, &number_2, &number_3);
	printf("\n");
	
	// Presentar evaluaciones
	printf("Se evaluaran las siguientes condiciones:\n");
	printf("   1) n1>n2 or n1>n3\n");
	printf("   2) n2>n1 or n2>n3\n");
	printf("   2) n3>n1 or n3>n2\n\n");
	
	// Interpretación de resultados
	printf("  Interpretaci%cn de resultados:\n", 162);
	printf("   1 = Verdadero\n");
	printf("   0 = Falso\n\n\n");
	
	// Condición n1>n2 or n1>n3
	printf("  1ra condici%cn:\n", 162);
	
	if (number_1 > number_2 || number_1 > number_3){
		printf("  1");
	}
	else {
		printf("  0");
	}
	
	printf("\n\n");
	
	// Condición n2>n1 or n2>n3
	printf("  2da condici%cn:\n", 162);
	
	if (number_2 > number_1 || number_2 > number_3){
		printf("  1");
	}
	else {
		printf("  0");
	}
	
	printf("\n\n");
	
	// Condición n3>n1 or n3>n2
	printf("  3ra condici%cn:\n", 162);
	
	if (number_3 > number_1 || number_3 > number_2){
		printf("  1");
	}
	else {
		printf("  0");
	}
	
	printf("\n\n\n");
	
	// Imprimir tabla lógica OR
	printf("Representaci%cn de la tabla l%cgica OR.\n\n", 162, 162);
	printf("  Condiciones | Resultado  \n");
	printf("  -----------------------  \n");
	printf("      V V     |     V      = 1\n");
	printf("      V F     |     V      = 1\n");
	printf("      F V     |     V      = 1\n");
	printf("      F F     |     F      = 0\n");
	
	// Cambio
	getch();
	system("cls");
	system("color 2F");
	
	// Mensaje de despedida
	printf("\n");
	printf("  Programa Tabla l%cgica OR creado por: Avila Barba Erick Yahir\n\n", 162);
	getch();
	
	return 0;
}
