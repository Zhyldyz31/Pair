#include "util.h"
#include <stdio.h>
#include <stdlib.h>

//Zhyldyz Zhumabekova
//G9PZT9

void init(ParityArray* par,int arr_size){
    size_t i;
    par->arr=(int*)malloc(arr_size*sizeof(int));
    for(i=0;i<arr_size;i++){
        par->arr[i]=0; //I wanted to fill array with NULL, so that I can insert 0 as well , but had warning , that's why i initialised elements with 0
    }
    par->even_idx=0;
    par->odd_idx=arr_size-1;
}

void insert (ParityArray* par, int n){
    if(n%2==0){
        par->arr[par->even_idx]=n; 
        par->even_idx++;
    }
    else {
        par->arr[par->odd_idx]=n;  
        par->odd_idx--;
    }
}

void print(ParityArray* par, int arr_size) {
    size_t i;
    for(i=0;i<arr_size;i++){
        if (par->arr[i]!=0){  
            printf("%d\n",par->arr[i]);
        }
    }
}

void dump(ParityArray* par, char* filename,int arr_size){
    FILE* file;
    file =fopen(filename,"w");
    size_t i;
    for(i=0;i<arr_size;i++){
        fprintf(file,"%d\n",par->arr[i]);
    }
    fclose(file);
}


void destruct(ParityArray* par){
    if(par->arr!=NULL) free(par->arr);
}