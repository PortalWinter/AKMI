#include <stdio.h>
 
float celsius_to_kelvin(float c)
{
  return (c + 273.15);
}
 
int main()
{
 
 
  float c = 50;
 
  printf("Temperature in Kelvin: %0.2f",celsius_to_kelvin(c));
  return 0;
}
