//Trying out the fork() system call
#include<stdio.h>
#include<unistd.h>

int main()
{
    fork();
    printf("hello world");
}