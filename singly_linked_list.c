#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char* text;
    struct Node *next;
};


struct Node* init(char* text)
{
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->text = text;
    root->next = NULL;
    return root;
}

void add(struct Node* root, char* text)
{
    if (!root) 
    {
        printf("You have deleted or non-created list!Create and try again.\n"); 
        return;
    }
    struct Node* i = root;
    struct Node* last = init(text);
    while (i->next != NULL)
    {
        i = i->next;
    }
    i->next = last;
}

void pop(struct Node* root)
{
    if (!root) 
    {
        printf("You have deleted or non-created list!Create and try again.\n"); 
        return;
    }
    struct Node* i = root;
    while (i->next != NULL)
    {
        root = i;
        i = i->next;
    }
    free(i->text);
    free(i);
    root->next = NULL;
}

void show(struct Node* root)
{
    if (!root) 
    {
        printf("You have deleted or non-created list!Create and try again.\n"); 
        return;
    }
    struct Node* i = root;
    while (i != NULL)
    {
        printf("%s\n", i->text);
        i = i->next;
    }
}

void delete(struct Node** root)
{
    if (!*root) 
    {
        printf("You have deleted or non-created list!Create and try again.\n"); 
        return;
    }
    struct Node* i = *root;
    for (; i!= NULL; )
    {
        free(i->text);
        struct Node* temp = i->next;
        free(i);
        i = temp;
    }
    *root = NULL;
}

int get(struct Node* root, char* text)
{
    if (!root) 
    {
        printf("You have deleted or non-created list!Create and try again.\n"); 
        return -2;
    }
    struct Node* i = root;
    int index = 0;
    while (i != NULL)
    {
        if (strcmp(i->text, text) == 0)
        {
          return index;
        }
        i = i->next;
        index++;
    }
    printf("There is no match with your element with elements in the list!\n");
    return -1;
}


int main()
{
    printf("Here are commands which will help you to create singly-linked list: \n");
    printf("1. INIT (Create list)\n");
    printf("2. ADD (Add element to the end of list)\n");
    printf("3. POP (Delete element at the end of list)\n");
    printf("4. GET (Get element's index, if it is in the list)\n");
    printf("5. SHOW (Show list)\n");
    printf("6. DELETE (Delete list (Clean memory))\n");
    printf("7. EXIT\n");
    char command[255];
    scanf("%s", command);
    struct Node* node;
    while (strcmp(command, "EXIT") != 0)
    {
        if (strcmp(command, "INIT") == 0)
        {
            char* list = (char*)malloc(sizeof(char)*255);
            printf("The name of first element: ");
            scanf("%s", list);
            node = init(list);
        } 
        else if (strcmp(command, "ADD") == 0)
        {
            char* element = (char*)malloc(sizeof(char)*255);
            printf("Enter the name of the element: ");
            scanf("%s", element);
            add(node, element);
        }
        else if (strcmp(command, "POP") == 0)
        {
            pop(node);
        }
        else if (strcmp(command, "GET") == 0)
        {
            char element[255];
            printf("Enter the name of the element: ");
            scanf("%s", element);
            printf("%d\n", get(node, element));
        }
        else if (strcmp(command, "SHOW") == 0)
        {
            show(node);
        }
        else if (strcmp(command, "DELETE") == 0)
        {
            delete(&node);
        }
        else if (strcmp(command, "EXIT") == 0)
        {
            return 0;
        }
        else 
        {
            printf("1. INIT (Create list)\n");
            printf("2. ADD (Add element to the end of list)\n");
            printf("3. POP (Delete element at the end of list)\n");
            printf("4. GET (Get element's index, if it is in the list)\n");
            printf("5. SHOW (Show list)\n");
            printf("6. DELETE (Delete list (Clean memory))\n");
            printf("7. EXIT\n");
        }
        printf("Enter the command:\n");
        scanf("%s", command);
    }
    return 0;
}