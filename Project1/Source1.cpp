#include<iostream>
using namespace std;

//21/3/4

void swap2(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

template <typename T>
struct Point {
	T x, y;
	Point(T x = 0,T y = 0):x(x),y(y) {}
};

template <typename T>
Point<T> operator + (const Point<T>& A, const Point<T>& B) {
	return Point<T>(A.x + B.x, A.y + B.y);
}

template <typename T>
ostream& operator << (ostream &out, const Point<T>& p) {
	out << "(" << p.x << "," << p.y << ")";
	return out;
}

int main() {
	//int a = 3, b = 4;
	//swap2(a, b);
	//cout << a << "\t" << b << "\n";

	Point<int> a, b(1, 2);
	Point<double>c(1.1, 2.2), d(3.3, 4.4);
	a.x = 3;
	cout << a + b << "\n" << c + d << "\n";


	return 0;
}