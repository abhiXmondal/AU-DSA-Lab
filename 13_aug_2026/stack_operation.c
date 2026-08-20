#include <stdio.h>
#define max 5

int st[max], top = -1;

void push(int st[], int value)
{
    if (top == max - 1)
    {
        printf("The stack is overflowed\n");
        return;
    }
    else
    {
        top++;
        st[top] = value;
    }
}

int pop(int st[])
{
    if (top == -1)
    {
        printf("The stack is underflow\n");
        return -1;
    }
    else
    {
        int value = st[top];
        top--;
        return value;
    }
}

void display(int st[])
{
    if (top == -1)
    {
        printf("The stack is underflow\n");
        return;
    }
    else
    {
        printf("The stack is:\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", st[i]);
        }
    }
}

int main()
{
    int val, choice;

    while (1)
    {
        printf("\n---- MAIN MENU ----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n\n");

        printf("Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number you want to push: ");
            scanf("%d", &val);

            push(st, val);
            break;

        case 2:
            val = pop(st);

            if (val != -1)
            {
                printf("The deleted value from the stack is %d\n", val);
            }
            break;

        case 3:
            display(st);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice :-(\n");
        }
    }

    return 0;
}
