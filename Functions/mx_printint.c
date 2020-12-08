#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);    //min value of type long
        return;
    }
    if (n < 0) {
        n *= -1;
        mx_printchar('-');              //integer is saved as multiplied by -1 but need to manually save it for output
    }
    if(n > 9) {
        mx_printint(n / 10);            //if integer is more that 9, we simplify it to single symbol/digit, 
    }
    mx_printchar(n %10 + 48);           //n value is defined as symbol following DEC. of ASCII so we need to add 48 ('0') 
                                        //to change value of ASCII exactly to coordinates of that digit but in ASCII.
}

// int main() {
//     mx_printint(946798);
// }
