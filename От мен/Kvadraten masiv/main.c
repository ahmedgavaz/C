#include <stdio.h>
#include <stdlib.h>

void glaven(int *p,int n){
    for (int i=0;i<n;i++){
        for (int k=0;k<i;k++){
            printf("     ");
        }
        printf("%d",*(p+(i*n+i)));
        printf("\n");
    }
    printf("\n");
}
void vtorostepenen(int *p,int n){
    for (int i=0;i<n;i++){
        for (int k=0;k<n-i-1;k++){
            printf("     ");
        }
        printf("%d",*(p+(n*(i+1)-i-1)));
        printf("\n");
    }
    printf("\n");
}
void nad_glaven(int *p,int n){
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
                    printf("     ");
                }
        for (int k=0;k<i;k++){
            printf("%d",*(p+(n*k+i)));
        }
    printf("\n");
    }
    printf("\n");
}
void pod_glaven(int *p,int n){
    for (int i=1;i<n;i++){
        for (int k=0;k<i;k++){
            printf("%d",*(p+(n*i+k)));
            printf("     ");
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    printf("Size: ");
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    glaven(&a,n);
    vtorostepenen(&a,n);
    nad_glaven(&a,n);
    pod_glaven(&a,n);
    return 0;
}
