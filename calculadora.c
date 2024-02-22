#include <stdio.h>
#include <math.h>

float suma(float, float);
int main() 
{
float a,b;
int c;
puts("ingresa dos numeros para operar con ellos\n");
scanf("%f%f"&a,&b);
puts("Escoge una oocion\n 1-suma \n 2-resta \n 3-multiplicacion \n 4-division\n");
scanf("%d"&c);
  switch(c){
case 1:
  suma( a,b);
  break;
case 2:
  break;
case 3:
  break;
case 4:
  break;
  {
}
float suma(float a, float b)
  {
  return(a+b);
  }
