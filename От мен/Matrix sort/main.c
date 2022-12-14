#include <stdio.h>
#include <stdlib.h>

void printing_matrix(int matrix[4][4]) {
    for(int i=0;i< 4;i++)
        {
             printf("[");
        for(int j=0;j< 4;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
}

void printing_condition() {
    printf("Да се състави програма за обработка на масива МАТ[4,4] съставен от цели числа в "
        "интервала [0,999].Програмата да извършва следните действия:\n"
            "*отпечатване на условието на задачата\n"
            "*отпечатване на имената на автора на програмата\n"
            "*въвеждане на входните данни\n"
            "*отпечатване на входните данни\n"
            "*сортиране на всеки стълб по сумата от цифрите на елементите му във възходящ ред\n"
            "*отпечатване на получените резултати след обработката\n");
             printf("\n");
}

void printing_names() {
    printf("Борислав Партенов");
    printf("\n");
}

void sorting(int matrix[4][4]){
    for(int i=0;i< 4;i++)
        {
            int suma=0;
            int suma1=0;
        for(int j=0;j< 3;j++)
        {
            int a=matrix[i][j];
            int b=matrix[i][j+1];
            while(a>0){
                suma+=a%10;
                a=a/10;
            }
            while(b>0){
                suma1+=b%10;
                b=b/10;
            }
        }
        if (suma>suma1){
            for (int j=0;j<4;++j){
                for (int k=(j+1);k<4;++k){
                if (matrix[i][j] > matrix[i][k]){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
            }
        }
    }
}
int main()
{
    int matrix[4][4];
    printing_names();
    printing_condition();

     for(int i=0;i< 4;i++)
        {
        for(int j=0;j< 4;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            if (matrix[i][j]<0 || matrix[i][j]>999){
                printf("Error...");
                return 1;
            }
        }
    }

    printf("Въведената матрица:\n");
    printing_matrix(matrix);

    sorting(matrix);

    printf("Резултат след обработка:\n");
    printing_matrix(matrix);

    return 0;
}
