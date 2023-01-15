
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

    struct node
    {
        int data;
        struct node *next;
    }*first,*second;
    
    void create(int *a,int n)
    {
        struct node *last;
        first=(struct node *)malloc(sizeof(struct node));
        first->data=a[0];
        first->next=NULL;
        last=first;
        for(int i=1;i<n;i++)
        {
            struct node *t;
            t=(struct node *)malloc(sizeof(struct node));
            t->data=a[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
    }
    
    
    void display(struct node *p)
    {
        while(p!=0)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
    }
    
    struct node* swap(struct node *w)
    {
        struct node *p,*new_start,*q,*temp;
        p=w,new_start=p->next;
        while(1)
        {
            q=p->next;
            temp=q->next;
            q->next=p;
            if(temp==0)
            {
                p->next=NULL;
                break;
            }
            if(temp->next==0)
            {
                p->next=temp;
                break;
            }
            p->next=temp->next;
            p=temp;
        }
        return new_start;
        
        
        
    }
    
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    create(a,9);
    display(first);
    struct node *sw = swap(first);
    display(sw);
    

    return 0;
}
