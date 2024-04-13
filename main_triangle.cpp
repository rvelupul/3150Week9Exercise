#include <iostream>
#include <cmath>
#include "Triangle3d.h"

int main() {
    Point3d p1(0.0, 0.0, 0.0);
    Point3d p2(1.0, 0.0, 0.0);
    Point3d p3(0.5, sqrt(3.0)/2.0, 0.0);

    Triangle3d triangle(p1, p2, p3);
    std::cout << triangle << std::endl;
    std::cout << "Area of the triangle: " << triangle.computeArea() << std::endl;

    return 0;
}
