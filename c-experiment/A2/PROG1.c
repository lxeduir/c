#include <stdio.h>
#include <string.h>
void fun(char *s, char t[])
{
    int i=0;
    while(*s){
    if(*s%2==0){
        t[i]=*s;
        i++;
    }
    s++;//指针移位
    }
    t[i]='\0';

}
main()
{
    char s[100], t[100];
    printf("\nPlease enter string S:");
    scanf("%s", s);
    fun(s, t);
    printf("\nThe result is: %s\n", t);
    NONO();
}
NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    char s[100], t[100];
    FILE *rf, *wf;
    int i;
    rf = fopen("C:\\ in.dat", "r");
    wf = fopen("C:\\ out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fscanf(rf, "%s", s);
        fun(s, t);
        fprintf(wf, "%s\n", t);
    }
    fclose(rf);
    fclose(wf);
}