#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0){this->x = x; this->y = y;}

        int getX() const {return x;}
        int getY() const {return y;}
        
        void setX(const int xx){x = xx;}
        void setY(const int yy){y = yy;}

};