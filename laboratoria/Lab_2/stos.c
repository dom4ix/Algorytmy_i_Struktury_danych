
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct STACK
{
    int a;
    struct STACK *next;
};
struct STACK *top=NULL;

void push(int c, struct STACK **b)
{
        struct STACK *temp = (struct STACK*) malloc(sizeof(struct STACK));
        temp->a = c;
        temp->next = (*b);
        (*b)=temp;
}
int pop(struct STACK **t)
{
    if ((*t)!=NULL)
    {
        struct STACK *temp=(*t);
        int a = (*t)->a;
        (*t) = (*t)->next;
        free(temp);
        return a;
    }
    else
        return 0;
}

struct QUEUE
{
    char a;
    struct QUEUE *next;
};

struct QUEUE *head=NULL, *tail=NULL;

void push_back(char c, struct QUEUE **b)
{
    if((*b)!=NULL)
    {
        struct QUEUE *temp=(struct QUEUE*) malloc(sizeof(struct QUEUE));
        temp->a = c;
        temp->next = NULL;
        (*b)->next=temp;
        (*b)=temp;
    }
    else
    {
        (*b) = (struct QUEUE*) malloc(sizeof(struct QUEUE));
        (*b)->a = c;
        (*b)->next = NULL;
        head=(*b);
    }
}
char pop_front(struct QUEUE **t)
{
    if ((*t)!=NULL)
    {
        struct QUEUE *temp=(*t);
        char a = (*t)->a;
        (*t) = (*t)->next;
        free(temp);
        return a;
    }
    else
        return 0;
}

int main()
{
    char c[200], str[10];
    gets(c);
    int a, k=0;
    for (int i=0; i<strlen(c); i++)
    {
        if (c[i]=='-' && c[i+1]>='0' && c[i+1]<='9' && k==0) k=1;
        else
        if (c[i]>='0' && c[i]<='9') k=1;
        else
        if (c[i]==' ' && k==1)
        {
            k=0;
            strncpy(str,c,i+1);
            strcpy(c,&(c[i+1]));
            i=-1;
            a=atoi(str);
            push(a,&top);
        }
        else
        {
            if (c[i]!=' ') push_back(c[i], &tail);
            strcpy(c,&(c[i+1]));
            i=-1;
        }

    }
    if(k==1)
    {
        a=atoi(c);
        push(a,&top);
    }

    while(head!=NULL)
        printf("%c ", pop_front(&head));

    while(top!=NULL)
        printf("%d ", pop(&top));

    return 0;
}
