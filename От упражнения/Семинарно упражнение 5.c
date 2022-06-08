#include <stdio.h>
#include <stdlib.h>

void add(int *p,int x,int y){
p=(int*)realloc(p,(y+1)*sizeof(int));
p[y]=x;
}
void delete(int *p,int x,int *y){
int br=0;
for (int i=*y-1;i>=0;i--){
    if (p[i]==x){
        for (int j=i;j<*y-1;j++){
            p[j]=p[j+1];
        }
        br++;
    }}
*y=*y-br;
printf("%d",*y);
p=(int*)realloc(p,(*y-1)*sizeof(int));
}
void smallest(int *p,int x,int y){
for (int i=0;i<y;i++){
    for (int j=0;j<y;j++){
    if (p[i]<p[j]){
        int f=p[i];
        p[i]=p[j];
        p[j]=f;
    }
}
}
int h=p[x-1];
printf("%d",h);
}

int main()
{
    /*Zadacha 1
    int m,n;
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int b=1;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<m-1;j++){
            if ((a[i][j]>=a[i][j+1]) || (a[i][j]<=a[i+1][j])){
                b=0;
            }
        }
    }
    if (b==1){
        printf("True!");
    }
    else   printf("False!");

    Zadacha 2
    int m,n;
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     int sum = 0;
     for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (i==0 && j==0){
                int  sum1=a[i+1][j]+a[i+1][j+1]+a[i][j+1];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(i==0 && j==m-1){
                int  sum1=a[i+1][j]+a[i+1][j-1]+a[i][j-1];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(i==n-1 && j==0){
                int  sum1=a[i][j+1]+a[i-1][j+1]+a[i-1][j];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(i==n-1 && j==m-1){
                int  sum1=a[i-1][j]+a[i-1][j-1]+a[i][j-1];
                if (sum1>sum){
                sum=sum1;}
            }
             else if(i==0 && j>0 && j<m-1){
                int  sum1=a[i+1][j]+a[i+1][j-1]+a[i+1][j+1]+a[i][j-1]+a[i][j+1];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(j==0 && i>0 && i<m-1){
                int  sum1=a[i][j+1]+a[i-1][j+1]+a[i+1][j+1]+a[i-1][j]+a[i+1][j];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(i==n-1 && j>0 && j<m-1){
                int  sum1=a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i][j-1]+a[i][j+1];
                if (sum1>sum){
                sum=sum1;}
            }
            else if(j==m-1 && i>0 && i<m-1){
                int  sum1=a[i][j-1]+a[i-1][j-1]+a[i+1][j-1]+a[i-1][j]+a[i+1][j];
                if (sum1>sum){
                sum=sum1;}
            }
            else{
            int sum1=a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i-1][j-1];
            if (sum1>sum){
                sum=sum1;}
            }
        }
    }
    printf("Suma = %d",sum);

    Zadacha3
    int m,n;
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);
    int a[m][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    int min=a[0][0];
    int x,y=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j]>max){
                max=a[i][j];
                x=i;
            }
            if (a[i][j]<min){
                min=a[i][j];
                y=i;
            }
        }
    }
    int g[n];
    for (int i=0;i<n;i++){
        g[i]=a[x][i];
    }
    for (int i=0;i<n;i++){
        a[x][i]=a[y][i];
    }
    for (int i=0;i<n;i++){
        a[y][i]=g[i];
    }

    Zadacha 4
      int m, n, fr, r, el, br=0;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    printf("input number whose friends you searching for:");
    scanf("%d", &fr);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j]==fr){
                    printf("\n%d e priqtel s: ");
                    for (int k=0; k<m; k++){
                        if (arr[i][k]!=fr){
                            printf("%d, ", arr[i][k]);
                        }
                        br++;
                }
            }
        }
    }

    if (br==0){
        printf("this number haven't any friends! :(");
    }
*/
    int n,x;
    printf("n = ");
    scanf("%d",&n);
    int *p;
    p=(int *)calloc(n,sizeof(int));
    for (int a=0;a<n;a++){
        printf("p [%d] = ",a);
        scanf("%d",&p[a]);
    }
    printf("X = ");
    scanf("%d",&x);
    //add(p,x,n);
    //delete(p,x,&n);
    smallest(p,x,n);
    for (int a=0;a<=n;a++){
        printf("p[%d] = %d\n",a,p[a]);
    }
    return 0;
}
