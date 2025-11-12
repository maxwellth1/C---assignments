#include "geometry.h"

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

void PointArray :: resize(int n){
    if(n < 0) n = 0;

    if(n > capacity){
        int newCap = (capacity == 0) ? 1 : capacity;
        while(newCap < n) newCap *= 2;
        
        Point *newPts = new Point[newCap];

        for(int x = 0; x < size; x++){
            newPts[x] = points[x];
        }

        delete[] points;
        points = newPts;
        capacity = newCap;
    }
    size = n;

    if(capacity > 0 && size < capacity / 4){
        int newCap = max(size, capacity / 2);
        Point *newPts = (newCap > 0) ? new Point[newCap] : nullptr;

        for(int x = 0; x < size; x++){
            newPts[x] = points[x];
        }

        delete[] points;
        points = newPts;
        capacity = newCap;
    }
}



int main(){

}