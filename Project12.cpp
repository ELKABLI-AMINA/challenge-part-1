#include <stdio.h>

int main() {
	
       int a,b,c;
       printf("veuillez entrer la valeur de a : ");
       scanf("%d",&a);
       printf("veuillez entrer la valeur de b : ");
       scanf("%d",&b);
       printf("veuillez entrer la valeur de c : ");
       scanf("%d",&c);

       a=c;
       b=b;
       c=a;

       printf("l'inverse de a b c est :%d%d%d",c ,b, a);
	return 0;
}
