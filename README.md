# QuickSort

Hongyu Chen

200362471

CS 340 - 70

Assignment 3 Part II

The running steps of QuickSort:

1. Find a 'pivot' in the array elements.

2. Begin with the left pointer at left side.

3. begin with the right pointer at right side.

4. If the value of the left pointer is less than the pivot value, move the left pointer to the right. Continue until the value of the left pointer is greater than or equal to the pivot value.

5. If the value of the right pointer is greater than the pivot value, move the right pointer to the left. Continue until the value of the right pointer is less than or equal to the pivot value.

6. If the value of the left pointer is less than or queal to the right pointer, swap the both value.

7. Move the left pointer to the right, and move the right pointer to the left.

8. if the left pointer and right pointer do not match, go back to first step.

Important for Quicksort:

1. Always pick first element as pivot.

2. Always pick last element as pivot (implemented below)

3. Pick a random element as pivot.

4. Pick median as pivot.

Here is the solution of Quick Sort program.

![QuickSort](https://user-images.githubusercontent.com/60499437/89696101-9a7ffe80-d8d3-11ea-9887-f50ce3d3e199.png)
