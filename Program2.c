#include <stdio.h>

#define MAX 15

int stack[MAX];
int top = -1;

/* Push an element */
void push()
{
    int x;

    if (top == MAX - 1)
    {
        printf("\nStack Overflow!\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &x);

        stack[++top] = x;

        printf("Element pushed successfully.\n");
    }
}

/* Pop an element */
void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!\n");
    }
    else
    {
        printf("\nPopped element: %d\n", stack[top--]);
    }
}

/* Check Palindrome */
void palindrome()
{
    int a[MAX];
    int n, i;
    int flag = 1;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid size! Enter a number between 1 and %d.\n", MAX);
        return;
    }

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Compare elements from both ends */
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("The elements form a Palindrome.\n");
    }
    else
    {
        printf("The elements do not form a Palindrome.\n");
    }
}

/* Display stack */
void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is Empty.\n");
        return;
    }

    printf("\nStack elements (Top to Bottom):\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

/* Main function */
int main()
{
    int choice;

    do
    {
        printf("\n========== STACK MENU ==========\n");
        printf("1. Push an Element\n");
        printf("2. Pop an Element\n");
        printf("3. Check Palindrome\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                palindrome();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
