#include<bits/stdc++.h>

using namespace std;

int string_num(string input)
{
     map<char, int> memo;

     for(auto elm: input)
     {
          if(memo.find(elm) == memo.end())
          {
               memo[elm] = 1;
          }
          else
          {
               memo[elm]++;
          }
     }

     return memo['*'] - memo['#'];

}

int main()
{
     string input = "#*****";

     cout<<string_num(input);

     return 0;
}