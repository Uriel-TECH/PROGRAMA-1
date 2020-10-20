#include <stdio.h>
int maint(){

float a;
printf("Introduce el primer valor:");
scanf("%f",&a);

float b;
printf("Introduce el segundo valor:");
scanf("%f",&b);

if(a<b){
printf("La variable mayor es b\n");
}
if(a>b){
printf("La variable mayor es a\n");
}
printf("Fin del programa");
}
