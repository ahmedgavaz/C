#include <stdio.h>
#include <stdlib.h>

int main()
{   char s ='0';
    printf("Numbers:\n");
    for (int i;i<=9;i++){
        printf("%d\n",s+i);
    }

    printf("Letters:\n");
    char k='A';
    for (int j=0;j<=10;j++){
        printf("%d\n",k+j);
    }

    printf("a=");
    float a,b,c;
    printf("");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("");
    c=a*b;
    printf("S= %f",c);

    int r;
    float pi=3.14,area;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area= %.2f\n",area);

    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("\n");
    printf("b=");
    scanf("%d",&b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;

}
