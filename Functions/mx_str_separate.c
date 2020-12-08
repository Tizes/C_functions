#include <unistd.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int flag =0;
    while(*str != '\0') {
        if(*str != delim) {
            mx_printchar(*str);
            flag = 0;
        }

        else{
            if (flag == 0)
            mx_printchar('\n');

            flag = 1;
        }
    str++;
    }
}

//int main() {
//    mx_str_separate("MMatMrix", 'M');
//}
