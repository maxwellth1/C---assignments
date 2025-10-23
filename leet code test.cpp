#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maxFrequency(vector<int> nums, int k, int numOperations){
    sort(nums.begin(), nums.end()); vector<int> sum(nums.size()); int temp = 0;
    
    for(int x = 0; x < nums.size(); x++){
        temp += nums[x];
        sum[x] = temp;
    }

    return sum;

}

int main(){
    vector<int> nums = {5,11,20,20};
    vector<int> sum = maxFrequency(nums, 5, 1);
    for(int v : sum){
        cout << v << " ";
    }
}