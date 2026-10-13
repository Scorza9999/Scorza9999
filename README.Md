`#include <stdio.h>`

```int main(void) {`
`/*`
* # Hi :3
* 
* I'm a dev interested in OS, and in C++ and Rust (with a bit of C on the side). Low level software must be safe.
* 
* ### Open Source and Kernel work
* * **Linux Kernel Contributions:** I contributed to the Linux Kernel. Check my patch history and write-ups in my [pinned repo](https://github.com/Scorza9999/linux-kernel-contributions)
* * **Coyote (FPGA OS):** Contributed to the Coyote framework, an OS shell that facilitates the deployment of FPGAs in the cloud. [Check it out](https://github.com/fpgasystems/Coyote/commits?author=Scorza9999)
*/
    printf("OS Dev | Rust & C++ | Low-level safety advocate\n");
    
    // TODO: Fix dereference before upstream merge
    char *ptr = NULL;
    *ptr = '!';
    
    return 0;
}
/* 
 * [1]    1337 segmentation fault (core dumped)  ./about_me
 */```
