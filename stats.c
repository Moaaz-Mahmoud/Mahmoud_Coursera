/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Moaaz Mahmoud
 * @date 4/10/2020 (DD/MM/YYYY)
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int comparator (const void * p1, const void * p2)   //For qsort.
{
  return (*(unsigned char*)p2 - *(unsigned char*)p1);
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  unsigned char A[] = {1, 2, 3, 4, 5};
  sort_array(A, 5);
  for(int i = 0; i < 5; i++)
    printf("%d ", A[i]);
}

/* Add other Implementation File Code Here */
unsigned char find_median(unsigned char A[], int size){
	return A[size/2];
}
unsigned char find_mean(unsigned char A[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++)
        sum += A[i];
    return (unsigned char)(sum/size);   //Calculate, cast, return.
}
unsigned char find_maximum(unsigned char A[], int size){
	unsigned char max = A[0];
	for(int i = 1; i < size; i++)
        if(A[i] > max) max = A[i];
    return max;
}
unsigned char find_minimum(unsigned char A[], int size){
	unsigned char min = A[0];
	for(int i = 1; i < size; i++)
        if(A[i] < min) min = A[i];
    return min;
}
void sort_array(unsigned char A[], int size){
    qsort(A, size, sizeof(unsigned char), comparator);

}
void print_array(unsigned char A[], int size){
    for(int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void print_statistics(unsigned char A[], int size){
    sort_array(A, size);
    printf("Minimum: %d\n", A[size-1]);
    printf("Maximum: %d\n", A[0]);
    printf("Median:  %d\n", find_median(A, size));
    printf("Mean:    %d\n", find_mean(A, size));
}
