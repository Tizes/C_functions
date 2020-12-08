// #include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c) {
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {       //check if value of c is in alphabet following ASCII
        return true; 
    }
    else                        // if value of c not in alphabet, return false
    {
        return false;
    }
}

// int main() {
//     mx_isalpha('C');
//     printf("%d", mx_isalpha('5'));  
// }
