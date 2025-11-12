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

void PointArray :: push_back(const Point &p){
    if(size == capacity){
        int newCap = (capacity == 0) ? 1 : capacity * 2;
        Point *newPts = new Point[newCap];
        for(int x = 0; x < size; x++){
            newPts[x] = points[x];
        }
        delete[] points;
        points = newPts;
        capacity = newCap;
    }
    points[size + 1] = p;
}

void PointArray :: clear(){
    resize(0);
}

void PointArray :: insert(const int pos, const Point &p){
    resize(size + 1);
    for(int x = size - 1; x > pos; x--){
        points[x] = points[x - 1];
    }
    points[pos] = p;
}

void PointArray :: remove(const int pos){
    if(pos > 0 && pos < size){
        for(int x = 0; x < size - 2; x++){
            points[x] = points[x + 1];
        }
        resize(size - 1);
    }
}

const int PointArray :: getSize() const{
    return size;
}

Point* PointArray :: get(const int pos){
    if(pos < 0 && pos >= size)
        return nullptr;
    return &points[pos];
}

const Point* PointArray :: get(const int pos) const{
    if(pos < 0 && pos >= size)
        return nullptr;
    return &points[pos];
}

int main(){

}