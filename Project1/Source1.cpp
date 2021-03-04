#include<iostream>
using namespace std;

//21/3/4

void swap2(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

struct Point {
	int x, y;
	Point(int x = 0,int y = 0):x(x),y(y) {}
};

Point operator + (const Point& A, const Point& B) {
	return Point(A.x + B.x, A.y + B.y);
}

ostream& operator << (ostream &out, const Point& p) {
	out << "(" << p.x << "," << p.y << ")";
	return out;
}

int main() {
	//int a = 3, b = 4;
	//swap2(a, b);
	//cout << a << "\t" << b << "\n";

	Point a, b(1, 2);
	a.x = 3;
	cout << a + b << "\n";

	return 0;
}