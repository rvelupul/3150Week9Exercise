#include <cmath>
#include "Triangle3d.h"

Triangle3d::Triangle3d(Point3d p1, Point3d p2, Point3d p3) : p1(p1), p2(p2), p3(p3) {}
Triangle3d::~Triangle3d() {}

double computeDistance(const Point3d &a, const Point3d &b) {
    return sqrt(pow(a.get_x() - b.get_x(), 2) +
                pow(a.get_y() - b.get_y(), 2) +
                pow(a.get_z() - b.get_z(), 2));
}

double Triangle3d::computeArea() const {
    double d12 = computeDistance(p1, p2);
    double d13 = computeDistance(p1, p3);
    double d23 = computeDistance(p2, p3);
    double s = (d12 + d13 + d23) / 2;
    return sqrt(s * (s - d12) * (s - d13) * (s - d23));
}

std::ostream &operator<<(std::ostream &os, const Triangle3d &t) {
    os << "Triangle3d with vertices: " << t.p1 << ", " << t.p2 << ", " << t.p3;
    return os;
}
