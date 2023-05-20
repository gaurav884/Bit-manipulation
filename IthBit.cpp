#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool foo(int x , int i){
  
   x = x>>i;

   return x&1 == 1 ? 1 : 0;
}

bool goo(int x , int i){

    return x& (1<<i) == 1 ? 1 : 0;

}
 
int main(){
   
     cout<<goo(11 ,2);
   

    return 0;
}