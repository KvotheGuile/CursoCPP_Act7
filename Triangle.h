
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

class Triangle
{
    private:
    Point vertex1;
    Point vertex2;
    Point vertex3;

    public:
    // Constructores
    Triangle();
    Triangle(Point, Point, Point);

    // Lados
    double sideA();
    double sideB();
    double sideC();

    // Calculos
    double perimetro();
    double area();

    // Info
    void printInfo();

    //Verificacion
    bool verifyTriangle();
};

#endif