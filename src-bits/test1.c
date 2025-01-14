#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
int main() {
// 1. Block SIGINT
sigset_t old_mask, to_block;
sigemptyset(&to_block);
sigaddset(&to_block, SIGINT);
sigprocmask(SIG_BLOCK, &to_block, &old_mask);

// 2. Close the file and reset fd
printf("hello");

// 3. Restore signal handling
sigprocmask(SIG_SETMASK, &old_mask, NULL);
    return 0;
}
