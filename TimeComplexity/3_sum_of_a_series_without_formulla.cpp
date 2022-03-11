#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, result = 0;

    cin>> n;

    for(int i = 0; i < n; i++){
        result = result + i; // here number of operation is dependent on input, if the input is 5 then the loop will execute 5 times
    }
    cout << result; //this is not a complexity, because, it'll execute once

    return 0;
}

/*
    In this program total operation number is n. Beacause, here number of operation is dependent on input.
    Input is not constanst. So, time complexity of this program is Big O(n) or O(n) or Order(n) or linear.
    Time complexity of a program will always Big O(n) or O(n) or Order(n), when the number of operation is dependent on input of a program.
*/
