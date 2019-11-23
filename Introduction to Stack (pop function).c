#
include<stdio.h>
#include<conio.h>
#define size 10

void push();
int top = -1;
int stack[size];
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Push\n");
        printf("\n4.Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();
                    break;

            case 4: exit(1);

default:printf("Invalid Choice");
        }
    }
}
void push()
{
    int item;
    if(top==(size-1))
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter the element to be pushed in stack");
        scanf("%d",&item);
        top = top+1;
        stack[top]=item;
    }
}
