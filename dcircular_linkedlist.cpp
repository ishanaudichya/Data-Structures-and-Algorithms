#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void travf(struct node *list)
{
    printf("List->");
    while (list != 0)
    {
        if (list->next == NULL)
        {
            printf("%d", list->data);
            list = list->next;
        }
        else
        {
            printf("%d ", list->data);
            list = list->next;
        }
    }
    printf("->List\n");
}
void travb(struct node *list)
{
    printf("List->");
    while (list->next != NULL)
    {
        list = list->next;
    }
    while (list != 0)
    {
        if (list->prev == NULL)
        {
            printf("%d", list->data);
            list = list->prev;
        }
        else
        {
            printf("%d ", list->data);
            list = list->prev;
        }
    }
    printf("->List\n");
}
int main()
{
    struct node *List, *ele, *p;
    int n;
    scanf("%d", &n);
    List = NULL;
    for (int i = 0; i < n; i++)
    {
        ele = malloc(sizeof(struct node));
        scanf("%d", &ele->data);
        ele->next = NULL;
        if (List == NULL)
        {
            ele->prev = NULL;
            List = ele;
        }
        else
        {
            p->next = ele;
            ele->prev = p;
        }
        p = ele;
    }

    printf("Forward\n");
    travf(List);
    printf("Backward\n");
    travb(List);

    return 0;
}
