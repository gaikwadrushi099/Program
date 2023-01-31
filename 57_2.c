#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreateFile(char Name[])
{
    int fd = 0;
    fd = creat(Name,0777);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Please enter file name that you want to creat: \n");
    scanf("%s",Fname);

    fd = CreateFile(Fname);
    if(fd == -1)
    {
        printf("Unable to Create File \n");
    }
    else
    {
        printf("File Created successfully\n");
    }


    return 0;
}