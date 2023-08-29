#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    float c = a + b;
    printf("%.2f + %.2f = %.2f\n",a,b,c);
    float d = a - b;
    printf("%.2f - %.2f = %.2f\n",a,b,d);
    float e = a * b;
    printf("%.2f * %.2f = %.2f\n",a,b,e);
    float f = a / b;
    printf("%.2f / %.2f = %.2f",a,b,f);
    return 0;
}