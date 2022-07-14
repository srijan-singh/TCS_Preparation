#include<bits/stdc++.h>

using namespace std;

int prior_element(int size, int* arr)
{
     if(size <= 1)
     {
          return size;
     }

     int count=1;

     for(int h=size-1; h>0; h--)
     {
          if(arr[h] > arr[h-1])
          {
               count++;
          }
     }

     return count;
}

int main()
{
     int size = 5;
     int arr[size] = {7,4,8,2,9};

     cout<<prior_element(size, arr);

     return 0;
}