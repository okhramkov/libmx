#include "libmx.h"

static int smth(char **arr, char const *s, char c) {
    int j = 0;
    int key = 0;
    int lengt_of_word = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] != c && lengt_of_word++ == 0)
            key = i;
        if(lengt_of_word > 0 && (s[i + 1] == c || s[i + 1] == 0)) {
            arr[j] = mx_strnew(lengt_of_word);
            arr[j] = mx_strncpy(arr[j], &s[key],lengt_of_word);
            lengt_of_word = 0;
            j++;
        }
    }
    return j;
}

char **mx_strsplit(char const *s, char c) {
    char **arr;
    int amm_words;
    int j = 0;

    if(!s)
        return NULL;
    amm_words = mx_count_words(s, c);
    arr = malloc(sizeof(char *) * amm_words + 1);
    j = smth(arr, s, c);
    arr[j] = NULL;
    return arr;
}
