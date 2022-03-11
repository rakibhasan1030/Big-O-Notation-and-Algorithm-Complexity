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
    
    for(int i = 0; i < n; i++){
        result = result + 1; /* here number of operation is dependent on input, if the input is 5 then the loop will execute 5 times */ 
    }

    
    cout << result; /* this is not a complexity, because, it'll execute once */

    return 0;
}
/*
    In this program total loop is 2, one is double for loop which is nested and one is single for loop.
    For the first nested loop the complexity will be O(n^2) and the second loop it'll be O(n).
    So, time complexity of this program is Big O(n^2) or O(n^2) or Order(n^2). We cannot calculate O(n^2 + n) this way.
    We've to remember, if we see multiple complexity in a program, we see which one is the worse and that'll be the answer of complexity.
    Similarly, suppose, we have O(n!+n^3+n^2+logn) complexity in a program, then the complexity of that program will be n!, because n! is
    the worse case amoung all of them.
*/
