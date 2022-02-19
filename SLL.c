#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head;

int create(int v)
{
    struct node *tmp,*q;
    tmp=malloc(sizeof(struct node));
    tmp->data=v;    //add data value inside tmp;
    tmp->next=NULL; //set next to null;
    // printf("%d",tmp->data);
    if(head==NULL)
    {
        head=tmp;
    }
    else
    {
        q=head;
        while (q->next!=NULL)
            q=q->next;
        q->next=tmp;
    }
    

}
int Display()
{
    struct node *q;
    if(head==NULL)
    {
        printf("\n List is Empty");
        return 0;
    }
    q=head;
    printf("\n The list is\n");
    while (q!=NULL)
    {
        printf("%d\n",q->data);
        q=q->next;
    }
    
}
void main()
{
    head=NULL;      //create empty linked list
    int ch,n,v,i;
    while (1)   //infinate loop continues suru rahil jo paryant apan forefully band karat nahi to paryant
    {
        printf("\n 0) Exit\n 1) Create\n 2) Display\n");
        printf("\n Enter Your Choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 0:
                exit(0);
                break;
            case 1:
                printf("\n How many nodes do you willing to create");
                scanf("%d",&n);
                for (i = 0; i < n; i++)
                {
                    printf("\n Enter the element");
                    scanf("%d",&v);
                    create(v);
                }
                break;
            case 2:
                Display();
                break;
                
        }
    }
    
}
