#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b){
int temp;
temp =a;
*a=b;
&b=temp;
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
