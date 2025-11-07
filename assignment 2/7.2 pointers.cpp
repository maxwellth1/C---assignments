#include <iostream>
using namespace std;

void swap(int **a, int **b){
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 1; int y = 2; int *ptrX = &x; int *ptrY = &y;
    cout << &ptrX << " " << &ptrY << "\n";
    swap(&ptrX, &ptrY);
    cout << &ptrX << " " << &ptrY;
}