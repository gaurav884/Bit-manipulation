#include<iostream>
#include<bits/stdc++.h>

using namespace std;


 
int main(){

   int a = 5;
   int b = 7;

   a = a^b;
   b = a^b;
   a = a^b;

   cout<<"a = "<<a<<endl;
   cout<<"b = "<<b<<endl;

    return 0;
}