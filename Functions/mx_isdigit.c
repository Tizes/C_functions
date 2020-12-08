#include <stdbool.h>
// #include <stdio.h>

bool mx_isdigit(int c) {
    if (c >= 48 && c<= 57)      //if c>=0 and c<=0 following ASCII DEC.
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// int main() {
//     mx_isdigit('7');
//     return 0;
// }
