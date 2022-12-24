#ifndef UTIL_H
#define UTIL_H
#define ARRAY_SIZE 10
//Zhyldyz Zhumabekova
//G9PZT9
typedef struct ParityArray{
 int* arr;
 int even_idx;
 int odd_idx;
}ParityArray;

void init (ParityArray* par, int arr_size);
void insert (ParityArray* par, int n);
void print(ParityArray* par,int arr_size);
void dump(ParityArray* par, char* filename,int arr_size);
void destruct(ParityArray* par);

#endif