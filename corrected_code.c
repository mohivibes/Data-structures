#include <stdio.h>
#define MAX 10

int list[MAX];
int size = 0;

/* Create List */
void create()
{
    size = 0;
}

/* Insert element at position */
void insert(int pos, int element)
{
    int i;

    if(size == MAX)
    {
        printf("List is Full\n");
        return;
    }

    if(pos < 0 || pos > size)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = size; i > pos; i--)
    {
        list[i] = list[i-1];
    }

    list[pos] = element;
    size++;
}

/* Delete element at position */
void deleteElement(int pos)
{
    int i;

    if(size == 0)
    {
        printf("List is Empty\n");
        return;
    }

    if(pos < 0 || pos >= size)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = pos; i < size-1; i++)
    {
        list[i] = list[i+1];
    }

    size--;
}

/* Search element */
int search(int element)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(list[i] == element)
        {
            return i;
        }
    }

    return -1;
}

/* Display list */
void display()
{
    int i;

    if(size == 0)
    {
        printf("List is Empty\n");
        return;
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

/* Main Function */
int main()
{
    int pos, element, choice, result;

    create();

    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter position and element: ");
                scanf("%d %d", &pos, &element);
                insert(pos, element);
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteElement(pos);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                result = search(element);

                if(result == -1)
                    printf("Element not found\n");
                else
                    printf("Element found at position %d\n", result);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}