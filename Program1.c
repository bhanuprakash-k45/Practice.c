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

struct Book *create(int n)
{
    struct Book *b = malloc(n * sizeof(struct Book));
    int i;

    for(i = 0; i < n; i++)
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
    return b;
}

void display(struct Book *b, int n)
{
    int i;

    printf("\n--- Available Books ---\n");

    for(i = 0; i < n; i++)
        if(strcmp(b[i].status, "Available") == 0)
            printf("\nID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\nStatus: %s\n",
                   b[i].id, b[i].title, b[i].author,
                   b[i].price, b[i].status);
}

void search(struct Book *b, int n)
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
        if(b[i].id == id)
        {
            printf("\nID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\nStatus: %s\n",
                   b[i].id, b[i].title, b[i].author,
                   b[i].price, b[i].status);
            return;
        }

    printf("Book not found.\n");
}

void issueBook(struct Book *b, int n)
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
        if(b[i].id == id)
        {
            if(strcmp(b[i].status, "Available") == 0)
            {
                strcpy(b[i].status, "Issued");
                printf("Book issued successfully.\n");
            }
            else
                printf("Book is already issued.\n");
            return;
        }

    printf("Book not found.\n");
}

void returnBook(struct Book *b, int n)
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
        if(b[i].id == id)
        {
            if(strcmp(b[i].status, "Issued") == 0)
            {
                strcpy(b[i].status, "Available");
                printf("Book returned successfully.\n");
            }
            else
                printf("Book is already available.\n");
            return;
        }

    printf("Book not found.\n");
}

int main()
{
    struct Book *b = NULL;
    int n = 0, ch;

    do
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Add Book Records\n");
        printf("2. Display All Book Records\n");
        printf("3. Search Book by Book ID\n");
        printf("4. Issue a Book\n");
        printf("5. Return a Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter number of books: ");
                scanf("%d", &n);

                if(b != NULL)
                    free(b);

                b = create(n);
                break;

            case 2:
                if(b != NULL)
                    display(b, n);
                else
                    printf("Add books first.\n");
                break;

            case 3:
                if(b != NULL)
                    search(b, n);
                else
                    printf("Add books first.\n");
                break;

            case 4:
                if(b != NULL)
                    issueBook(b, n);
                else
                    printf("Add books first.\n");
                break;

            case 5:
                if(b != NULL)
                    returnBook(b, n);
                else
                    printf("Add books first.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(ch != 6);

    free(b);
    return 0;
}
