#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    float Fahrenheit, Celsius;
    printf("veuillez entrer la temperature en Fahrenheit");
    scanf("%f",&Fahrenheit);
    Celsius = (Fahrenheit - 32 ) /  1.8;
     printf("%.2f Fahrenheit= %.2f Celsius", Fahrenheit , Celsius );
	return 0;
}
