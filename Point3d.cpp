#include "Point3d.h"

Point3d::Point3d() : x(0.0), y(0.0), z(0.0) {}
Point3d::Point3d(double x, double y, double z) : x(x), y(y), z(z) {}
Point3d::Point3d(const Point3d &p3d) : x(p3d.x), y(p3d.y), z(p3d.z) {}
Point3d::~Point3d() {}

std::ostream &operator<<(std::ostream &os, const Point3d &p) {
    os << "Point3d(x = " << p.get_x() << ", y = " << p.get_y() << ", z = " << p.get_z() << ")";
    return os;
}
