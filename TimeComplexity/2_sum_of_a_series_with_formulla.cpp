#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, result;

    cin >> n;

    result = n * (n + 12) / 2; // here, three mathmatical operation occur( * , + , /) and one assignment operation(=)

    cout << result; // this is not a complexity, because, it'll execute once

    return 0;
}

/*
    In this program total operation number is 4 and It'll be always 4. Beacause, here number of operation is not dependent on input.
    Input is not constanst, but for any input operation number will be 4. So, the time complexity of this program is O(1).
    Time complexity of a program will always Big O(1) or O(1) or Order(1), when the number of operation is not dependent on input of a program.
*/
