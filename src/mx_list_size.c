#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *new = NULL;
    int count = 0;

    if (list == NULL)
        return count;
    else {
        new = list;
        while (new != NULL) {
            new = new->next;
            count++;
        }
    }
    return count;
}

// int main() {
//     t_list *t = mx_create_node("lol\n");
//     mx_push_back(&t, "ku epta\n");
//     mx_push_back(&t, "ku epta1\n");
//     mx_push_back(&t, "ku epta2\n");
//     mx_push_back(&t, "ku epta3\n");
//     mx_push_back(&t, "ku epta4\n");
//     mx_push_back(&t, "ku epta5\n");
//     int i = 0;
//     //mx_pop_back(&t);
//     printf("%i\n",mx_list_size(t));
//     while ( t->next) {
//         printf("DATA IS: %s", t->data);
//         t = t->next;
//         i++;
//     }
// }
