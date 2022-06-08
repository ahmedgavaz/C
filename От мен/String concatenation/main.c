#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("String length: ");
    int l;
    scanf("%d",&l);
    char *str=(char*)calloc(str,sizeof(char)*l);
    while (1){
        printf("Input text: \n");
        char *str1=(char*)malloc(sizeof(char));
        scanf("%s",str1);
        if ((str1[0]=='q' && str1[1]=='u'&& str1[2]=='i' && str1[3]=='t') || (strlen(str1)>l-(strlen(str)))){
            break;
        }
        strcat(str,str1);
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;
}
