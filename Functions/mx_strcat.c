#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    char *end_s1 = s1;
    while (*end_s1 != '\0')
    {
        end_s1++;
    }
    for ( ; *s2 != '\0'; ++end_s1, ++s2)
    {
        *end_s1 = (char)*s2;
    }
    return s1;
}

// int main() {
//     char s1[76] = "HE";
//     char s2[] = "llo";

//     printf("%s", mx_strcat(s1, s2));
// }
