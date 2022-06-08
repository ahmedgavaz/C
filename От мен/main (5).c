#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char str[]){
char a=' ';
int b=0;
while (!(a=='\0')){
a=str[b];
b++;}
return b;
}

int main()
{
    char s1[]="Hello";
    char s2[]=" world!";
    char s3[]="Python";

    strcpy(s3,s1);
    printf("%s\n",s3);

    int a=strlen(s1);
    printf("%d\n",a);

    strcat(s1,s2);
    printf("%s\n",s1);

    int b=strcmp(s2,s1);
    int c=strcmp(s1,s3);

    printf("%d\n",b);
    printf("%d\n",c);

    int len=length(s1);
    printf("Length is: %d\n",len);

    char s4[]="";
    printf("Input text: \n");
    scanf("%[^\n]s",s4);
    int cc=0;
    int leng=0;
    while (!(a=='\0')){
    a=s4[cc];
    if ((a==' ') && !(s4[cc+1]==' ') ){
    leng++;}
    cc++;}
    printf("Words are: %d",leng+1);
    return 0;
}
