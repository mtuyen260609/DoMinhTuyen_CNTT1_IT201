#include<stdio.h>
#include<string.h>
int check(char str[], int l , int r){
    if (l >= r ) {
        return 1;
    }
    if (str[l] != str[r]) {
        return 0;
    }
    return check(str, l+1, r-1);
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int i=0 ;
    int len = strlen(input);
    if(check(input, 0, len-1)) {
    printf("Palindrome valid\n");
    }else{
    printf("palindrome invalid\n");
    }
return 0;
}