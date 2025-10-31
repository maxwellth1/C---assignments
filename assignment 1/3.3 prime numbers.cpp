#include <iostream>
using namespace std;

int main(){
    int N; int count = 0; int beg = 2;
    cout << "Enter a number: "; cin >> N;

    while(count < N){
        bool prime = true;
        for(int y = 2; y < beg; y++){
            if(beg % y == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << beg << " ";
            count++;
        }
        beg++;
    }
    return 0;
}