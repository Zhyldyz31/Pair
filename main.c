#include <stdio.h>
#include "util.h"
#include <string.h>
#include <stdlib.h>

//Zhyldyz Zhumabekova
//G9PZT9 

int main(){
   ParityArray par;
   int i;
   int arr_size,temp;
   printf("Please enter the size of array: ");
   scanf("%d",&arr_size);
   init(&par,arr_size);
   for(i=0;i<arr_size;i++){
     printf("Insert %d element (not 0): ",i+1);
     scanf("%d",&temp);
     insert(&par,temp);
   }
   print(&par,arr_size);
   char filename[]="file.txt";
   dump(&par,filename,arr_size);
   destruct(&par);
}