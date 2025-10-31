#include <iostream>
using namespace std;

int main(){
    int N;
    while(true){
        cout << "Enter N: "; cin >> N;
        cout << ((N >= 0 && N % 5 == 0) ? N/5:-1) << "\n"; 
    }
    return 0;
}