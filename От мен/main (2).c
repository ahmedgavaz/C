#include <stdio.h>
#include <stdlib.h>

/*void swap (int *a, int *b){
int x=*a;
*a=*b;
*b=x;}*/
void swap (int *a)
{
if (*a<100){
        *a=*a*10;
}
else if (*a<1000){
    *a+=10;
}
else if(*a>1000){
    *a=*a/10;
}
}
int main()
{
   /*char a='L';
    char *p1;
    int b=9,*p2;
    double c=3.14,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("%c\n",*p1);
    printf("%d\n",*p2);
    printf("%.2lf\n",*p3);
    printf("%p\n",p1);
    printf("%p\n",p2);
    printf("%p\n",p3);
    int a=5;
    int b=10;
    swap(&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);*/
    int x;
    printf("a= ");
    scanf("%d",&x);
    swap(&x);
    printf("a= %d",x);
    return 0;
}
