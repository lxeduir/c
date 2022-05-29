#include <stdio.h>
#include <malloc.h>
#define stu struct student
stu
{
    char name[20];
    int age;
    int wage;
    stu *next;
};
stu *creat(void)
{
    stu *q, *p, *h;
    int i = 1, j = 1;
    h = p = (stu *)malloc(sizeof(stu));
    while (i)
    {
        q = (stu *)malloc(sizeof(stu));
        scanf("%s", p->name);
        scanf("%d %d", &p->age, &p->wage);
        printf("0/1:");
        scanf("%d", &i);
        if (i != 0)p->next = q;
        p = q;
    }
    return h;
}
void output(stu *p)
{
    while (p != NULL)
    {
        printf("%s: ", p->name);
        printf("age=%d wage=%d\n", p->age, p->wage);
        p = p->next;
    }
}
void main()
{
    stu *p;
    p = creat();
    output(p);
}