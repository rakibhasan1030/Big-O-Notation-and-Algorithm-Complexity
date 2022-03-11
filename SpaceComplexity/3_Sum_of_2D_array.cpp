#include<bits/stdc++.h>
using namespace std;
int main(){

    /* here, the array is two dimentional and is's a 2x2 array. So, memory will be allocate for n x n times  */
    int firstArray[2][2] = {1, 2, 3, 4}, secondArray[2][2] = {1, 2, 3, 4}, resultArray[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            resultArray[i][j] = firstArray[i][j] + secondArray[i][j];
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<< resultArray[i][j] << "     ";
        }
        cout << endl;
    }
    return 0;
} /* Space Complexity of this program is Big O(n^2) or O(n^2) or Order(n^2)*/