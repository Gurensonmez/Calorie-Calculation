#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  double TotalCalories,a,b,c;
  double grams;
  printf("enter how many grams of protein in this food\n");
  scanf("%lf",&a);
  printf("enter how many grams of carbohydrates in this food\n");
  scanf("%lf",&b);
  printf("enter how many grams of fat in this food\n");
  scanf("%lf",&c);
  
  TotalCalories=((a*4)+(b*4)+(c*9));
  printf("Total calories = %lf\n",(a*4)+(b*4)+(c*9));
  
  return 0;
}