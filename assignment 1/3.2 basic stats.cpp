#include <iostream>
using namespace std;

int main(){
    int N; int val; int min; int max; int sum = 0;
    
    cout << "Enter # of intergers: "; cin >> N;
    cout << "Enter intergers:\n"; cin >> sum;

    max = sum;
    min = sum;
    
    for(int x =1; x < N; x++){
        int y;
        cin >> y;
        sum += y;

        if(y < min){
            min = y;
        }
        if(y > max){
            max = y;
        }
    }

    double mean = static_cast<double>(sum) / N;
    int range = max - min;

    cout << "Mean: " << mean << "\n";
    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";
    cout << "Range: " << range;

    return 0;
}
