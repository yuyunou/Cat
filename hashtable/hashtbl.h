#ifndef _HASHTBL_H
#define _HASHTBL_H
#define MAX_CNT (1000)

typedef int (*HASH_FUN)(int key);

typedef struct _HASH_ELEMENT_T
{
    int key;
    int val;
}HASH_ELEMENT_T;

typedef struct _HASHTBL_T
{
    HASH_ELEMENT_T hash_tbl[MAX_CNT];
    HASH_FUN hashfun;
}HASHTBL_T;































#endif
















