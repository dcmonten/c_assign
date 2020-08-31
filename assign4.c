#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char** argv){
	
	char * p;
	unsigned long ass4 = strtoul(argv[1],&p,10);
	
	printf("N = %lu\n",ass4);
	
	return 0;
}
