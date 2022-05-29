#include<stdio.h>
#include<malloc.h>//引用malloc的库文件
struct link{
    int data;
    struct link *next;//注意定义指针的标识符
};
int main(){
    struct link *head,*p,*q,*t;
    int i,n,a;
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++){
        p=(struct link *)malloc(sizeof(struct link));
        scanf("%d",&a);
        p->data=a;
        p->next=NULL;
        if(head=NULL)head=p;
        else q->next=p;
        q=p;
    }
    t=head;
    while(t!=NULL){
        printf("%d",t->data);
        t=t->next;
    }
    return 0;
}
