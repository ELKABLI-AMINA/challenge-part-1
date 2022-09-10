#include <stdio.h>



int main() {
	float mile, metre, km;
     printf("veuillez entrer la distance en mile");
     scanf("%f",&mile);
     km = mile/1.609;

     metre =mile/1609;
     printf("%.3f mile = %.3f metre", mile, metre);

	return 0;
}
