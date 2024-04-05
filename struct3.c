#include <stdio.h>
#include <math.h>

typedef struct{
   float a;
   float b;
}point;
int main() {
    float x ;
    point A,B;
    printf("veillez entrer les coordonne de A \n:");
    printf("l abssicee:");
    scanf("%f",&A.a);
    printf("cordonne ");
    scanf("%f",&A.b);
     printf("veillez entrer les coordonne de B \n:");
    printf("l abssicee:");
    scanf("%f",&B.a);
    printf("cordonne ");
    scanf("%f",&B.b);
   x=sqrt(pow(B.a - A.a, 2) + pow(B.b - A.b, 2));
   
   
     printf("la distance AB= %f",x);


  
    return 0;
}