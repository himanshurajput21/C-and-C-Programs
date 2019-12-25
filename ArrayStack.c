#include<stdio.h>
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};
struct ArrayStack* createStack(int cap)
{
    struct ArrayStack *stack;
    stack=malloc(sizeof(struct ArrayStack));
    stack->top=-1;
    stack->capacity=cap;
    stack->array=(int*)malloc(sizeof(int)*stack->capacity);
    return(stack);
};
int isEmpty(struct ArrayStack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}
int isFull(struct ArrayStack *stack)
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}
int push(struct ArrayStack *stack,int item)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
    else
        printf("Stack is Full");
}
int pop(struct ArrayStack *stack)
{
    int item;
    if(!isEmpty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);

}
void main()
{
    int choice,item;
    struct ArrayStack *stack;
    stack=createStack(4);
    while(1)
    {
        printf("1.Push");
        printf("\n2.Pop");
        printf("\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("Enter value to push:");
                    scanf("%d",&item);
                    push(stack,item);
                    break;

            case 2:
                    item=pop(stack);
                    if(item==-1)
                        printf("Stack is Empty");
                    else
                        printf("Popped value is %d",item);
                    break;

            case 3: exit(0);
        }
    }
}
