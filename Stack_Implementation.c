#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define size 5 

int top=0,stack[size];

void push();
void pop();
void display();
void Exit();
 
void main()
{
int ch;
    printf("\n*** Stack Menu ***");
    printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
    printf("\n\nEnter your choice(1-4):");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        push();
        case 2: 
        pop();
        case 3: 
        display();
        case 4:
        Exit();
        default: printf("\nWrong Choice!!");
    }
}
 
void push()
{

    if(top==size)
    {
        printf("\nStack is full!!");
        main();
    }
    if(top<size)
    {
        top=top+1;
        printf("\nEnter element to push:");
        scanf("%d",&stack[top]);
        main();
    }
}
 
void pop()
{
    if(top==0)
    {
        printf("\nStack is empty!!");
        main();
    }
else
{
    printf("\nDeleted element is %d",stack[top]);
    top=top-1;
    main();
}
}
 
void display()
{
    int i,top2=0;
    if(top==0)
    {
        printf("\nStack is empty!!");
        main();
    }
    if(top!=0)
    {
        printf("\nStack is...\n");
        printf(" ....... \n");
        for(i=top;i>=1;--i)
        {
            if(i<top){
                printf("| %3d   |\n",stack[i]);
            }
            if(i==top){
                printf("| %3d   | <--- TOP (%d)\n",stack[i],top);
            }
        }
        printf(" ....... \n");
        main();
    }
}

void Exit(){
    printf("...Exiting Program...\n\n");
    exit(0);
}