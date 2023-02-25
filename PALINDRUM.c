#include <stdio.h>
#include <string.h>

int main() {
    char str[100];//string ta k character ar bhetor a nia niache
    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);
    int i, begin, end, middle;
    begin = 0;
    end = length - 1;
    middle = (begin + end)/2;

    for (i = begin; i <= middle; i++) {
        if (str[begin] == str[end]) {
            begin++;
            end--;
        }
        else {
            printf("%s is Not a Palindrome\n", str);
            break;
        }
    }
    if (i == middle + 1) {
        printf("%s is a Palindrome\n", str);
    }
    return 0;
}

