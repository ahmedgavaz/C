#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("String: \n");
    char *p;
    p=(char*)malloc(sizeof(char));
    scanf("%[^\n]s",p);
    int c=0;
    for (int i=0;i<strlen(p);i++){
        if (c==1){
            printf("%c",p[i]);
        }
        if (p[i]==' '){
            c=1;
            continue;
        }
            }
    printf("\n");
    char *a;
    a=(char*)malloc(sizeof(char));
    for (int i=strlen(p)-1;i>=0;i--){
        a[i]=p[strlen(p)-1-i];

    }
    p=a;
    for (int i=0;i<strlen(p);i++){
        printf("%c",p[i]);
    }
    int f=0;
    int g=0;
    int h=0;
    for (int i=0;i<strlen(p);i++){
    if (p[i]==' '){
    f++;}
    if (p[i]==','){
    g++;}
    if (p[i]=='.'){
    h++;}}
    printf("Spaces = %d\n",f);
    printf("Commas = %d\n",g);
    printf("Points = %d\n",h);
    free(a);
    free(p);
    return 0;
}
