#include "upr.h"

int main()
{
    double a,b,c;
    int op;
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("Choose operation: ");
    scanf("%d",&op);
    switch (op){
    case 1:{
        c=sum(a,b);
        printf("%lf",a);
        break;}
    case 2:{
        c=raz(a,b);
        break;}
    case 3:{
        c=umn(a,b);
        break;}
    case 4:{
        c=del(a,b);
        break;}
    default:{
        printf("Erorr...");
        return 0;}}
    printf("Answer = %.3lf\n",c);
    printirane();
    return 0;
}
