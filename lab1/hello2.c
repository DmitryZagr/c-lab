#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"

#define MAX_LENGHT 256

void hello_message();
void input_name(char* name);
void print_name(const char* name);

int main(int argc, char * argv[])
{
 
    char* name = (char*)malloc(sizeof(char) * MAX_LENGHT);
    memset(name, 0, sizeof(char) * MAX_LENGHT);
    
    hello_message();
    
    input_name(name);
    
    print_name(name);
    
    free(name);
    
    return 0;
}

void hello_message() {
    printf("Введите ваше имя: ");
}

void input_name(char* name) {
    if(name != NULL) {
        scanf("%s", name);
        *name = toupper(*name);
    }
}

void print_name(const char* name) {
    printf("Hello, %s!\n", name);
}
