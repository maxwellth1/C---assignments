#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0) : x(x), y(y) {}

        int getX() const {return x;}
        int getY() const {return y;}
        
        void setX(const int xx){x = xx;}
        void setY(const int yy){y = yy;}
};

class PointArray{
    private:
        Point *points;
        int size; int capacity;
        void resize(int n);
    public:
    //Constructors
        PointArray();
        PointArray(const Point pts[], const int size);
        PointArray(const PointArray &ca);
        ~PointArray();

    //Functions
        void push_back(const Point &p);
        void insert(const int pos, const Point &p);
        void remove(const int pos);
        const int getSize() const;
        void clear();
        Point* get(const int pos);
        const Point* get(const int pos) const;
};