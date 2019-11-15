#include<stdio.h>
#include "myMath.h"




int main(int argc, char const *argv[])
{
    double input_x=0;
    printf("\n Please inset a real number: ");
    scanf("%lf",&input_x);

float tmp1=(float)Exp((int)input_x);
float tmp2 =(float)Pow(input_x,3);
float f_1=sub(add(tmp1,tmp2),(float)2);


float tmp3=(float)mul(input_x,3);
float tmp4=(float)mul(Pow(input_x,2),2);
float f_2=add(tmp3,tmp4);



float f_3=sub((float)div(mul(Pow(input_x,3),4),5),(float)mul(input_x,2));

printf(" \n The value of f(x)=e^x+x^3−2 at the point %.4f is: %.4f",input_x,f_1);
printf(" \n The value of f(x)=3x+2X^2 at the point %.4f is: %.4f",input_x,f_2);
printf(" \n The value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4f",input_x,f_3);
     

    return 0;
}
