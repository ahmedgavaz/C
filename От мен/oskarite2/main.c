#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct oskars{
char name[40];
char country[20];
int ages;
double money;
int oskars;
}oskars;

void add(oskars *p,int *br){
p=(oskars*)realloc(p,(*br+1)*sizeof(oskars));
printf("Name: ");
scanf("%s",(p+*br)->name);
printf("Country: ");
scanf("%s",(p+*br)->country);
printf("Ages: ");
scanf("%d",&(p+*br)->ages);
printf("Money: ");
scanf("%lf",&(p+*br)->money);
printf("Oskars: ");
scanf("%d",&(p+*br)->oskars);
*br=*br+1;
}

void textov(oskars p[],double cash,int br){
FILE *k;
if ((k=fopen("text.txt","w"))==NULL){
    printf("ERROR...");
    exit (1);
}
for (int i=0;i<br;i++){
    if(p[i].money>cash){
        fprintf(k,"%s %s %d %lf %d",p[i].name,p[i].country,p[i].ages,p[i].money,p[i].oskars);
    }
}
fclose(k);
}

int main()
{
    oskars *p;
    p=(oskars*)malloc(sizeof(oskars));
    int f=0;
    for (int i=0;i<6;i++){
        add(p,&f);
    }
    textov(p,1000,f);
    free(p);
    return 0;
}
