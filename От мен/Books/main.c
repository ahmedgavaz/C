#include <stdio.h>
#include <stdlib.h>

typedef struct Books{
char book[100];
char author[100];
int year;
float price;
}book;

void Input(book a[]){
for (int i=0;i<5;i++){
    char b[100];
    printf("Book: ");
    scanf("%s",&b);
    strcpy(a[i].book,b);
    printf("Author: ");
    scanf("%s",&b);
    strcpy(a[i].author,b);
    printf("Year: ");
    scanf("%d",&a[i].year);
    printf("Price: ");
    scanf("%f",&a[i].price);
}
}

void Output (book a[]){
for (int i=0;i<5;i++){
if ((a[i].year)>2005){
    printf("Book: %s \t",a[i].book);
    printf("Author: %s \t",a[i].author);
    printf("Year: %d \t",a[i].year);
    printf("Price: %f \t",a[i].price);
    printf("\n");
}
}
}

void Lookint(book a[], char name[]){
    for (int i=0;i<5;i++){
if (strcmp(a[i].author,name)==0){
    printf("Book: %s \t",a[i].book);
    printf("Author: %s \t",a[i].author);
    printf("Year: %d \t",a[i].year);
    printf("Price: %f \t",a[i].price);
    printf("\n");
}
}}
int main()
{
    book a[5];
    Input(a);
    Output(a);
    Lookint(a,"Book1");
    return 0;
}
