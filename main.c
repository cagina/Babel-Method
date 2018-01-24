#include <stdio.h>
#include <stdlib.h>
void babel_method(float);
int main()
{
    float square_number;
    printf("Enter number: ");
    scanf("%f",&square_number);
    babel_method(square_number);
    return 0;
}
void babel_method(float square_number)
{
    float result;
    static float sqrt;
    static int a=0;
    ++a;
    if(a==1)
    {
      sqrt=square_number;
      result=0.5*(1+sqrt);
    }
    else
     result=0.5*(square_number+(sqrt/square_number));
    if(a<101)
    babel_method(result);
    else
    printf("Result= %f",result);

}
