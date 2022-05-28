#include<stdio.h>
#include<malloc.h>//引用malloc的库文件
#define N 10
typedef struct link{
    int data;
    struct link *next;//注意定义指针的标识符
}SLIST;
SLIST *creatlist(int *a)
{ 
 SLIST *h,*p,*q; 
 int i;
h=p=(SLIST *)malloc(sizeof(SLIST));
for(i=0; i<N; i++)
{ q=(SLIST *)malloc(sizeof(SLIST));
q->data=a[i]; p->next=q; p=q;
}
p->next=0;
return h;
}
void outlist(SLIST *h)
{ SLIST *p;
p=h->next;
if (p==NULL) printf("\nThe list is NULL!\n");
else
{ printf("\nHead");
do { printf("->%d",p->data); p=p->next; } while(p!=NULL);
printf("->End\n");
}
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,10,10};
    SLIST *head;
    head=creatlist(a);
    outlist(head);
}
