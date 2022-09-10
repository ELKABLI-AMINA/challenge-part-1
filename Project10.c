#include <stdio.h>
#include <math.h>

int main() {
	const double pi=3.14;
	float circonference, rayon;
	printf("veuillez entrer le rayon ");
	scanf("%f",& rayon);
	circonference = 2* pi*rayon;
	printf("la circonference est :%f",circonference);
	
	return 0;
}
