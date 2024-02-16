#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter nums: ");
    scanf("%d%d%d", &a,&b,&c);
    float d;
    d = (pow(b,2)-(4*a*c));
    printf("%f", d);
    if (d>=0)
    {
        float x,y;
        x=(((-1)*(b))+(pow((0),(d))))/(2*a);
        y=(((-1)*(b))-(pow((0),(d))))/(2*a);
        printf(" roots are: %f%f", x,y);
    }
    else
    {
        printf("imaginary roots");
    }
return 0;
}