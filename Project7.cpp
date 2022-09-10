#include <stdio.h>

int main() {
	int a,b,somme,soustraction,multiplication;
	float reste, division;
	printf("veuillez entrer la valeur de a");
	scanf("%d",&a);
	printf("veuillez entrer la valeur de b");
	scanf("%d",&b);
	somme = a+b;
	soustraction = a-b;
	multiplication = a*b;
	division = a/b;
	reste = a%b;
	printf("la somme de a et b est: %d\n", somme);
	printf("la soustraction de a et b est: %d\n", soustraction);
	printf("la multiplication de a et b est: %d\n", multiplication);
	printf("la division de a et b est: %f\n", division);
    printf("le reste de a et b est: %f", reste);
	
	return 0;
}
