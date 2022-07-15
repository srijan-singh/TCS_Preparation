#include<bits/stdc++.h>

using namespace std;

int max_guest_at_instance(int time, vector<int>& guest_entering, vector<int> guest_leaving)
{
     int max = 0;
     int temp = guest_entering[0] - guest_leaving[0];

     for(int i=1; i<time; i++)
     {
          if(temp>max)
          {
               max=temp;
          }
          temp = temp + guest_entering[i] - guest_leaving[i];
     }

     return max;
}

int main()
{
     int time = 4;

     vector<int> guest_entering = {
          3,5,2,0
          };
     vector<int> guest_leaving = {
          0,2,4,4
          };

     cout<<max_guest_at_instance(time, guest_entering, guest_leaving);

     return 0;
}