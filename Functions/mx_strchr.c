#include <stdio.h>

char *mx_strchr(const char *s, int c){
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c) {
            return (char *)&s[i];
        }
    }
    return 0;

    // while (*s != '\0'+1)
    // {
    //     if (*s == c) {
    //         return &c;
    //     }
        
    //     *s++;
    // }
    
}

// int main() {
//     char *arr = "Hello";
//     printf("%c", *mx_strchr(arr, 'o'));
// }


/*





*/
