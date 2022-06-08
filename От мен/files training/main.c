#include <stdio.h>
#include <stdlib.h>
typedef struct student{
char name[11];
long int number;
float grade;
}student;
void creation(FILE *p){
    if ((p=fopen("text.txt","w"))==NULL){
        printf("ERROR...");
        exit (1);}
    while (1){
            student a;
            char g[10];
            printf("Name: ");
            scanf("%s",a.name);
            printf("Number: ");
            scanf("%d",&a.number);
            printf("Grade: ");
            scanf("%f",&a.grade);
            fprintf(p,"%s %d %f",a.name,a.number,a.grade);
            printf("Do you want to add more?");
            scanf("%s",g);
            if (strcmp(g,"No")==0){
                break;
            }
    }
    fclose(p);
}
void reading(FILE *p){
    if ((p=fopen("text.txt","r"))==NULL){
        printf("ERROR...");
        exit (1);}
    while (1){
            student a;
            if ((getline(p,"%s %d %f",a.name,&a.number,&a.grade))==EOF){
                break;
            }
            printf("%s %d %f\n",a.name,a.number,a.grade);
    }
    fclose(p);
}
int main()
{
    FILE *p;
   // if ((p=fopen("text.txt","w+"))==NULL){
     //   printf("ERROR...");
       // exit (1);}
    creation(p);
    reading(p);
   // fclose(p);
    return 0;
}
