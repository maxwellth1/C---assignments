#include <iostream>
using namespace std;

const int len = 10;

int main(){
    int arr[len] = {10};
    int *xPtr = arr, *yPtr = arr + len - 1;
    cout << *xPtr << ' ' << *yPtr;

}

