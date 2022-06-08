#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Zadacha 1
    int n;
    printf("n = ");
    scanf("%d",&n);
    int m[n];
    for (int i=0;i<n;i++){
        printf("m[%d] = ",i);
        scanf("%d",&m[i]);}
    int b=0;
    int b1=0;
    int l=0;
    int l1=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==j){
                break;
            }
            if (m[i]==m[j]){
                b=i;
                l++;
            }
            if (m[i]!=m[j]){
                if(l>l1){
                    b1=b;
                    l1=l;
                    l=0;
                    break;
                }
            }
        }
        }
        printf("Start = %d\n",b1-l1);
        printf("Length = %d",l1+1);

        Zadacha 2
        int n;
        printf("n = ");
        scanf("%d",&n);
        int m[n];
        int a=1;
        for (int i=0;i<n;i++){
            printf("m[%d] = ",i);
            scanf("%d",&m[i]);}
        for (int i=1;i<n;i++){
            if (i==(n-1){
                    break;}
            if (m[0]<m[1]){
                if (i%2==1){
                    if(m[i]<m[i-1] || m[i]<m[i+1]){
                        a=0;
                    }
                }
                if (i%2==0){
                    if(m[i]>m[i-1] || m[i]>m[i+1]){
                        a=0;
                    }
                }
            }
            else {
                    a=0;}
        }
        if (a==1){
            printf("True!");
        }
        else printf("False!");

        Zadacha 3
        int n;
        printf("n = ");
        scanf("%d",&n);
        int m[n],a[n];
        for (int i=0;i<n;i++){
            printf("m[%d] = ",i);
            scanf("%d",&m[i]);}
        for (int i=0;i<n;i++){
          a[i]=m[n-1-i];
          }
        for (int i=0;i<n;i++){
          m[i]=a[i];
          }
         for (int i=0;i<n;i++){
            printf("m[%d] = %d\n",i,m[i]);
            }

        Zadacha 4
        int n,k;
        printf("n = ");
        scanf("%d",&n);
        int m[n],a[n];
        for (int i=0;i<n;i++){
            printf("m[%d] = ",i);
            scanf("%d",&m[i]);}
        printf("k = ");
        scanf("%d",&k);
        for (int i=0;i<k;i++){
            for (int j=0;j<n;j++){
            if (j==n-1){
                a[0]=m[j];
            }
            else{
                a[j+1]=m[j];
            }
            }
            for (int g=0;g<n;g++){
            m[g]=a[g];}
        }
        for (int i=0;i<n;i++){
            printf("m[%d] = %d\n",i,m[i]);
            }

        Zadacha 5
        int n,k;
        printf("n = ");
        scanf("%d",&n);
        int m[n];
        for (int i=0;i<n;i++){
            printf("m[%d] = ",i);
            scanf("%d",&m[i]);}
        printf("k = ");
        scanf("%d",&k);
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (m[i]>m[j]){
                    int b=m[i];
                    m[i]=m[j];
                    m[j]=b;
                }
            }
        }
        printf("K-tiq po golemina e: %d",m[k-1]);


        Zadahca 6
        int n;
        printf("n = ");
        scanf("%d",&n);
        int m[n];
        for (int i=0;i<n;i++){
            printf("m[%d] = ",i);
            scanf("%d",&m[i]);
            }
        int b=0;
        int b1=0;
        int l=1;
        int l1=1;
            for (int j=0;j<n;j++){
                if(j+1==n){
                    break;
                }
                if (m[j]==m[j+1]-1){
                    b=j;
                    l++;
                    }
                else{
                    if(l>l1){
                        b1=b-l+2;
                        l1=l;
                        l=1;
                    }
                }
            }
        printf("Narastvashta:\n");
        for (int i=b1;i<b1+l1;i++){
            printf("m[%d] = %d\n",i,m[i]);*/
        }
    return 0;
}
