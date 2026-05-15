#include<stdio.h>
#include<string.h>
enum signal{red,yellow,green};
int main()
{
    enum signal s1;
    char input[20];
    printf("Enter signal colour(red/yellow/green):");
    scanf("%s",&input);
    if(strcmp(input,"red")==0)
    {
        s1=red;
    }
    else if(strcmp(input,"yellow")==0)
    {
        s1=yellow;
    }
    else if(strcmp(input,"green")==0)
    {
        s1=green;
    }
    else{
        printf("Invalid data ");
    return 0;}
    if(s1==red)
     {
        printf("Stop");
     }else if(s1==yellow)
     {
        printf("Ready");
     }else if(s1==green)
     {
        printf("GO");

     }
return 0;
    }
