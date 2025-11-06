#include <iostream>
#include <cmath>
using namespace std;

double estimatePi(double n){
    int inside = 0; srand(time(0));

    for(int x = 0; x < n; x++){
        double a = double(rand()) / RAND_MAX;
        double b = double(rand()) / RAND_MAX;
        if(sqrt(a*a + b*b) <= 1) inside++;
    }
    return (double) 4 * inside / static_cast<double>(n);
}

int main(){
    cout<< estimatePi(5000000);
    return 0;
}