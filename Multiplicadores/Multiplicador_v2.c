#include <stdio.h>
int main (){
	int num1, num2, num3, i;
	printf("Introduce el primer numero a multiplicar.\n");
	scanf("%d", &num1);
	printf("Introduce el segundo numero.\n");
	scanf("%d", &num2);
	num3 = 0;
	i = 1;
	if (num1 > 0 && num2 > 0){
		do{
			num3 = num1 + num3;
			i++;
		}
		while (i <= num2);
		printf("La multiplicacion es igual a %d\n", num3);

	}
	else{ if (num2 == 0 || num1 == 0){
		printf("La multiplicacion es igual a 0.\n");
	}
	else{
		printf("Los numeros introducidos deben ser mayor o igual que 0\n");
	}
	}
	return 0;

}