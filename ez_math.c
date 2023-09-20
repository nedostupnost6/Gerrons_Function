#include <stdio.h>
#include <math.h>

int main()
{
        double a,b,c;
        double p, s;
        printf("Пожалуйста, введите стороны треугольника:\n");
        scanf("%lf%lf%lf", &a, &b, &c);
        
        if ((c <= (a + b)) && (b <= (a + c)) && (a <= (c + b))){
                p = (a + b + c)/2;
                s = sqrt(p * (p - a) * (p - b) * (p - c));
                printf("Площадь вашего треугольника равна - %3.1lf\n", s);
        }else{
                printf("Треугольника со сторонами %3.0lf %3.0lf %3.0lf - не существует\n", a, b, c);
        }
        return 0;
}