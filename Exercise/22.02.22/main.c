#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("a= ");
    scanf("%d/n",&a);
    if (a>6){
        printf("It is bigger than 6!\n");
    }else if (a<6){
        printf("It's not bigger than 6!\n");}
    else printf("It 6!\n");

    if (a  % 8 > 4){
        printf("It's bigger than 4!\n");
    }else if (a  % 8 == 4){
        printf("It's 4!\n");
    }
    else printf("It's less than 4!\n");


    int a;
    printf("a= ");
    scanf("%d/n",&a);
    switch (a){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Not a day...");
            break;

    }

    int a;
    printf("a= ");
    scanf("%d/n",&a);
    int b;
    printf("b= ");
    scanf("%d/n",&b);
    int sum = 0;
    int cheten=0;
    int necheten=1;
    if (a<b){
        for (int i=a+1;i<b;i++){
            sum +=i;
            if(i%2==0){
                cheten+=i;
            }else necheten*=i;
        }
        printf("Suma= %d\n",sum);
        printf("Chetna suma= %d\n",cheten);
        printf("Nechetna suma= %d\n",necheten);
    }else{
        for (int i = b+1;i<a;i++){
            sum +=i;
            if(i%2==0){
                cheten+=i;
            }else necheten*=i;
        }
        printf("Suma= %d\n",sum);
        printf("Chetna suma= %d\n",cheten);
        printf("Nechetna suma= %d\n",necheten);
    }

    int a;
    printf("a= ");
    scanf("%d/n",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    int n;
    int br=0;
    printf("N= ");
    scanf("%d/n",&n);
    int k;
    printf("K= ");
    scanf("%d/n",&k);
    for (int i=1;i<=n;i++){
        int n1;
        printf("N[%d]= ",i);
        scanf("%d/n",&n1);
        if (n1>k && n1 %3==0){
            br++;
        }
    }
    printf("Broi= %d",br);

    float n;
    printf("N= ");
    scanf("%f/n",&n);
    float k;
    printf("K= ");
    scanf("%f/n",&k);
    if (n<k){
        for (float i=n;i<k;i=i+0.01){
            float func=i*i-4;
            printf("Function = %f\n",func);
        };
    }else{
        for (float i=k;i<n;i=i+0.01){
            float func=i*i-4;
            printf("Function = %f\n",func);
        };
    }
    return 0;
}
