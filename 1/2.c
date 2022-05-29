#include<stdio.h>
#include<malloc.h>

typedef struct link
{
    long a;
    LINKS *next;
}LINKS;

int main(){
   LINKS *h ,*p,*q;
   h=p=(LINKS *)malloc(sizeof(LINKS));
   h->a=0;
for(long i=1;i<1000000;i++){
q=(LINKS *)malloc(sizeof(LINKS));
q->a=i;
p->next=q;
p=q;
}
p->next=NULL;
p=h;
do { printf("->%d",p->a); p=p->next; } while(p!=NULL);

}
