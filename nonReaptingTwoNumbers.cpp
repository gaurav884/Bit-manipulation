#include <bits/stdc++.h>

using namespace std;

int main(){

   vector<int> arr = {5,1,3,2,3,4,1,5};
   
   int ans = 0;

   for(int i=0 ;i<arr.size() ;i++){

      ans = ans^arr[i];

   }

   int k = 0;
   int x = ans;

   while((x&1) == 0){

      x = x >> 1;
      k++;
   }

   x = ans;

   vector<int>first;
   vector<int>second;

   for(int i =0 ;i<arr.size() ;i++){
       
       if(((arr[i] >> k) & 1) == 1) first.push_back(arr[i]);

       else second.push_back(arr[i]);

   }

   for(int i =0 ;i<first.size() ;i++){
      
       ans = ans^first[i];

   }
   
   cout<<"first = "<<ans<<endl;
   cout<<"second = "<<(x^ans)<<endl;

   return 0;
}