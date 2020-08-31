#include <stdio.h>
#include <stdlib.h> 
//Referencias de cálculo 
// de http://www2.cs.uregina.ca/~hamilton/courses/330/notes/memory/paging.html

int main(int argc, char** argv){
	
	char * p;
	unsigned long ps=4096;
	unsigned int vdir = 32;
	unsigned int offset_b = 12;
	unsigned long ass4 = strtoul(argv[1],&p,10);
	unsigned long p_num = ass4>>offset_b;	
	unsigned long offset = ass4 % ps;

	printf("\nLa dirección %lu contiene:\nNúmero de página = %lu \nOffset = %lu\n",ass4,p_num,offset);
	
	return 0;
}
