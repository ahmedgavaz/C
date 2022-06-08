#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Num_elements=0;

typedef struct product{
char name[31];
int id;
char date[11];
double price;
}product;

void adding(product *p){
if ((p=(product*)realloc(p,((++Num_elements)*sizeof(product))))==NULL){
    printf("ERROR...");
    exit(1);
}
FILE *k;
if ((k=fopen("in.bin","ab"))==NULL){
    printf("ERROR...");
    exit (1);
}
printf("Name: ");
scanf("%s",(p+Num_elements-1)->name);
printf("ID: ");
scanf("%d",&(p+Num_elements-1)->id);
printf("Date: ");
scanf("%s",(p+Num_elements-1)->date);
printf("Price: ");
scanf("%lf",&(p+Num_elements-1)->price);
if (fwrite(p+Num_elements-1,sizeof(product),1,k)!=1){
    printf("ERROR...");
    exit (1);
}
fclose(k);
}

product *Over_pr(product p[],double cash){
int br=0;
product *Over_price;
if ((Over_price=(product*)malloc(sizeof(product)))==NULL){
    printf("ERROR....");
    exit (1);
}
for (int i=0;i<Num_elements;i++){
    if(p[i].price>cash){
        strcpy((Over_price+br)->name,p[i].name);
        (Over_price+br)->id=p[i].id;
        strcpy((Over_price+br)->date,p[i].date);
        (Over_price+br)->price=p[i].price;
        br++;
        if ((Over_price=(product*)realloc(Over_price,((br+1)*sizeof(product))))==NULL){
        printf("ERROR....");
        exit(1);
        }
    }
}
return Over_price;
}

void printing(){
FILE *p;
FILE *k;
if ((p=fopen("in.bin","rb"))==NULL){
    printf("ERROR....");
    exit(1);
}
if ((k=fopen("outTxt.txt","w+"))==NULL){
printf("ERROR....");
exit (1);
}
product a;
while ((fread(&a,sizeof(product),1,p))==1){
       fprintf(k,"%s %d %s %lf ",a.name,a.id,a.date,a.price);
    }
fseek(p,SEEK_SET,0);
fseek(k,SEEK_SET,0);
product b;
while ((fread(&a,sizeof(product),1,p))==1){
    printf("Binary Item:\n");
    printf("\tName: %s\n",a.name);
    printf("\tID: %d\n",a.id);
    printf("\tExpire Date: %s\n",a.date);
    printf("\tPrice: %lf\n",a.price);
    printf("Text Item:\n");
    fscanf(k,"%s %d %s %lf",b.name, &b.id, b.date, &b.price);
    printf("\tName: %s\n",b.name);
    printf("\tID: %d\n",b.id);
    printf("\tExpire Date: %s\n",b.date);
    printf("\tPrice: %lf\n",b.price);
}
fclose(p);
fclose(k);
}

int main()
{
    product *p;
    if ((p=(product*)malloc(sizeof(product)))==NULL){
        printf("ERROR....");
        exit (1);
    }
    for (int i=0;i<3;i++){
        adding(p);
    }
    for (int i=0;i<3;i++){
        printf("%s\n",(p+i)->name);
    }
    product *a;
    a=Over_pr(p,0);
    printf("%s",a->name);
    printing();
    free(p);
    return 0;
}
