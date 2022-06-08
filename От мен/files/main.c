#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int a,b,c;
    if ((p=fopen("text.txt","w+"))==NULL){
        printf("ERROR...");
        exit(1);
    }
    fprintf(p,"1  2 323 3 4 5 r fr d se d");
    fclose(p);
    if ((p=fopen("text.txt","r"))==NULL){
        printf("ERROR...");
        exit(1);
    }
    fscanf(p,"%d%d%d",&a,&b,&c);
    printf("%d",c);
    fclose(p);
    return 0;
}
