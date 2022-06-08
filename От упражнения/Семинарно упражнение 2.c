#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  /*
   Zadacha 1
   for (int i=1;i<=10;i++){
        printf("%d\n",i);
   0 }

    Zadacha 2
    int a=0;
    for (int j=1;j<=55;j++){
        for (int k=1;k<=j;k++){
            printf("*");
            a++;
            if (a==55){
                break;
            }
        }
        if (a==55){
                break;
            }
        printf("\n");
    }
    printf("\n");

    Zadacha 3
    printf("char= ");
    char c=getchar();
    printf("%c%c%c%c%c%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c,c);
    for (int i=1;i<=3;i++){
        printf("%c        %c\n",c,c);
    }
    printf("%c%c%c%c%c%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c,c);

    Zadacha 4
    printf("char= ");
    char f=getchar();
    printf("\n");
    printf("    %c    \n",f);
    printf("   %c %c   \n",f,f);
    printf("  %c   %c   \n",f,f,f);
    printf(" %c     %c   \n",f,f,f,f);
    printf("%c%c%c%c%c%c%c%c%c  \n",f,f,f,f,f,f,f,f,f);

    Zadacha 5
    printf("Inches= ");
    float a;
    scanf("%f",&a);
    printf("\n");
    float cm=a*2.54;
    float mm=cm*10;
    float dm=cm*0.1;
    float m = cm*0.01;
    printf("mm = %.2fmm\n",mm);
    printf("cm = %.2fcm\n",cm);
    printf("dm = %.3fdm\n",dm);
    printf("m = %.4fm\n",m);

    Zadacha 6
    printf("Celsius = ");
    float a;
    scanf("%f",&a);
    printf("\n");
    printf("Fahrenheit = %.2f",(a*1.0*9/5)+32);

    Zadacha 7
    printf("Degrees = ");
    float a;
    scanf("%f",&a);
    printf("\n");
    printf("Radians = %f",a*1.0*M_PI/180);

    Zadacha 8
    printf("Leva = ");
    float a;
    scanf("%f",&a);
    printf("\n");
    printf("Dollars = %.2f\n",a*0.57);
    printf("Euros = %.2f\n",a*0.51);
    printf("Pounds = %.2f\n",a*0.43);

    Zadacha 9
    printf("A = ");
    float a;
    scanf("%f",&a);
    printf("\n");
    printf("B = ");
    float b;
    scanf("%f",&b);
    printf("\n");
    printf("H = ");
    float h;
    scanf("%f",&h);
    printf("\n");
    printf("S = %.2f",(a+b)*h/2);

    Zadacha 10
    double degree;
    printf("Degree = ");
    scanf("%lf", &degree);
    double radian = degree * (M_PI / 180);
    printf("sin =  %lf \n", sin(radian));
    printf("cos =  %lf \n", cos(radian));
    printf("tan = %lf \n", tan(radian));
    printf("cotg = %lf \n", 1/tan(radian));

    Zadacha 11
    printf("x1 = ");
    float x1;
    scanf("%f",&x1);
    printf("\n");
    printf("y1 = ");
    float y1;
    scanf("%f",&y1);
    printf("\n");
    printf("x2 = ");
    float x2;
    scanf("%f",&x2);
    printf("\n");
    printf("y2 = ");
    float y2;
    scanf("%f",&y2);
    printf("\n");
    float s=(abs(x1-x2)*abs(y1-y2));
    printf("S = %.2f",s);

    Zadacha 12
    printf("x1 = ");
    float x1;
    scanf("%f",&x1);
    printf("y1 = ");
    float y1;
    scanf("%f",&y1);
    printf("x2 = ");
    float x2;
    scanf("%f",&x2);
    printf("y2 = ");
    float y2;
    scanf("%f",&y2);
    float x3;
    printf("x3 = ");
    scanf("%f",&x3);
    printf("y3 = ");
    float y3;
    scanf("%f",&y3);
    float s = abs(0.5*((y2+y1)*(x1-x2))+0.5*((y1+y3)*(x3-x1))-0.5*((y2+y3)*(x3-x2)));
    printf("S = %f",s);

    Zadacha 13
    float  w,h;
    printf("W = ");
    scanf("%f",&w);
    printf("H = ");
    scanf("%f",&h);
    float s=(w-1)*h;
    float m= (s/(0.7*1.2))-3;
    printf("Places = %f",m);

    Zadacha 14
    printf("Leva zelenchuci = ");
    float lv1;
    scanf("%f",&lv1);
    printf("\n");
    printf("Leva plodove = ");
    float lv2;
    scanf("%f",&lv2);
    printf("\n");
    printf("Kg zelenchuci = ");
    float zel;
    scanf("%f",&zel);
    printf("\n");
    printf("Kg plodove = ");
    float plod;
    scanf("%f",&plod);
    printf("\n");
    float euro=lv1*zel*1.95+lv2*plod*1.95;
    printf("Total euro = %.2f",euro);

    Zadacha 15
    int n, w, l, m, o;
    printf("N = ");
    scanf("%d",&n);
    printf("W = ");
    scanf("%d",&w);
    printf("L = ");
    scanf("%d",&l);
    printf("M = ");
    scanf("%d",&m);
    printf("O = ");
    scanf("%d",&o);
    double area=(n*n)-(m*o);
    double tile = area/(w*l);
    printf("Broi plochki = %.2lf\n", tile);
    printf("Rabota = %.2lf minuti", tile*0.2);


    Zadacha 16
    int n;
    double m, usd;
    printf("Dni= ");
    scanf("%d",&n);
    printf("Pari = ");
    scanf("%lf",&m);
    printf("Kurs na dolara = ");
    scanf("%lf",&usd);
    double salary=(n*m*14.5)*0.75;
    double daily=(salary/365)*usd;
    printf("Pari na den v leva = %.2lf", daily);*/

    return 0;
}
