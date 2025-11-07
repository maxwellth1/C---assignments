#include <iostream>
using namespace std;

void printArray(const int nums[], const int len){
    for(int x = 0; x < len; x++){
        cout << nums[x];
        if(x < len - 1){
            cout << ", ";
        }

    }
}

int main(){
    int nums[] = {1, 2, 3, 4, 5, 6};
    printArray(nums, 6);
    return 0;
}