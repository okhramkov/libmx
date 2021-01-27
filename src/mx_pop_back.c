#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *temp = NULL;

    if (head == NULL || *head == NULL)
        return;
    if((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        temp = *head;
        for (; temp->next->next; temp = temp->next);
        free(temp->next);
        temp->next = NULL;
    }
    //temp->next = del_element;
}
