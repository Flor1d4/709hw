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
};
class Car
{
private:
	string e;
	double patrol= 33.6;
public:
	void Init(string eng, double p)
	{
		e = eng;
		patrol = p;
	}
	void Print()
	{
		cout << "Engine: " << e << endl;
		cout << "Patrol: " << patrol << endl;
	}
	void SetEngine(string eng)
	{
		e = eng;
	}
	string GetEngine()
	{
		return e;
	}
};
int main()
{
	Car obj1;
	obj1.SetEngine("N22");
	string eng = obj1.GetEngine();
	cout << obj1.GetEngine() << endl;
	obj1.Print();
}