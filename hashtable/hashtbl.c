#include "hashtbl.h"
#include <stdio.h>

int hash_fun(int key)
{
    return key % 100;
}

void hashtbl_init(HASHTBL_T *p_hashtbl, int *num, int nums)
{
    int i = 0;
    int index = 0;
    p_hashtbl =  malloc;
    hashtbl.hashfun = hash_fun;

    if (nums > MAX_CNT)
    {
        return;
    }

    for (i = 0; i < nums; i++)
    {
        index = hashtbl.hashfun(num[i]);
        hashtbl.hash_tbl[index].val = num[i];
        hashtbl.hash_tbl[index].key = num[i];
        hashtbl.hash_tbl[index].stat = 1;
    }
    
}
















