#include <iostream>
using namespace std;

int main(){
    int N;
    while(true){
        cout << "Enter N: "; cin >> N;
        if(N % 5 > 0){
            cout << "-1\n";
            continue;
        }
        if(N < 0){
            break;
        }
        cout << N/5 << "\n";
    }
    cout<<"Goodbye\n";
    return 0;
}