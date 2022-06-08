#include <stdio.h>
#include <stdlib.h>

typedef struct predmet{
int math[11];
int bul[11];
int it[11];
}predmet;

typedef struct student{
char name[16];
char surname[16];
char family[16];
int num;
predmet subj;
}student;

student *data;
int counter = 0;


void ADDGrade(char *predmet, int grade, int num)
{
    for(int i=1;i<counter;i++){
        if(data[i].num==num){
            if (strcmp(predmet,"math")==0){
                for (int j=1;j<11;j++){
                    if (data[counter-1].subj.math[j]==0)
                        (data[counter-1].subj.math[j]=grade);
                        if (j>10) printf("Too much grades");
                }
            }else if (strcmp(predmet,"bul")==0){
             for (int j=1;j<11;j++){
                    if (data[counter-1].subj.bul[j]==0)
                        (data[counter-1].subj.bul[j]=grade);
                        if (j>10) printf("Too much grades");
            }}
            else if (strcmp(predmet,"it")==0){
             for (int j=1;j<11;j++){
                    if (data[counter-1].subj.it[j]==0)
                        (data[counter-1].subj.it[j]=grade);
                    if (j>10) printf("Too much grades");
            }
        }
    }
}
}

double CalcGrades(int *clas)
{
    double sum=0;
    int broi=0;
    for (int i=1;i<counter;i++)
        {
        if(data[i].num/100==clas)
        {
            for (int j=1;j<11;j++)
            {
             if(data[i].subj.math[j]!=0){
                broi++;
                sum+=data[i].subj.math[j];
             }
             if(data[i].subj.bul[j]!=0){
                broi++;
                sum+=data[i].subj.bul[j];
             }
             if(data[i].subj.it[j]!=0){
                broi++;
                sum+=data[i].subj.it[j];
             }
            }
        }
    }
    return sum/broi;
}

void ADDStudent(char *name, char *surname, char *famname, int num)
{
    data = (student*)realloc(data,++counter);
    if (data==NULL){
        printf("Error...");
        exit (1);
    }
    strcopy(data[counter-1].name,name);
    strcopy(data[counter-1].surname,surname);
    strcopy(data[counter-1].family,famname);
    data[counter-1].num=num;
}

void Writing(student *data[]){
FILE *p=fopen("file.bin","wb");
if(p==NULL){
    printf("Error");
    exit (1);
}
for (int i=1;i<counter;i++){
    if(fwrite(data[i],sizeof(student),1,p)!=1){
        printf("Error");
        exit (1);
    }
    close(p);
}
//if(fwrite(data[i],sizeof(student),counter,fp)!=counter); - bez cikyl
}


void chetene(){
FILE *p=fopen("directori,txt","r");
if(p==NULL){
    printf("Error");
    exit (1);
}
char row[200];
while (p!=EOF){
    if (fgets(row,200,p)==NULL){
        printf("Error");
        exit (1);
    }
    else{
        data = (student*)realloc(data,++counter);
        int temp=0;
        int curr=7;
        int classNum = (row[0]-'0')*10000+(row[1]-'0')*1000+(row[2]-'0')*100+(row[3]-'0')*10+row[4]-'0';
        data[counter-1].num=classNum;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]!=' '){
                data[counter-1].name[temp++]=row[i];
            }

        } data[counter-1].name[temp]='\0';
            curr++;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]!=' '){
                data[counter-1].surname[temp++]=row[i];
            }

        }
         data[counter-1].surname[temp]='\0';
            curr++;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]!=' '){
                data[counter-1].family[temp++]=row[i];
            }

        }
        data[counter-1].family[temp-1]='\0';
            curr+=5;
            int pos=1;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]>='2' && row[i]<='6'){
                data[counter-1].subj.math[pos++]=row[i]-'0';
            }
            else if(row[i]==' ') continue;
            else break;
    }
    curr+=4;
    pos=1;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]>='2' && row[i]<='6'){
                data[counter-1].subj.bul[pos++]=row[i]-'0';
            }
            else if(row[i]==' ') continue;
            else break;
    }
        pos=1;
        for (int i=curr;i<strlen(row);curr++,i++){
            if (row[i]>='2' && row[i]<='6'){
                data[counter-1].subj.it[pos++]=row[i]-'0';
            }
            else if(row[i]==' ') continue;
            else break;
    }
}
}
int main()
{

    return 0;
}
