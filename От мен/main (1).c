#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /*float circle(float a){
    float s=M_PI*a*a;
    return s;
 }

float square(float a){
    float s=a*a;
    return s;
}

float triangle(float a,float b){
    float s=a*b/2;
    return s;
}

float rectangle(float a,float b){
    float s=a*b;
    return s;
}

int num(int a){
    int b;
    if (a%2==0){
        b=0;
    }else{
    b=1;
    return b;}
}*/

int num(int a){
    int x,y;
    int b=a;
    int br=0;
    for (int i=1;i<2;){
        a=a/10;
        br++;
        if (a<10){
            br++;
            break;
        }
    }
    x=b%10;
    y=b/(pow(10,br));
    return x+y;}

/*float circle(float);
float square(float);
float rectangle(float,float);
float triangle(float,float);*/
int num(int);

int main()
{
    /*int t;
    float a,b,r,s;
    printf("Type: ");
    scanf("%d",&t);
    switch (t){
    case 1:
        printf("a = ");
        scanf("%f",&a);
        s=square(a);
        printf("S = %.2f\n",s);
        printf("Square");
        break;
    case 2:
        printf("a = ");
        scanf("%f",&a);
        printf("b = ");
        scanf("%f",&b);
        s=rectangle(a,b);
        printf("S = %.2f\n",s);
        printf("Rectangle");
        break;
    case 3:
        printf("a = ");
        scanf("%f",&a);
        printf("b = ");
        scanf("%f",&b);
        s=triangle(a,b);
        printf("S = %.2f\n",s);
        printf("Triangle");
        break;
    case 4:
        printf("r = ");
        scanf("%f",&r);
        s=square(a);
        printf("S = %.2f\n",s);
        printf("Square");
        break;
    default:
        printf("Error...");
        break;
    }
    int t;
    printf("Number: ");
    scanf("%d",&t);
    int f=num(t);
    if (f==0){
        printf("Chetno!");
    }else printf("Nechetno!");*/
    int t;
    printf("Number: ");
    scanf("%d",&t);
    int f=num(t);
    printf("Sum: %d",f);
    return 0;
}
