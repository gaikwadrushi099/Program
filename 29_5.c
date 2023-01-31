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

int Digit(int iNo)
{
    int iSum = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplayDigitsSum(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = Digit(First-> data);
        printf("Addition of %d is : %d\n",First-> data,iRet);
        First = First -> next;
    }
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,110);
    InsertLast(&Head,230);
    InsertLast(&Head,20);
    InsertLast(&Head,240);
    InsertLast(&Head,640);
    
    
    Display(Head);
    DisplayDigitsSum(Head);
    return 0;
}