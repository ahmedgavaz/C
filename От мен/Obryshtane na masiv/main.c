#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size: ");
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<(n/2);i++){
        int b=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=b;
    }
    for (int i=0;i<n;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
