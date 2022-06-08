#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("n= ");
    int n,br;
    br=0;
    scanf("%d",&n);
    int table [n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("[%d][%d]=",i,j);
            scanf("%d",&table[i][j]);
        }
    }
    printf("\n");
    for (int k=0;k<n;k++){
        printf("table[%d][%d]=%d",k,k,table[k][k]);
        printf("\n");
        for (int v=0;v<=br;v++){
            printf("\t");
        }
        br++;
    }
    int a=0;
    printf("\n");
    printf("\n");
    for (int k=0;k<n;k++){
        for (int v=0;v<br;v++){
            printf("\t");
        }
        printf("table[%d][%d]=%d",k,n-k-1,table[k][n-k-1]);
        printf("\n");
        br--;
        a++;
    }


    int q=1;
    for (int m = 0;m<n;m++){
        if (table[n-1][m]<0){
            q=0;
        }
    }
    if (q==0){
        for (int k=0;k<n;k++){
        table[k][n-k-1]=1;
    }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("[%d][%d] = %d  ",i,j,table[i][j]);
        }
        printf("\n");
    }


    int max=table[0][1];
    for (int i=0;i<n-1;i++){
        for (int j=1;j<=i+1&&i<n;j++){
        if (max<table[j][i]){
            max=table[j][i];
        }
        }
    }
    printf("Max = %d",max);
    return 0;
}
