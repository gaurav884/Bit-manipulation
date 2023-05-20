#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool usingXor(int x){

    return (x^1) == x+1;   //bitwise XOR Operation of the Number by 1 increment the value of the number by 1 if the number is even otherwise it decrements the value of the number by 1 if the value is odd.
                           //Time Complexity: O(1)
                           //Auxiliary Space: O(1)
}

bool usingAnd(int x){

    return (x&1) == 0;   //bitwise AND Operation of the Number by 1 will be 1, If it is odd because the last bit will be already set. Otherwise, it will give 0 as output. 
                           //Time Complexity: O(1)
                           //Auxiliary Space: O(1)
}

bool usingOr(int x){

    return (x|1) == x+1;   //As we know bitwise OR Operation of the Number by 1 increment the value of the number by 1 if the number is even otherwise it will remain unchanged.
                           //Time Complexity: O(1)
                           //Auxiliary Space: O(1)
}
 
int main(){

    int x = 5;

    cout<<usingXor(5)<<endl;
    cout<<usingAnd(5)<<endl;
    cout<<usingOr(5)<<endl;

    return 0;
}