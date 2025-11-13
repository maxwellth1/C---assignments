#include "geometry.h"

void printAttributes(Polygon *p){
    cout << "Area: " << p->area() << "\n";
    for(int x = 0; x < p->getPoints()->getSize(); x++){
        cout << "Point " << x + 1 << ": (" << p->getPoints()->get(x)->getX() 
        << ", " << p->getPoints()->get(x)->getY() << ")\n";
    }
}

int main(){

}