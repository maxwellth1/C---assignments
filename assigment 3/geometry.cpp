#include <iostream>
#include "geometry.h"
using namespace std;

PointArray :: PointArray(){
    size = 0;
    points = new Point[size];
}

PointArray :: PointArray(const Point pts[], const int sz){
    size = sz;
    points = new Point[sz];
    for(int x = 0; x < sz; x++){
        points[x] = pts[x];
    }
}

PointArray :: PointArray(const PointArray &ca){
    points = new Point[ca.size];
    size = ca.size;
    for(int x = 0; x < ca.size; x++){
        points[x] = ca.points[x];
    }
}

PointArray :: ~PointArray(){
    delete[] points;
}



int main(){

}