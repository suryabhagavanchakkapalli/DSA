#include <stdio.h>
#include <string.h>

int find_first_non_repeating_char(char *str){
    char *ptr = str;
    int count[256] = {0};
    int i = 0;
    while(*ptr != '\0'){
        count[(unsigned char)*ptr]++;
        ptr++;
    }
    ptr = str;
    while(*ptr != '\0'){
        if(count[(unsigned char)*ptr] == 1){
            return *ptr;
        }
        ptr++;
    }
    return -1;
}

int main(){
    char str[25];
    fgets(str, 25, stdin);
    str[strcspn(str, "\n")] = '\0';
    int result = find_first_non_repeating_char(str);
    if(result != -1){
        printf("First non-repeating character is: %c\n", result);
    }else{
        printf("No non-repeating character found.\n");
    }
    return 0;
}