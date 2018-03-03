/*
	A simple uber exploitable program.
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
