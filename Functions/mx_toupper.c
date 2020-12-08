#include <stdio.h>

int mx_toupper(int c) {
    if (c >= 97 && c <= 122) {
       return c - 32; 
    }
    else {
       return c; 
    }
}

// int main() {
//     mx_tolower('B');
//     printf("%c", mx_toupper('4'));

//     return 0;
// }
