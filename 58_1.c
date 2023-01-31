#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[] = "Successful";
    int Count = 0, i = 0;

    printf("Please enter the file Name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Open file \n");
        return -1;
    }

    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < Length; i++)
        {
            if(Data[i] >= 'A' && Data[i] <= 'Z')
            {
                Count++;
            }
        }
    }

    printf("Number of Capital case letters are : %d\n",Count);
    
    close(fd);
    
    return 0;
}