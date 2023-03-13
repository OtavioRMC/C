/*
	Text Section: The part that contains the binary instructions to be executed by the processor.
	Data Section: Contains non-zero initialized static data.
	BSS(Block Started By Symbol): Contains Zero-Initialized static data.
	Heap : Contains the dynamically allocated data.
	Stack : Contains automatic variables, functions arguments, copy of base pointer.
	
	
	Brk: Pointer named program break or brk.
	sbrk(): System call that lets us manipulate brk.
	sbrk(0): Gives the current address of brk.
	sbrk(x): Increments brk by X bytes.
	sbrk(-x): Decrements brk by x bytes, as a result allocating memory.

	Simple Malloc:

	void* malloc(size_t size){

		void *block
		block = sbrk(size);
		if(block == (void*)-1)
			return NULL;
		return block;

		Freeing Memory
		The free(pointer) function frees the memory block pointed to by ptr, which must have been returned by
		previous call to malloc,realloc, calloc.
		- Size of mem block.
		- Store that size.

	}
	 totalSize = headerSize + size;
	-> Call Sbrk(totalSize);

	Memory Blocks
	[HEADER][ACTUAL MEM BLOCK]
	Can't be completely sure the blocks of memory allocated
	by malloc is contiguous.

*/


#include <stdio.h>
#include <stdlib.h>

// MEM LINKED LIST
// size = size of bytes of a mem block
// isFree = stores if block is free or not
// *next points to next mem block.
struct header_t
{
	size_t size;
	unsigned isFree;
	struct header_t *next;
};
