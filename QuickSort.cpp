#include <bits/stdc++.h>
using namespace std;
int partition(int *a, int start, int end)
{
  int pivot = a[end];
  int pivotIndex = start;
  int temp;
  
  for(int i = start; i < end; i++) {
    if (a[i] <= pivot) {
      temp = a[i];
      a[i] = a[pivotIndex];
      a[pivotIndex] = temp;
      pivotIndex++;
    }
  }
  temp = a[end];
  a[end] = a[pivotIndex];
  a[pivotIndex] = temp;
  
  return pivotIndex;
}

void QuickSort(int *a, int start, int end)
{
  int pivotIndex;
  if(start < end) {
    pivotIndex = partition(a, start, end);
    QuickSort(a, start, pivotIndex - 1);
    QuickSort(a, pivotIndex + 1, end);
  }
}

int main()
{
  int n, a[];
  
  cout << "Please enter the number of elements: ";
  cihn >> n;
  
  cout << "Please enter the array elements: ";
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  QuickSort(a, 0 ,n -1);
  
  cout << "After quick sort the array is: " << endl;
  for(int i = 0; i < n; i++) {
    cout <<  a[i];
  }
  return 0;
}
