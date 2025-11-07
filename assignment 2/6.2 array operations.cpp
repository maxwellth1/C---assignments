#include <iostream>
using namespace std;

void reverse(int nums[], const int len){
    for(int x = 0; x < len / 2; x++){
        int *a = nums + x;
        int *b = nums + (len - x - 1);
        int tmp = *a;
        *a = *b; 
        *b = tmp;
    }
}

int main(){
    int nums[] = {1, 2, 3, 4, 5, 6};
    reverse(nums, 6);
    for(int x = 0; x < 6; x++){
        cout << nums[x] << " ";
    }
}