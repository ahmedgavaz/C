#include <stdio.h>
#include <stdlib.h>

/*
Zadacha1
void comparison(int a,int b){
if (a>b){
    printf("Bigger = %d\n",a);
    printf("Smaller = %d\n",b);
}
else{
    printf("Bigger = %d\n",b);
    printf("Smaller = %d\n",a);
}
}

void comparison1(){
    int a;
    printf("a = ");
    scanf("%d",&a);
    int s=a;
    int b=a;
    int i=1;
    while (i==1){
            printf("a = ");
            scanf("%d",&a);
            if (a==0){
                break;}
            if (a>b){
                b=a;
}
if (a<s){
    s=a;
}
    }
    printf("Bigger = %d\n",b);
    printf("Smaller = %d\n",s);
}

Zadacha 12
void butterfly(int stars, int reverse, int a)
{
   for (int i = 0; i < stars; i++)   {
      if (a)
      {
         printf("*");
      }
      else
      {
         printf("-");
      }
   }
   if (reverse)
   {
      printf("/ \\");
   }
   else
  {
      printf("\\ /");
   }
   for (int i = 0; i < stars; i++)
   {
      if (a)
      {
         printf("*");
      }
      else
      {
         printf("-");
     }
   }
   printf("\n");
}
void printA(int stars)
{
   for (int i = 0; i < stars; i++)
   {
      printf(" ");
   }
   printf("@\n");
}*/

int main()
{
    /*
    Zadacha 1
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    comparison(a,b);
    comparison1();

    Zadacha 2
    int h,m;
    printf("Hour = ");
    scanf("%d",&h);
    printf("\nMinute = ");
    scanf("%d",&m);
    if (h==23 && m>=45){
        h=0;
        m=m+15-60;
    }
    else if(m>=45){
        h++;
        m=m+15-60;
    }
    else{
        m+=15;
    }
    printf("%02d:%02d",h,m);

    Zadacha 3
    int a,b,c;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    if (a==b && b==c){
        printf("Yes");
    }
    else printf("No");

    Zadacha 4
    int a;
    double b=0;
    printf("a = ");
    scanf("%d",&a);
    if (a<=100) {
        b=5;
    }else if(a>100 && a<=1000){
    b+=0.2*a;
    }
    else if(a>1000){
        b+=a*0.1;
    }
    if (a%2==0){
        b+=1;
    }
    if (a%10==5) {
        b=b+2;}
    a+=b;
    printf("Bonus points = %.1f\n",b);
    printf("Points = %d",a);

    Zadacha 5
    int a,b,c,d;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    d=a+b+c;
    printf("%d:%02d",(d/60),(d%60));

    Zadacha 6
    double x,y,x1,y1,x2,y2;
    printf("x1 = ");
    scanf("%lf",&x1);
    printf("y1 = ");
    scanf("%lf",&y1);
    printf("x2 = ");
    scanf("%lf",&x2);
    printf("y2 = ");
    scanf("%lf",&y2);
    printf("x = ");
    scanf("%lf",&x);
    printf("y = ");
    scanf("%lf",&y);
    if (x>=x1 && x<=x2 && y>=y1 && y<=y2){
        printf("Inside");
    }
    else printf("Outside");

    Zadacha 7
    double n;
    char d;
    printf("n = ");
    scanf("%lf",&n);
    printf("Day/Night = ");
    d = getchar();
    scanf("%c",&d);

    if (n<20){
        if (d=='D')
            printf("Money = %.2lf",n*0.7);
        else printf("Money = %.2lf",n*0.79);
    }
    else if(n<100){
        printf("Money = %.2lf",n*0.09);
    }
    else if (n>100){
        printf("Money = %.2lf",n*0.06);
    }

    Zadacha 8
    int v,d1,d2,h,col;
    printf("V = ");
    scanf("%d",&v);
    printf("debit 1 = ");
    scanf("%d",&d1);
    printf("debit 2  = ");
    scanf("%d",&d2);
    printf("Hours  = ");
    scanf("%d",&h);
    col = (d1+d2)*h;
    if(col>=v){
        printf("Full");
    }
    else printf("Not full");

    Zadacha 9
    int x,y,z;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    printf("Y = ");
    scanf("%d",&z);
    double a=x*0.4;
    double b=a*y;
    double c=b/2.5;
    if (c>=z){
        printf("Enough");
    }
    else {
            printf("Not enough");}

    Zadacha 10
    int n,p1,p2,p3,p4,p5;
    double br=0;
    p1=0;
    p2=0;
    p3=0;
    p4=0;
    p5=0;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        int a;
        printf("n %d= ",i);
        scanf("%d",&a);
        br++;
        if (a<200){
            p1++;
        }
        else if(a<400){
            p2++;
        }
        else if (a<600){
            p3++;
        }
        else if(a<800){
            p4++;
        }
        else if(a>=800){
            p5++;
        }
    }
    printf("p1 = %.2lf %%\n",p1/br*100);
    printf("p2 = %.2lf %%\n",p2/br*100);
    printf("p3 = %.2lf %%\n",p3/br*100);
    printf("p4 = %.2lf %%\n",p4/br*100);
    printf("p5 = %.2lf %%\n",p5/br*100);

    Zadacha 11
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("/");
    for(int i=1;i<=n/2;i++)
        printf("%c",'^');
    printf("%c",92);
    for(int i=1;i<=n*2-n/2*2-4;i++)
        printf("%c",'_');
    printf("/");
    for(int i=1;i<=n/2;i++)
        printf("%c",'^');
    printf("%c\n",92);
    for(int i=3;i<n;i++)
        printf("|%*c\n",2*n-1,'|');
    printf("|%*c",(2*n-2-(n-1)/2-1)/2+1,' ');
    for(int i=1;i<=(n-1)/2-1;i++)
        printf("%c",'_');
    printf("%*c\n",(2*n-2-(n-1)/2)/2+2,'|');
    printf("%c",92);
    for(int i=1;i<=(2*n-2-(n-1)/2-1)/2;i++)
        printf("%c",'_');
    printf("/");
    for(int i=1;i<=(n-1)/2-1;i++)
        printf("%c",' ');
    printf("%c",92);
    for(int i = 1;i<=(2*n-2-(n-1)/2)/2;i++)
        printf("%c",'_');
    printf("/");


    Zadacha 12
    int n;
    printf("n = ");
    scanf("%d", &n);
    int width = 2 * n - 1;
    int height = 2 * (n - 2) + 1;
    int stars = (width - 3) / 2;
    int a=1;
    int reverse=1;
    for (int i = 0; i < (height - 1) / 2; i++){
        butterfly(stars, 0, a);
        a= !a;
        }
    a = 1;
    int x=width /2;
    printA(x);
    for (int i = 0; i < (height - 1) / 2; i++){
        butterfly(stars, 1, a);
        a = !a;
   }*/
    return 0;
}
