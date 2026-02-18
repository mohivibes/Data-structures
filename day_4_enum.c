/* Enumarated datatype
An Enum is a user defined datatype that contains a group of named integer constants 
*/
#include<stdio.h>
enum signal{red,yellow,green};
int main()
{
    enum signal s1;
    s1=red;
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
