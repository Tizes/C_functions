#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
    int temp = 0;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

// int main()
// {
//     char str[] = "ONE";
//     mx_swap_char(&str[2], &str[0]);
//     printf("%s", str);   
//     // return 0;
// }
