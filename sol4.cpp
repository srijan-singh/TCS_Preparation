#include<bits/stdc++.h>

using namespace std;

int max_one(int row, int col, vector< vector<int> >& arr)
{
     for(int r=0; r<row; r++)
     {
          int temp_one = 0;

          for(int c=0; c<col; c++)
          {
               if(arr[r][c] == 1)
               {
                    temp_one++;
               }
          }

          if(temp_one == col)
          {
               return r+1;
          }

     }
     
     return -1;
}

int main()
{    
     int row = 4;
     int col = 3;
     vector< vector<int> > arr = {
          {0,1,0},
          {1,1,0},
          {1,0,1},
          {1,1,1}
     };

     cout<<max_one(row, col, arr);

     return 0;
}