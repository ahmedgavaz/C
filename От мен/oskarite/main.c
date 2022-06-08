#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Num_people=0;

typedef struct oskars{
char name[50];
char country[30];
int ages;
double money;
int oskars;
}oskars;

void add(oskars *p){
if ((p=(oskars*)realloc(p,(++Num_people)*sizeof(oskars)))==NULL){
    printf("ERROR...");
    exit(1);
}
printf("Name: ");
scanf("%s",(p+Num_people-1)->name);
printf("Country: ");
scanf("%s",(p+Num_people-1)->country);
printf("Ages: ");
scanf("%d",&(p+Num_people-1)->ages);
printf("Money: ");
scanf("%lf",&(p+Num_people-1)->money);
printf("Oskars: ");
scanf("%d",&(p+Num_people-1)->oskars);
}

void dohod(oskars p[],double cash){
FILE *k;
if ((k=fopen("text.txt","w"))==NULL){
    printf("ERROR...");
    exit (1);
}
for (int i=0;i<Num_people;i++){
    if((p[i].money)>cash){
        fprintf(k,"%s %s %d %lf %d",p[i].name,p[i].country,p[i].ages,p[i].money,p[i].oskars);
        fprintf(k,"\n");
    }
}
fclose(k);
}

void godina(oskars p[],int year){
FILE *h;
if ((h=fopen("text1.bin","wb"))==NULL){
    printf("ERROR...");
    exit (1);
}
for (int i=0;i<Num_people;i++){
    if((2022-(p[i].ages))>year){
        if (fwrite(&p[i],sizeof(oskars),1,h)!=1){
            printf("ERROR...");
            exit(1);
        }
    }
}
fclose(h);
}

void deleting(oskars *p,int oskar){
int br=0;
for (int i=Num_people-1;i>=0;i--){
    if (((p+i)->oskars)<oskar){
        for (int j=i;j<Num_people-1;j++){
            strcpy((p+j)->name,(p+j+1)->name);
            strcpy((p+j)->country,(p+j+1)->country);
            (p+j)->ages=(p+j+1)->ages;
            (p+j)->money=(p+j+1)->money;
            (p+j)->oskars=(p+j+1)->oskars;
        }
        br++;
    }
}
Num_people-=br;
p=(oskars*)realloc(p,Num_people*sizeof(oskars));
}

int main()
{
    oskars *p;
    p=(oskars*)malloc(sizeof(oskars));
    for (int i=0;i<6;i++){
        add(p);
    }
    dohod(p,1000);
    godina(p,2000);
    deleting(p,3);
    for (int i=0;i<Num_people;i++){
        printf("%s\n",(p+i)->name);
    }
    free(p);
    return 0;
}
