
#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main()
{
    // Triangle 1 (by default constructor)
    Triangle triangleDefault;

    // Triangle 2
    Triangle triangle2(Point(10, 10), Point(10, 13), Point(14, 10));

    // Not triangles
    Triangle triangle3(Point(5, 5), Point(5, 5), Point(5, 5)); // Los 3 vertices son el mismo punto
    Triangle triangle4(Point(30, 30), Point(30, 30), Point(20, 22)); // 2 vertices son el mismo punto
    Triangle triangle5(Point(40, 5), Point(40, 10), Point(40, 15)); // Los puntos estan en la misma linea paralela a un eje
    Triangle triangle6(Point(5, 5), Point(10, 10), Point(15, 15)); // Los puntos estan en la misma linea no paralela a un eje
    
    cout<<"Triangle 1 "; triangleDefault.printInfo();
    cout<<"Triangle 2 "; triangle2.printInfo();
    cout<<"Triangle 3 "; triangle3.printInfo();
    cout<<"Triangle 4 "; triangle4.printInfo();
    cout<<"Triangle 5 "; triangle5.printInfo();
    cout<<"Triangle 6 "; triangle6.printInfo();
    
    return 0;
}
