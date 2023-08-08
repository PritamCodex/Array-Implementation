#include<stdio.h>
#include <stdlib.h>
#include <string.h>

//int create ();
int insert();
int delete();
int display();
int Exit();

//Global Variable Declaration
int arr[10];

int main(){
    int m;
    printf("\n");
    printf("----> This is an array Implementation Program <---- \n\n");
    printf("-MENU-\n\n");
    printf("For insertion of an element in array Press (1) \n");
    printf("For deletion of an element in array Press (2) \n");
    printf("For Displaying the array Press (3) \n");
    printf("For Polish Notation the array Press (4) \n\n");
    printf("Enter your choice : ");
    scanf("%d",&m);

    printf("\n");
    switch(m){
        case 1:
        insert();
        case 2:
        delete();
        case 3:
        display();
        case 4:
        Exit();
        default:
        printf("Wrong Choice Please Select From MENU \n\n");
    }
    return 0;
}

int insert()
{
    int i,j,size=0;
    char ch;
    for(i=1;arr[i]!=0;i++)
    {
        size=i;
    }
    printf("Enter The Array Elements\n");
            if(size==100)
              printf("/nArray Is Full");
            else{
                size++;
                scanf("%d",&arr[i]); 
            }
    main();
}

int delete(){
    char ch;
    int i,index,size=0,c,element=0;
    for(i=1;arr[i]!=0;i++)
    {
        size++;
    }
    printf("(Welcome to Deletion)\n\n\n");
    printf("Press 1 for Index Deletion, Press 2 for Element Deletion : ");
    scanf("%d",&c);
    if(c==1){
        printf("Enter the Index for Deletion : ");
        scanf("%d",&index);
        for(i=index;i<=size;i++){
            arr[i]=arr[i+1];
        }
        printf("\n");
    }
    if(c==2){
        printf("Enter the Element for Deletion : ");
        scanf("%d",&element);
        for(i=1;i<=size;i++){
            if(arr[i]==element){
            index=i;
            }
        }
        for(i=index;i<=size;i++){
            arr[i]=arr[i+1];
        }
        printf("\n");
    }
    main();
}

int display(){
    int i,count = 0;
    char ch;
    for(i=1; arr[i]!=0; i++)
    {
        count++;
    }
    printf("(Welcome to Display) \n\n\n");
    printf("The Array is : \n");
    
    for(i=1;i<=10;i++)
        printf("--------");
        printf("\n");
        printf("|");
        for(i=1;i<=10;i++)
            if(i<=count){
                printf(" %5d ",arr[i]);
                printf("    |");
            }
            else{
                printf(" %5s |"," ");
                
            }
            
        printf("\n");
        for(i=1;i<=10;i++)
            printf("--------");
        printf("\n");
    main();
}

int Exit(){
    printf("    .....          [Exiting]          ..... \n");
    printf(" .....     [End of program Thankyou]     ..... \n\n");
    exit(0);
}