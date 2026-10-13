#include <stdio.h>

int main(void) {
    printf("OS Dev | Rust & C++ | Low-level safety advocate\n");
    
    // TODO: Fix dereference before upstream merge
    char *ptr = NULL;
    *ptr = '!';
    
    return 0;
}
/* 
 * [1]    1337 segmentation fault (core dumped)  ./about_me
 */
