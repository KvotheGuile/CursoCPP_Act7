
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
    Triangle triangle4(Point(5, 5), Point(10, 10), Point(15, 15));
    
    if(triangleDefault.verifyTriangle() == true){cout<<"Triangle 1 "; triangleDefault.PrintInfo();}
    else cout<<"The points from Triangle 1 do not make a real triangle"<<endl;

    if(triangle2.verifyTriangle() == true){cout<<"Triangle 2 "; triangle2.PrintInfo();}
    else cout<<"The points from Triangle 2 do not make a real triangle"<<endl;

    if(triangle3.verifyTriangle() == true){cout<<"Triangle 3 "; triangle3.PrintInfo();}
    else cout<<"The points from Triangle 3 do not make a real triangle"<<endl;

    if(triangle4.verifyTriangle() == true){cout<<"Triangle 4 "; triangle4.PrintInfo();}
    else cout<<"The points from Triangle 4 do not make a real triangle"<<endl;
    
    return 0;
}
