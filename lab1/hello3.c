#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"
#include "locale.h"
#include "wchar.h"
#include "wctype.h"


#define MAX_LENGHT 256

void hello_message();
void input_name(wchar_t* name);
void print_name(const wchar_t* name);

int main(int argc, char * argv[])
{
    setlocale(LC_ALL, "ru_RU.utf8");
    
    wchar_t* name = (wchar_t*)malloc(sizeof(wchar_t) * MAX_LENGHT);
    memset(name, 0, sizeof(wchar_t) * MAX_LENGHT);
    
    hello_message();
    
    input_name(name);
    
    print_name(name);
    
    free(name);
    
    return 0;
}

void hello_message() {
    printf("Введите ваше имя: ");
}

void input_name(wchar_t* name) {
    if(name != NULL) {
        scanf("%ls", name);
        *name = towupper(*name);
    }
}

void print_name(const wchar_t* name) {
    printf("Hello, %ls!\n", name);
}
