#include <stdio.h>
#include <stdlib.h>

void *malloc(size_t size)
{
	void *block;
	block = sbrk(size);
	if (block == (void*) -1)
		return NULL;
	return block;
}

int main(){
  return 0;
}