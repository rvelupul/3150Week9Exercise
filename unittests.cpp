#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Triangle3d.h"

TEST_CASE("Testing computeArea function in Triangle3d that indirectly tests computeDistance") {
    Point3d p1(0, 0, 0);
    Point3d p2(1, 0, 0);
    Point3d p3(0.5, sqrt(3.0)/2.0, 0);  

    Triangle3d triangle(p1, p2, p3);

    double expected_area = 0.5 * (1 * (sqrt(3.0) / 2.0));
    CHECK(doctest::Approx(triangle.computeArea()) == expected_area);

    Point3d p4(0, 0, 0);
    Point3d p5(4, 0, 0);
    Point3d p6(0, 3, 0);  
    Triangle3d rightTriangle(p4, p5, p6);

    double right_expected_area = 0.5 * 4 * 3;  
    CHECK(doctest::Approx(rightTriangle.computeArea()) == right_expected_area);

    Point3d p7(1, 1, 1);
    Point3d p8(2, 2, 2);  
    Point3d p9(3, 3, 3);
    Triangle3d zeroAreaTriangle(p7, p8, p9);

    CHECK_EQ(zeroAreaTriangle.computeArea(), 0.0);
}

TEST_CASE("Testing computeArea function in Triangle3d") {
    
    Point3d p1(0, 0, 0);
    Point3d p2(1, 0, 0);
    Point3d p3(0.5, sqrt(3.0)/2.0, 0);
    Triangle3d equilateralTriangle(p1, p2, p3);

    double expected_area_equilateral = sqrt(3.0)/4.0;  
    CHECK(doctest::Approx(equilateralTriangle.computeArea()) == expected_area_equilateral);

    Point3d p4(0, 0, 0);
    Point3d p5(4, 0, 0);
    Point3d p6(0, 3, 0);
    Triangle3d rightTriangle(p4, p5, p6);

    double expected_area_right = 0.5 * 3 * 4;  
    CHECK_EQ(rightTriangle.computeArea(), expected_area_right);

    Point3d p7(1, 1, 1);
    Point3d p8(2, 2, 2);
    Point3d p9(3, 3, 3);
    Triangle3d zeroAreaTriangle(p7, p8, p9);

    CHECK_EQ(zeroAreaTriangle.computeArea(), 0.0);
}