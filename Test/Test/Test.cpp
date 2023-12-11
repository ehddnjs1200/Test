#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    double x, y;
};

void rotate(Point& p, Point center, double angle) {
    double rad = angle * 3.14 / 180.0;
    double s = sin(rad);
    double c = cos(rad);
    cout << "angle: " << angle << endl;
    cout << "sin(rad): " << s << ", cos(rad): " << c << endl;

    // translate point back to origin:
    p.x -= center.x;
    p.y -= center.y;

    // rotate point
    double xnew = p.x * c - p.y * s;
    double ynew = p.x * s + p.y * c;

    // translate point back:
    p.x = xnew + center.x;
    p.y = ynew + center.y;
}

int main() {
    Point center = { 0, 0 };
    Point vertices[] = { {-1, -1}, {1, -1}, {1, 1}, {-1, 1} };
    double angle = 0;

    for (auto& _vt : vt) {
        rotate(vt, GetworldPos(), _angle);
        cout << "x: " << vertex.x << ", y: " << vertex.y << endl;
    }

    return 0;
}