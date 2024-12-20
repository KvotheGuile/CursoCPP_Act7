
#include "Triangle.h"

Triangle::Triangle()
{
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}

Triangle::Triangle(Point v1, Point v2, Point v3)
{
    vertex1 = v1;
    vertex2 = v2;
    vertex3 = v3;
}

double Triangle::sideA()
{
    return vertex1.distance(vertex2);
}

double Triangle::sideB()
{
    return vertex2.distance(vertex3);
}

double Triangle::sideC()
{
    return vertex3.distance(vertex1);
}

double Triangle::perimetro()
{
    return sideA() + sideB() + sideC();
}

double Triangle::area()
{
    double semiPerimetro = perimetro() * 0.5;
    return sqrt(semiPerimetro * (semiPerimetro-sideA()) * (semiPerimetro-sideB()) * (semiPerimetro-sideC()));
}

void Triangle::printInfo()
{
    if(verifyTriangle())
    {
        cout<<"A="<<area()<<", P="<<perimetro()<<endl;
        return;
    }
    
    cout<<"The given points do not make a real triangle"<<endl;
}

bool Triangle::verifyTriangle()
{
    // Si el área del triangulo no es mayor a cero, no es un triangulo real.
    return area() > 0;
}