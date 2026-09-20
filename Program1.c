#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int id;
    char title[50], author[50];
    float price;
    char status[10];
};

struct Book *addBooks(struct Book *b, int *currentCount, int newCount)
{
    int totalCount = *currentCount + newCount;

    // Expand the allocated memory block to hold the new total
    struct Book *temp = realloc(b, totalCount * sizeof(struct Book));

    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return b;
    }

    b = temp;

    // Populate only the newly added indices
    for (int i = *currentCount; i < totalCount; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);

        strcpy(b[i].status, "Available");
    }

    // Update the total count
    *currentCount = totalCount;

    return b;
}

void display(struct Book *b, int n)
{
    printf("\n--- Available Books ---\n");

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(b[i].status, "Available") == 0)
        {
            printf("\nID: %d\n", b[i].id);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            printf("Status: %s\n", b[i].status);

            found = 1;
        }
    }

    if (!found)
    {
        printf("No available books found.\n");
    }
}

void search(struct Book *b, int n)
{
    int id;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            printf("\nID: %d\n", b[i].id);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            printf("Status: %s\n", b[i].status);

            return;
        }
    }

    printf("Book not found.\n");
}

void issueBook(struct Book *b, int n)
{
    int id;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            if (strcmp(b[i].status, "Available") == 0)
            {
                strcpy(b[i].status, "Issued");
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }

            return;
        }
    }

    printf("Book not found.\n");
}

void returnBook(struct Book *b, int n)
{
    int id;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            if (strcmp(b[i].status, "Issued") == 0)
            {
                strcpy(b[i].status, "Available");
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book is already available.\n");
            }

            return;
        }
    }

    printf("Book not found.\n");
}

int main()
{
    struct Book *b = NULL;

    int n = 0;
    int newBooks = 0;
    int ch;

    do
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Add Book Records\n");
        printf("2. Display Available Book Records\n");
        printf("3. Search Book by Book ID\n");
        printf("4. Issue a Book\n");
        printf("5. Return a Book\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter number of books to add: ");
                scanf("%d", &newBooks);

                if (newBooks > 0)
                {
                    b = addBooks(b, &n, newBooks);
                }
                else
                {
                    printf("Invalid number of books.\n");
                }

                break;

            case 2:
                if (b != NULL && n > 0)
                {
                    display(b, n);
                }
                else
                {
                    printf("Add books first.\n");
                }

                break;

            case 3:
                if (b != NULL && n > 0)
                {
                    search(b, n);
                }
                else
                {
                    printf("Add books first.\n");
                }

                break;

            case 4:
                if (b != NULL && n > 0)
                {
                    issueBook(b, n);
                }
                else
                {
                    printf("Add books first.\n");
                }

                break;

            case 5:
                if (b != NULL && n > 0)
                {
                    returnBook(b, n);
                }
                else
                {
                    printf("Add books first.\n");
                }

                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (ch != 6);

    free(b);

    return 0;
}