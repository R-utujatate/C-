//C program to reverse a string using Recursion
#include<stdio.h>
#include<string.h>


void reverseStringRecursive(char* str, int start, int end)
{
    //Base case
    if(start >= end)
    {
        return;
    }

    //Swap characters
    char temp = str [start];
    str [start]=str[end];
    str[end]=temp;

    //Recursively call the function with updated indices
    reverseStringRecursive(str,start +1,end -1);
}

int main()
{
    char str[100] ="Hello , How are you today ?????";
    printf("Original string: %s\n",str);

    reverseStringRecursive(str,0,strlen(str) - 1);
    printf("Reversed string: %s\n",str);
    
    return 0;
}