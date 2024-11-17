
#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Triangle triangleDefault;
    cout<<"Triangle 1, A="<<triangleDefault.area()<<", P="<<triangleDefault.perimetro()<<endl;
    return 0;
}
