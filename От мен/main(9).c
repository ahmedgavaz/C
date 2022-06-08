#include <stdio.h>
#include <stdlib.h>

typedef struct mobile{
char name[50];
int code;
char number[11];
}ukaz;
int main()
{
    FILE *p;
    if ((p=fopen("ukazatel.txt","w"))==NULL){
        printf("ERROR...");
        exit (1);
    }
    while (1){
        ukaz a;
        char b[4];
        printf("Name: ");
        scanf("%s",&a.name);
        fprintf(p,"%s ",a.name);
        printf("Code: ");
        scanf("%d",&a.code);
        fprintf(p,"%d ",a.code);
        printf("Number: ");
        scanf("%s",&a.number);
        fprintf(p,"%s ",a.number);
        fprintf(p,"\n");
        printf("Do you want to add more: ");
        scanf("%s",b);
        if (strcmp(b,"No")==0){
            break;
        }
    }
    fclose(p);
    if ((p=fopen("ukazatel.txt","r"))==NULL){
        printf("ERROR...");
        exit (1);
    }
    ukaz *p1;
    int j=0;
    p1=(ukaz*)calloc(1,sizeof(ukaz));
    while (!feof(p)){
        fscanf(p,"%s %d %s",&p1[j].name,&p1[j].code,&p1[j].number);
        j++;
        p1=(ukaz*)realloc(p1,sizeof(ukaz)+j);
    }
    for (int g=0;g<j-1;g++){
        printf("Name: %s\n",p1[g].name);
        printf("Code: %d\n",p1[g].code);
        printf("Number: %s\n",p1[g].number);
        printf("\n");
    }
    close(p1);
    fclose(p);
    return 0;
}
