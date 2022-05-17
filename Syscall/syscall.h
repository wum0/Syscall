#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma check_stack(off)

#define PHNT_VERSION PHNT_WIN11
#include "phnt/phnt_windows.h"
#include "phnt/phnt.h"

// this is taken straight from sektor7 RTO-MDE , nice lil xor routine
void XOR(char* data, size_t data_len, char* key, size_t key_len) {
	int j;
	j = 0;
	// for the bytes in the data
	for (int i = 0; i < data_len; i++)
	{
		// Iterate over every character in the key 
		// and "encrypt" XOR a byte with that "key" character
		if (j == key_len - 1) j = 0;
		// xor the data at the iteration index with the key index e.g. data[1] ^ data[1] until key len is reached and 
		// will be repeated
		data[i] = data[i] ^ key[j];
		j++;
	}
}

#define BUFFER_SIZE        4096

// taken straight from https://aticleworld.com/memmove-function-implementation-in-c/
void* my_memmove(void* dest, const void* src, unsigned int n)
{
	char* pDest = (char*)dest;
	const char* pSrc = (const char*)src;
	////allocate memory for tmp array
	//char* tmp = (char*)malloc(sizeof(char) * n);

	char* tmp[BUFFER_SIZE];

	if (NULL == tmp)
	{
		return NULL;
	}
	else
	{
		unsigned int i = 0;
		// copy src to tmp array
		for (i = 0; i < n; ++i)
		{
			*(tmp + i) = *(pSrc + i);
		}
		//copy tmp to dest
		for (i = 0; i < n; ++i)
		{
			*(pDest + i) = *(tmp + i);
		}

		//free(tmp); //free allocated memory
		// not going to free lol
	}
	return dest;
}
