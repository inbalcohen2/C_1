#include "myMath.h"

double Exp(int x){

double Exponential=2.71828;
double power=1;
for (int i = 0; i < x; i++)
{
    
    power=Exponential*power;
}
return power;
}


double Pow(double x , int y)
{   

    double result_power=1;
    
    for (int i = 0; i <y; i++)
    {
        result_power=result_power*x;
    }
    return result_power;
}