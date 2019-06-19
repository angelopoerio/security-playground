/* Compile: gcc -fno-stack-protector ret2libc.c -o ret2libc      */
/* Disable ASLR: echo 0 > /proc/sys/kernel/randomize_va_space     */

#include <stdio.h>
#include <unistd.h>

int vuln() {
    char buf[80];
    int r;
    r = read(0, buf, 400);
    printf("\nRead %d bytes. buf is %s\n", r, buf);
    return 0;
}

int main(int argc, char *argv[]) {
    vuln();
    return 0;
}

