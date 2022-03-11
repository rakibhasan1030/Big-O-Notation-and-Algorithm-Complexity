#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, result = 0;

    cin>> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result = result + 1; /* here number of operation is dependent on input, if the input is 5 then the loop will execute 5x5 = 25 times */
        } 
    }
    cout << result; /* this is not a complexity, because, it'll execute once */

    return 0;
}

/*
    In this program total operation number is n. Beacause, here number of operation is dependent on input.
    Input is not constanst. So, time complexity of this program is Big O(n^2) or O(n^2) or Order(n^2).
    Same way, if there is 3 nested loop, then the complexity will be O(n^3)
*/
