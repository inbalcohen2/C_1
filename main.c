#include<stdio.h>
#include "myMath.h"




int main(int argc, char const *argv[])
{
    double input_x=0;
    printf("\n Please inset a real number: ");
    scanf("%lf",&input_x);

double f_1=sub(add(Exp(input_x),Pow(input_x,3)),2);
double f_2=add(mul(input_x,3),mul(Pow(input_x,2),2));
double f_3=sub(div(mul(Pow(input_x,3),4),5),mul(input_x,2));
printf("The value of f(x)=e^x+x^3−2 at the point %.4f is: %.4f",input_x,f_1);
printf("The value of f(x)=3x+2X^2 at the point %.4f is: %.4f",input_x,f_2);
printf("The value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4f",input_x,f_3);
     

    return 0;
}
