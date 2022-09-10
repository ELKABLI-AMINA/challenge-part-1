#include <stdio.h>

int main() {

     float Fahrenheit, Celsius,T;
       printf("veuillez entrer la temperature en Fahrenheit");
       scanf("%f",&Fahrenheit);
       Celsius = (Fahrenheit - 32 ) /  1.8;
        printf("%.2f Fahrenheit= %.2f Celsius", Fahrenheit , Celsius );
        if(T> 10)
            printf("il fait tres froid");
            else if( T<10 & T>15)
            printf("il fait froid");
            else if(T<15& T>30)
            printf("il fait chaud");
            else 
            printf("il fait chaud");


	return 0;
}
