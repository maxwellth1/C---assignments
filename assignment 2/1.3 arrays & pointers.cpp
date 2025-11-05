#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    int *q = &arr[0];
    
    cout << p << ", " << q;
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
