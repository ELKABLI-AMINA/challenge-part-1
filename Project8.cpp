#include <stdio.h>

int main() {
	 float a, b, c, d, somme, moyenne;
	printf("veuillez entrer la valeur des quatres nombres\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	somme = a+b+c+d;
	moyenne = somme/4;
	printf("la sommes des quatres nombres est: %f\n", somme);
	printf("la moyenne est:%f",moyenne);
	
	
	
	
	return 0;
}
