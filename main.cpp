
#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main()
{
    // Triangle 1
    Triangle triangleDefault;

    // Triangle 2
    Triangle triangle2(Point(10, 10), Point(10, 13), Point(14, 10));

    // Not triangles
    Triangle triangle3(Point(5, 5), Point(5, 5), Point(5, 5));
    Triangle triangle4(Point(5, 5), Point(5, 10), Point(5, 15));
    Triangle triangle5(Point(5, 5), Point(10, 10), Point(15, 15));
    
    cout<<"Triangle 1 "; triangleDefault.printInfo();
    cout<<"Triangle 2 "; triangle2.printInfo();
    cout<<"Triangle 3 "; triangle3.printInfo();
    cout<<"Triangle 4 "; triangle4.printInfo();
    cout<<"Triangle 5 "; triangle5.printInfo();
    
    return 0;
}
