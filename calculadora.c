#include <stdio.h>
#include <math.h>

float suma(float, float);
float resta(float, float);
float mult(float, float);
float div(float, float);
int main() 
{
float a,b;
int c;
puts("ingresa dos numeros para operar con ellos\n");
scanf("%f%f",&a,&b);
puts("Escoge una oocion\n 1-suma \n 2-resta \n 3-multiplicacion \n 4-division\n");
scanf("%d",&c);
  switch(c){
case 1:
  printf("El resultado de la suma es %.2f\n", suma(a,b));
  break;
case 2:
  printf("El resultado de la resta es %.2f\n", resta(a,b));
  break;
case 3:
  printf("El resultado de la multiplicacion es %.2f\n", mult(a,b));
  break;
case 4:
  printf("El resultado de la division es %.2f\n", div(a,b));
  break;
    default: puts("numero invalido");
  }
}
float suma(float a, float b)
  {
  return(a+b);
  }
float resta(float a, float b)
  {
  return(a-b);
  }
float mult(float a, float b)
  {
  return(a*b);
  }
float div(float a, float b)
  {
  return(a/b);
  }
