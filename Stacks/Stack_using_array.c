#include<stdio.h>
#define max_size 50
int pop(int stack[], int *top)       // function to pop out the element
{
    if(*top==-1)
    {
        printf("\nStack Underflow:");
    }
    else
    {
        int item = stack[*top];
        top-=1;
        return item;
    }

}
int push(int stack[],int *top,int item)   // function to push the element 
{
    if(*top>=max_size)
    {
        printf("\nStack Overflow");
    }
    else
    {
        *top+=1;
        stack[*top]=item;
        return stack[*top];
    }
    
}
int stackele(int stack[],int top)      // function to see the stack
{
     int i;
     if(top>=0)
     {
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
     }
    
}
int main()
{
    int ch;
    int stack[max_size];
    int item,option,top=-1;
    do{
        printf("Stack Operation:\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.View Stack\n");
        printf("Enter your Selection:");
        scanf("%d",&option);
        switch(option)       // selection menu
        {
            case 1: printf("You have selected Push Operation\n");
                    printf("Enter an item to push in a stack:");
                    scanf("%d",&item);
                    printf("\n%d is pushed into a stack.",push(stack,&top,item));
                    break ;
            case 2: printf("You have selected POP operation");
                    printf("\n%d is poped out of stack.",pop(stack,&top));
                    break;
            case 3:printf("Elements Present int the stack are:");
                    stackele(stack,top);
                    break;
            default: printf("Please select valid operation");
                    break;
        }
        printf("\nDo you want to continue the operation Yes:1 / No :0:");
        scanf("%d",&ch);
    }
    while(ch == 1);
    return 0;

}
