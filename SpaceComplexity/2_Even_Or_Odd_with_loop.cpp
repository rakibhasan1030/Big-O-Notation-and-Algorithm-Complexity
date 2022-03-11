#include<bits/stdc++.h>
using namespace std;
int main(){

    /* Constraints: : 0 <= n <= 100 */

    int i, n, nums[101]; //here, n is an integer and n is n <= 100, so, the array depend on n's value.

    cin>>n;

    for(int i = 0; i < 101; i++){
        nums[i] = 0;
    }

    for(int i = 0; i < 101; i+=2){
        nums[i] = 1;
    }

    if(nums[n]){
        cout<< n << " is EVEN!" << endl;
    }else{
        cout<< n << " is ODD!" << endl;
    }

    return 0;
} /* Space Complexity of this program is Big O(n) or O(n) or Order(n)*/