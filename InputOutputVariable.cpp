#include<stdio.h>

int main() {
	
	int angkaBulat;
	float angkaKoma = 1.5f;
	char karakter = 'a';
	char string[100] = "Hellow World";
	
	scanf("%d", &angkaBulat);
	getchar();
	printf("%d\n", angkaBulat);
	
	scanf("%f", &angkaKoma);
	getchar();
	printf("%.3f\n", angkaKoma);
	
	scanf("%c", &karakter);
	getchar();
	printf("%c\n", karakter);
	
	scanf("%[^\n]", string);
	printf("%s\n", string);
	
	return 0;
}
