
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
    
    cout<<"Triangle 1 "; triangleDefault.PrintInfo();
    cout<<"Triangle 2 "; triangle2.PrintInfo();
    return 0;
}
