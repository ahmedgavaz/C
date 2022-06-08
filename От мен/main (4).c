#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d",&n);
    int *p;
    p=(int *)calloc(n,sizeof(int));
    for (int a=0;a<n;a++){
        printf("p [%d] = ",a);
        scanf("%d",p+a);
    }
    printf("\n");
    for (int a=0;a<n;a++){
        printf("p [%d] = %d\n",a,p[a]);
    }
    int m;
    printf("New size: ");
    scanf("%d",&m);
    if (m>n){
        int *arr;
        arr=(int*)malloc(m*sizeof(int));
        for (int a=0;a<n;a++){
            arr[a]=p[a];
    }
    printf("\n");
    for (int a=n;a<m;a++){
        printf("arr [%d] = ",a);
        scanf("%d",&arr[a]);
    }
    printf("\n");
    for (int a=0;a<m;a++){
        printf("arr [%d] = %d\n",a,arr[a]);
    }
    free(p);
    }
    else {
        realloc(p,m);
        for (int a=0;a<m;a++){
        printf("arr [%d] = %d\n",a,p
               [a]);
    }
    }
    return 0;
}
