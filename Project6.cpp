#include <stdio.h>

int main() {
 float F,C;
     printf("veuillez enter la temperature F");
     scanf("%f",&F);
     C = (F-32)/1.8;
     printf(" la temperature  en degre Celsius est:%f",C);	
	return 0;
}
