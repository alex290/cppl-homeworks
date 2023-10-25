#include <iostream>
using namespace std;

struct points {
	double m_x;
	double m_y;
	points(double x, double y) {
		m_x = x;
		m_y = y;
	}
};

void print_point(const points& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		double y = static_cast<double>(i) * 2;
		points my_point(i, y);
		print_point(my_point);
	}
	return 0;
}
