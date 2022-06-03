#include<stdio.h>
#include<malloc.h>

 struct link
{
    long a;
    struct link *next;
};

int main(){
   struct link *h ,*p,*q;
   h=p=(struct link *)malloc(sizeof(struct link));
   h->a=0;
for(long i=1;i<1000000;i++){
q=(struct link *)malloc(sizeof(struct link));
q->a=i;
p->next=q;
p=q;
}
p->next=NULL;
p=h;
do { printf("->%d",p->a); p=p->next; } while(p!=NULL);

}
