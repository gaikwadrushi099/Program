#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First , int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    PNODE temp = *First;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Element of LinkedList is : \n");

    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First = First -> next;
    }
    printf("NULL\n");
}

void Reverse(PNODE First)
{
    int iRev = (First -> data);

    while(First != NULL)
    {
        if(iRev -> next == NULL)
    }
}

int main()
{
    PNODE Head = NULL;
    bool iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,202);
    InsertLast(&Head,6);
    InsertLast(&Head,40);
    
    Display(Head);
    iRet = CheckPallindrome(Head);
    printf("%d\t",iRet);
    
    return 0;
}