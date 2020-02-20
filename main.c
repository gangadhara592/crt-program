/* linked list creating and display */
#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int x)
{
    struct node *nn,*temp=head;
    nn=(struct node*)malloc(sizeof('struct node'));
    nn->data=x;
    nn->next=NULL;
    if(head==NULL)
    {
        head==nn;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nn;
}
void display()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("\n nothing in the list to be display");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            printf("->");
            temp=temp->next;
        }
    }
}
void main()
{
    int val,ch;
    while(1)
    {
        printf("\n 1.create");
        printf("\n 2.display \n 3.exit");
        printf("\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the data");
            scanf("%d",&val);
            create(val);break;
            case 2:
            display();break;
            case 3:
            exit(0);
        }
    }
}
