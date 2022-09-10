#include <stdio>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
     float metre,mile,km;

     printf("veuillez entrer la distance en metre");
     scanf("%f",&metre);
     mile = km*1.609;
     km = mile/1.609;
     metre =mile/1609;
     printf("%.3f metre = %.3f mile ",mile, metre );
	return 0;
}
