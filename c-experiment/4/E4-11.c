#include<stdio.h>
#include<stdlib.h>
#define stu struct student
stu
{
long num[20];
char name[20];
float sc1;
float sc2;
float sc3;
}s[5];
void save()
{
FILE *fp;
int i;
if((fp=fopen("e:\\student.dat","wb"))==NULL)
{
printf("cannot open file\n");
return;
}
for(i=0;i<5;i++)
{
if(fwrite(&s[i],sizeof(stu),1,fp)!=1) printf("file write error\n");
}
fclose(fp);
}
void load()
{
 FILE *fp;
    int i;
    stu a[10];
    if ((fp = fopen("e:\\student.dat", "rb")) == NULL)
    {
        printf("Fail !!\n");
        exit(0);
    }
    for (i = 0; i < 5; i++)
    {
        fread(&a[i], sizeof(stu), 1, fp);
        printf("%d %s %g %g %g\n", a[i].num, a[i].name, a[i].sc1, a[i].sc2, a[i].sc3);
    }
    fclose(fp);
}
void main()
{
int i;
for(i=0;i<5;i++)
scanf("%s %s %f %f %f",s[i].num,s[i].name,&s[i].sc1,&s[i].sc2,&s[i].sc3);
save();
load();
}