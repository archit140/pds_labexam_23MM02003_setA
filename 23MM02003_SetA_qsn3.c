#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float x1,x2;
  printf("Enter the coefficient of x^2 i.e a\n");
  scanf("%d",&a);
  printf("Enter the coefficient of x i.e b\n");
  scanf("%d",&b);
  printf("Enter the value of c i.e. c\n ");
  scanf("%d",&c);
  float d;
  d=b*b-4*a*c;
  if(d>0){
    printf("It will have real and different roots\n");
    float x1=((-b+pow(d,0.5))/2*a);
    float x2=((-b-pow(d,0.5))/2*a);
    printf("The roots of the equation is x1:%f and x2:%f",x1,x2);


  }
  if(d==0){
    printf(" It will have real and same roots\n");
    float x1=(-b/2*a);
    float x2=(-b/2*a);
    printf("The roots of the equation is x1:%f and x2:%f",x1,x2);
  }
  if(d<0){
    printf("It will have imaginary roots and no real roots");

  }
  return 0;



    
}