#include <iostream>
using namespace std;

int length(const char *word){
    int length = 0;
    while(*(word + length) != '\0'){
        length++;
    }
    return length;
}

int main(){
    cout << length("hello");
}