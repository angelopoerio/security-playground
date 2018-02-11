/*
	A simple uber exploitable program.
	How to test:
	1) Disable ALSR: echo "0" > /proc/sys/kernel/randomize_va_space 
	2) Compile with executable stack and stack smashing off: cc basic.c -o basic -zexecstack -fno-stack-protector -g
*/

#include <string.h>

void vuln() {
	char buf[80];
	read(0,buf,400);
}

int main(int argc, char **argv) {
    char buf[20];
    vuln();
}
