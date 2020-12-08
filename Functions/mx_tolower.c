// #include <stdio.h>

int mx_tolower(int c) {
    if (c >= 65 && c <= 90) {
       return c + 32; 
    }
    else {
       return c; 
    }
    
}

// int main() {
//     mx_tolower('B');
//     printf("%c", mx_tolower('7'));

//     return 0;
// }
