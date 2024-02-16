#include<stdio.h>
int main()
{
    float volume,area,radius;
    printf("Enter the radius");
    scanf("%f",&radius);
    volume=(4/3)*3.14*radius*radius*radius;
    area=4*3.14*radius*radius;
    printf("The volume of the given sphere is %.2f\n",volume);
    printf("The Area of the given sphere is %.2f\n",area);

}
