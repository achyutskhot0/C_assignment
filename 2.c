#include <stdio.h>

int length(char s[40]);

void main(){
    char str[40];
    char *s[40] = &str;
    printf("Enter a string\n");
    scanf("%s", str);
    int len = length (s);
    printf("The length of the given strong is %d", len);
    
}
length(char s[40]){
    int length= 0;
    for(int i= 0; &s[i]!= '\0'; i++){
        length++;
    }
    return length;
}