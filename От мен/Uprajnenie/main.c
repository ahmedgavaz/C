/*#include <stdio.h>
#include <stdlib.h>

void sum(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int sbor(int *a,int *b){
*a=52;
*b=11;
return *a+*b;}
int main()
{
    int a=5;
    int b=12;
    int *p=&a;
    int *p1=&b;
    //sum(p,p1);
    (*p)*=4;
    printf("%d\n",sbor(p,p1));
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define PR(format, value) printf(""#value" = %"#format"\t",(value))
#define NL printf("\n")

int a[]={0,1,2,3,4};

void pointer()
{
    int x=1,z[]={0,1,2,3,4,5,6,7,8,9};
    int *ip;

    //printf("%p, %d\n",ip,*ip);

    ip = &x;
    printf("%p, %d\n",ip,*ip);

    ip = z;
    printf("%p, %d\n",ip,*ip);
    ip = ip+2;
    printf("%p, %d\n",ip,*ip);
    *ip += 3;
    printf("%p, %d\n",ip,*ip);
    ++*ip;
    printf("%p, %d\n",ip,*ip);
    *++ip;
    printf("%p, %d\n",ip,*ip);
    *ip++;
    printf("%p, %d\n",ip,*ip);
    (*ip)++;
    printf("%p, %d\n",ip,*ip);

    for (int i=0;i<10;++i)
        printf("%d ",z[i]);
    NL;
    for (ip=z;ip-z<10;++ip)
        printf("%d ",*ip);
    NL;
 }

 void pointer2()
 {
        int i,*p;
        for (i=0; i<=4; i++) PR(d,a[i]);
        NL;
        for (p=&a[0]; p<=&a[4]; p++)
           PR(d,*p);
        NL; NL;
        for (p=&a[0],i=1; i<=5; i++)
           PR(d,p[i]);
        NL;
        for (p=a,i=0; p+i<=a+4; p++,i++)
           PR(d,*(p+i));
        NL; NL;
        for (p=a+4; p>=a; p--) PR(d,*p);
        NL;
        for (p=a+4,i=0; i<=4; i++) PR(d,p[-i]);
        NL;
        for (p=a+4; p>=a; p--) PR(d,a[p-a]);
        NL;
 }
 void no_swap(int x, int y)
 {
     int temp = x;
     x = y;
     y = temp;
     PR(d,x);
     PR(d,y);
     NL;
 }
void swap(int *x, int *y)
 {
     int temp = *x;
     *x = *y;
     *y = temp;
     PR(d,*x);
     PR(d,*y);
     NL;
 }
int main(int argc,char *argv[])
{
    //for (int i=0;i<argc;++i)
     //   printf("%s\n",argv[i]);
    pointer();
    pointer2();
    int x=3,y=2;

    no_swap(x,y);
    PR(d,x);
    PR(d,y);
    NL;
    swap(&x,&y);
    PR(d,x);
    PR(d,y);

//    int x=1,z[]={0,1,2,3,4,5,6,7,8,9};
  //  int *ip;
    //printf("%p\n",ip);
    //printf("%p, %d\n",ip,*ip);
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

void sum(int *a,int length){
    int s=0;
    for (int i=0;i<length;i++){
        s+=*(a+i);
    }
    printf("Suma = %d",s);
}
int main()
{
    int a[]={5,5,3,2,3,24,2,4,3,2};
    sum(a,10);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define PR(format, value) printf(""#value" = %"#format"\t",(value))
#define NL putchar('\n')

#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1,x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

 void main1()
 {
        int a[]={0,1,2,3,4};
        int *p[]={a,a+1,a+2,a+3,a+4};
        int **pp=p;

        PRINT2(d,a,*a);
        PRINT3(d,p,*p,**p);
        PRINT3(d,pp,*pp,**pp);
        NL;
        pp++; PRINT3(d,pp-p,*pp-a,**pp);
        *pp++; PRINT3(d,pp-p,*pp-a,**pp);
        *++pp; PRINT3(d,pp-p,*pp-a,**pp);
        ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
        NL;
        pp=p;
        **pp++; PRINT3(d,pp-p,*pp-a,**pp);
        *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
        ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
 }

 void main2()
 {
        int a[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9} };
        int *pa[3]={a[0],a[1],a[2]};
        int *p=a[0];
        int i;

        for (i=0;i<3;i++)
           PRINT3(d,a[i][2-i],*a[i],*(*(a+i)+i));
        NL;
        for (i=0;i<3;i++)
           PRINT2(d,*pa[i],p[i]);
 }

 int main()
 {
     //main1();
        main2();
        return EXIT_SUCCESS;
 }*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p=(int*)malloc(sizeof(int));
    printf("a = ");
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        printf("p[%d] = ",i);
        scanf("%d",&*(p+i));
    }
    printf("New size");
    int b;
    scanf("%d",&b);
    int *f=(int*)realloc(p,b*sizeof(int));
    for (int i=0;i<a;i++){
        printf("f[%d] = %d\n",i,*(f+i));
    }
    return 0;
}
