//
// Created by puzankova 02.06.18
//
#include "bitMap.h"

const unsigned INT_SIZE = sizeof(int)*8;

void setBitByNumber(int* array, int bit, int position)
{
	unsigned element = position / INT_SIZE;
	unsigned bit_index = position % INT_SIZE;

	if(bit) {
	    array[element] |= (1u << bit_index);
	} else {
	    array[element] &= ~(1u << bit_index);
	}
}

int getBitByNumber(int* array, int position)
{
    unsigned element = position / INT_SIZE;
    unsigned bit_index = position % INT_SIZE;
    return (array[element] & (1u << bit_index)) ? 1 : 0;
}

void setBitByAddress(void* position, int bit)
{
    unsigned* pos = position;
    if(bit) {
        pos[0] |= 1u;
    } else {
        pos[0] &= 1u;
    }
}

int getBitByAddress(void* position)
{
    unsigned* pos = position;
    return (pos[0] & 1u) ? 1 : 0;
}