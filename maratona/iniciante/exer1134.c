#include <stdio.h>

int main() {
	
	int op = 4, alcool = 0, gasolina = 0, diesel = 0;

	do {
		do {
			scanf("%d", &op);
		} while(op < 1 && op > 4);

		if(op == 1) alcool++;
		if(op == 2) gasolina++;
		if(op == 3) diesel++;

	} while(op != 4);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0;
}