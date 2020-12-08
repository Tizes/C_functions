#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    write(1, "$@", mx_strlen(s));
}

// int main(){
//     mx_printstr("sifdgfjbe");
// }
