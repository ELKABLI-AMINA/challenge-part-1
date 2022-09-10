#include <stdio.h>

int main() {
	float circonference,longueur,largeur;
	printf("veuillez entrer la longueur");
	scanf("%f",&longueur);
	printf("veuillez entrer la largeur");
	scanf("%f",&largeur);
	circonference  = 2*(longueur + largeur);
	printf("la circonference du rectangle est:%f", circonference);
	return 0;
}
