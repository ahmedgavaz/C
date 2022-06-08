#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE *p;
    p=fopen("text.txt","w");
    if (p==NULL){
        printf("ERROR....");
        exit(1);
    }
    for (int i=1;i<=5;i++){
        char a[256];
        gets(a);
        strcat(a,"\n");
        fputs(a,p);
    }
    fclose(p);
    printf("\n");
    p=fopen("text.txt","r");
    if (p==NULL){
        printf("ERROR....");
        exit(1);
    }
    for (int i=1;i<=5;i++){
        char a[256];
        fgets(a,256,p);
        for (int j=0;j<strlen(a);j++){
        printf("%c",a[j]);}
    }*/
    FILE *p;
    p=fopen("text.bin","wb+");
    if (p==NULL){
        printf("ERROR....");
        exit(1);
    }
    double a[10];
    for (int i=1;i<11;i++){
        printf("Number [%d] = ",i);
        scanf("%lf",&a[i-1]);
    }
    fwrite(a,sizeof(a),1,p);
    int b;double c;
    printf("Which number do you want:");
    scanf("%d",&b);
    fseek(p,(b-1)*sizeof(double),SEEK_SET);
    fread(&c,sizeof(double),1,p);
    printf("Your number is: %f",c);
    fclose(p);
    return 0;
}
