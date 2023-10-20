#include <stdio.h>
#include <ctype.h>

int main() {
    // char x;
    // scanf("%c", &x);

    // if (islower(x)) {
    //     x = toupper(x);
    //     printf("%c\n", x);
    // } else if (isupper(x)) {
    //     x = tolower(x);
    //     printf("%c\n", x);
    // }


    char a;
    scanf("%c",&a);
   if(a>='a' || a<='z'){
     a = a-32;
     printf("%c" , a);
   }else {
        a= a+32;
        printf("%c", a);
   }

    return 0;
}
