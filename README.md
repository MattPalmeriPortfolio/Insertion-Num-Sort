# Insertion-Num-Sort
Book practice project from Problem Solving With C++ Chapter 7. Project 6.

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Insertion_Sort.cpp (program file containing code)
  numlist.txt        (text file containing example number list to be sorted)

## Introduction
Book practice project from Problem Solving With C++ Chapter 7. Project 6.
This program sorts an array using the proposed "insertion sort" method. Demonstrates ability to read input from a file, use multiple functions, and to use the "insertion sort" algorithm in c++.
Written using Microsoft Visual Studio. 

## Algorithm

	1. Receive input values for unsorted array
		1a. book does not specify method of input or size, so i will do a file input array of size 20.
	2. Create a sorted second array from the values in the first unsorted array, using insertion sort.
		2a. First, take the first value of the unsorted array and place it in the sorted array.
		2b. After, take the next value of the unsorted array and place it in the sorted array.
		2c. Check if the new value is less than the previous value; if so swap. continue checking until this is untrue.
		2d. Repeat steps 2b and 2c until you have reached the end of the array.
	3. Output the sorted array
		3a. book does not specify method, so will be to screen along with unsorted array.

## Requirements
No requirements or modules needed for running this program.
