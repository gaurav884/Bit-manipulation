#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void goo(int &x , int i){

    x= x | ( 1<< i);

}
 
int main(){
   
     int x = 11;
    
     goo(x , 2);

     cout<<x;
   

    return 0;
}