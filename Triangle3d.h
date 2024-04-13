#ifndef _TRIANGLE_3D_H_
#define _TRIANGLE_3D_H_

#include "Point3d.h"

struct Triangle3d {
private:
    Point3d p1;
    Point3d p2;
    Point3d p3;

public:
    Triangle3d(Point3d p1, Point3d p2, Point3d p3);
    ~Triangle3d();

    double computeArea() const;

    friend std::ostream &operator<<(std::ostream &os, const Triangle3d &t);
};

#endif
