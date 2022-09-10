#include <stdio.h>
#include <math.h>

int main() {
	float  x1, y1, x2, y2, AB;
	printf("veuillez entrer la valeur de x1");
	scanf("%f",&x1);
	printf("veuillez entrer la valeur de y1");
	scanf("%f",&y1);
	printf("veuillez entrer la valeur de x2");
	scanf("%f",&x2);
	printf("veuillez entrer la valeur de x2");
	scanf("%f",&x1);
	(AB)= sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("la distance entre A et B : %f", (AB));
	return 0;
}
