#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    // 尝试访问空指针指向的内存，这会引发段错误
    *ptr = 10;  
	
    printf("Hello!World!\n");

    printf("123\n");

    printf("大家好\n");

    return 0;
}
