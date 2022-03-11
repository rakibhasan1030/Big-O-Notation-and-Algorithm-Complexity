#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; // here, n is an integer and we take one input, so whatever we take as inpute memory will use only 4 byte
    if(n%2==0){
        cout<< n << " is EVEN!" << endl;
    }else{
        cout<< n << " is ODD!" << endl;
    }
    return 0;
} /* Space Complexity of this program is Big O(n) or O(n) or Order(n)*/