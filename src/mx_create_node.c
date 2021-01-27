#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *head = NULL;//створюємо поінтер на лист

    if(!data)
        return NULL;
    else {
        head = (t_list *) malloc(sizeof(t_list));//виділяємо память під поінтер
                                                 //на лист
        head->data = data;//заносимо в змінну листа дані через наш поінтер
        head->next = NULL;//-ІІ- для іншої змінної яка слугує повнтером на лист
                          //в середині самого листа
        return head;
    }
}
