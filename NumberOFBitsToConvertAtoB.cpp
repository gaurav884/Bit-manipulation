#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int goo(int x){

    int count  =0 ;

    while(x != 0){

        if(x & 1 == 1) count++;

        x = x>>1;
    }

   return count;
}
 
int main(){
   
     int a = 11;
     int b = 15;
    
     int c = a^b;
    
     cout<<goo(c);
  

    return 0;
}