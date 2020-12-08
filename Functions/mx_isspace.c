#include <stdbool.h>
// #include <stdio.h>

bool mx_isspace(char c) {
    if (c >= 9 && c<= 13)       // if c >= TAB and c <= Enter
    {
        return 1;
    }
    else if (c == 32)           // if c == Space
    {
        return 1;
    }
    else
    {
      return 0;  
    }
}

// int main() {
//     mx_isspace(' ');
//     return 0;
// }
