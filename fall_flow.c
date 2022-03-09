#include "../includes/cluster.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void fall_flow (int q, int r, int color)
{
    t_axial hex_pos;
	hex_pos.q = q;
	hex_pos.r = r;
	int hash_index = hash(hext_pos);
	while (hash_array[hash_index] == NULL)
	{
		insert(hex_pos, color);
		if (hex_pos.q - hex_pos.r == r)
		{//check the last position available on the map
			hash_array[hash_index] = 1;
			return ;
		}
		hex_pos.r++;
		hash_index = hash(hext_pos);
		if (hash_array[hash_index] == NULL)
			delite(hex_pos);
	}
	hex_pos.r--;
	hash_arrai[hash(hext_pos)] = 1;
}
