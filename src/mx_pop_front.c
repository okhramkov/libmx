#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *del_front = NULL;//створюємо НУЛЛ вказівник

    if (head == NULL || *head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        del_front = (*head)->next;//присвоюємо вказівнику початок нашого листа
        free(*head);//зачищаємо цей перший елемент листа
        *head = del_front;//присвоюємо цьому першому елементу НУЛЛ
    }
}
