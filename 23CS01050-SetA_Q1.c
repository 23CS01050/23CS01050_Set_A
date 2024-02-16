#include<stdio.h>
#include<math.h>
int main()

{
    float r;
    printf("radius of sphere= ");
    scanf("%f", &r);

    float a,b; 
    /*a=sphere olume
    b=surface area of sphere*/
    a = 1.33*3.14*pow(r,3);
    printf("olume of sphere= %f", a);
    b = 4*3.14*pow(r,2);
    printf("surface area of sphere= %f", b);
    return 0;
}