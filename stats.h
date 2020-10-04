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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief Finds the median value of an array.
 *
 * This function is passed an array and the size of that array. The function
 * returns the median of the values in that array. The median value of a function
 * of size n is the element at the position floor(n/2).
 *
 * @param A The array whose median is to be found.
 * @param size Th size of array A.
 *
 * @return The median of the values in array A.
 */
unsigned char find_median(unsigned char A[], int size);

/**
 * @brief Returns the mean of the values of an array.
 *
 * This function is passed an array and the size of that array. It returns
 * the mean of the values of that array.
 * The mean is the sum of the values in the array divided by the number of
 * elements in that array.
 *
 * @param A The array whose mean is to be found.
 * @param size Th size of array A.
 *
 * @return The floor of the mean of the values in the array.
 */
unsigned char find_mean(unsigned char A[], int size);

/**
 * @brief Returns the maximum of the values of an array.
 *
 * This function is passed an array and the size of that array. It returns
 * the maximum of the values of that array.
 *
 * @param A The array whose maximum is to be found.
 * @param size Th size of array A.
 *
 * @return The maximum of the values in the array.
 */
unsigned char find_maximum(unsigned char A[], int size);

/**
 * @brief Returns the minimum of the values of an array.
 *
 * This function is passed an array and the size of that array. It returns
 * the minimum of the values of that array.
 *
 * @param A The array whose maximum is to be found.
 * @param size Th size of array A.
 *
 * @return The minimum of the values in the array.
 */
unsigned char find_minimum(unsigned char A[], int size);

/**
 * @brief Sorts an array in non-increasing order.
 *
 * This function is passed an array and the size of that array. It sorts the
 * array in non-decreasing order.
 *
 * @param A The array to be sorted.
 * @param size Th size of array A.
 *
 * @return None.
 */
void sort_array(unsigned char A[], int size);

/**
 * @brief Prints the elements of an array separated by spaces.
 *
 * This function is passed an array and the size of that array. It prints the
 * elements of that array on the screen separated by spaces.
 *
 * @param A The array to be sorted.
 * @param size Th size of array A.
 *
 * @return None.
*/
void print_array(unsigned char A[], int size);

/**
 * @brief Prints the statistics of an array; the minimum, maximum, mean, and median.
 *
 * This function is passed an array and the size of that array. It prints the
 * statistics mentioned before for that array.
 *
 * @param A The array to be sorted.
 * @param size Th size of array A.
 *
 * @return None.
*/
void print_statistics(unsigned char A[], int size);

#endif /* __STATS_H__ */
