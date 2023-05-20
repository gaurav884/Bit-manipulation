#include <bits/stdc++.h>

using namespace std;

int main(){

   vector<int> arr = {5,1,3,2,4,3,4,1,5};
   
   int ans = 0;

   for(int i=0 ;i<arr.size() ;i++){

      ans = ans^arr[i];

   }

   cout<<ans;

   return 0;
}