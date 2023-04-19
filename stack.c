
#include <stlib.h>
#include <stdio.h>

void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;


void main()
{
    int choice=0;
    printf("\nStack operations using linked list");
    printf("\n----------------------------------\n");
    while(choice!=4)
    {
        printf("\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case1:
            {
                push();
                break;
            }
            case2:
            {
                pop();
                break;
            }
            case3:
            {
                display();
                break;
            }
            case4:
            {
                printf("Exiting...");
                break;
            }
            default:
            {
                printf("Please Enter valid choice...");
            }
        };
    }
}

void push()
{
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("not able to pusht he element");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else
    }
}