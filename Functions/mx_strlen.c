#include <stdio.h>

int mx_strlen(const char *s) {
    int i;
    i = 0;
    if (s == NULL)      //char is checked on NULL
        return i;
    while (s[i] != '\0')
        i++;
    return i;
}

// int main() {
//     const char *s = "Hiiiiiii";
//     printf("%d", mx_strlen(s));
// }
