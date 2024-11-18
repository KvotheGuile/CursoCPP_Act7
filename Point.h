#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Point
{
    private:
    
    // Coordantes
    double x;
    double y;

    public:

    // Constructores
    Point();
    Point(double cX, double cY);

    // Getters
    double getX();
    double getY();

    // Setters
    void setX(double _x);
    void setY(double _y);
    void set(double _x, double _y);
    
    // Calculos
    double magnitud();
    double distance(Point other);

    // Info
    void print();

    //Comparaciones
    bool compareX(Point other);
    bool compareY(Point other);
};

#endif