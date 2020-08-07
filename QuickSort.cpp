#include <bits/stdc++.h>
using namespace std;
int partition (int *a, int start, int end)
{
  int pivot = a[end];
  int pivotIndex = start;
  int temp;
  
  for(int i = start; i < end; i++) {
    if (a[i] <= pivot) {
      temp = a[i];
      a[i] = a[pivotIndex];
      a[pivotIndex] = temp;
    }
  }   
