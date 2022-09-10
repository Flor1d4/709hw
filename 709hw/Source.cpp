#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 2;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << x << "\t" << y << endl;
	}
};
int main()
{
	Point obj2;
	obj2.Print();
}