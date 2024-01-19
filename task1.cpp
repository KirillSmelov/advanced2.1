#include <iostream>
struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y;
	}
};

void print_point(const point& point_object)
{
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main()
{
	//int i = 0;
	//for ( i ; i < 5; i++); {
	//	point my_point(i, 2 * i);
	//	print_point(my_point);

	//}

	point P1(1, 2);
	print_point(P1);
	point P2(3, 6);
	print_point(P2);
	return 0;
}

