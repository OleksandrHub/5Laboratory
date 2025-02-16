#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,xp,xk,h,x,y ;
    printf("a = "); scanf("%f",&a);
    printf("b = "); scanf("%f",&b);
    printf("xp = "); scanf("%f",&xp);
    printf("xk = "); scanf("%f",&xk);
    printf("h = "); scanf("%f",&h);
    x=xp;
    do {
        y=tan(x*a)/asin(0.05*a*x)+exp(3.7)*log10(b*b)-pow(b*x,1/3);
        printf("x = %f \t \t y = %f \n",x,y);
        x+=h;
    }while(x<=xk+h/2);    
    return 0;
}
