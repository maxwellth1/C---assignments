#include <iostream>
using namespace std;

void transpose(const int input[][LENGTH], int output[][WIDTH]){
    for(int x = 0; x < WIDTH; x++){
        for(int y = 0; y < LENGTH; y++){
            output[y][x] = input[x][y];
        }
    }
}

int main(){
    
}