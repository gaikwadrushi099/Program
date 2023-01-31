#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int iNo)
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
    printf("Element of LinkedList is : ");

    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First = First -> next;
    }
    printf("NULL\n");
}

int iDigit(int iNo)
{
    int iDigit = 0, iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

void DisplayDigitsMult(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = iDigit((First -> data));
        printf("Multiplication of Digit of %d is :%d\n",First -> data,iRet);
        First = First -> next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, 10);
    InsertLast(&Head, 20);
    InsertLast(&Head, 32);
    InsertLast(&Head, 42);

    Display(Head);
    DisplayDigitsMult(Head);
    return 0;
}