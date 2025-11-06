#include <iostream>
using namespace std;

int sum(const int nums[], int len){
    return len == 0 ? 0 : nums[0] + sum(nums + 1, len - 1);
}

int main(){

}