// bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

struct Point
{
	double x, y;

	void input()
	{
		cout << "nhap toa do diem:\n";
		cout << "nhap x= "; cin >> x;
		cout << "nhap y= "; cin >> y;
	}

};

struct Segment
{
	Point A, B;
	void input()
	{
		cout << "nhap toa do diem A:\n";
		cout << "nhap x= "; cin >> A.x;
		cout << "nhap y= "; cin >> A.y;

		cout << "nhap toa do diem B:\n";
		cout << "nhap x= "; cin >> B.x;
		cout << "nhap y= "; cin >> B.y;
	}
};

struct Line
{
	double a, b, c;
	Point M;
	void input()
	{
		cout << "nhap phuong trinh duong thang:\n";
		cout << "nhap a= "; cin >> a;
		cout << "nhap b= "; cin >> b;
		cout << "nhap c= "; cin >> c;
		cout << "nhap M(x) = "; cin >> M.x;
		cout << "nhap M(y) = "; cin >> M.y;

	}
};

struct Vector
{
	Point source, target;

	void input()
	{
		cout << "nhap toa do diem source cua vector :\n";
		cout << "nhap x= "; cin >> source.x;
		cout << "nhap y= "; cin >> source.y;
		cout << "nhap toa do diem target cua vector :\n";
		cout << "nhap x= "; cin >> target.x;
		cout << "nhap y= "; cin >> target.y;
	}

};

struct Triangle
{
	Point A, B, C;

	void input()
	{
		cout << "nhap toa do diem A:\n";
		cout << "nhap x= "; cin >> A.x;
		cout << "nhap y= "; cin >> A.y;

		cout << "nhap toa do diem B:\n";
		cout << "nhap x= "; cin >> B.x;
		cout << "nhap y= "; cin >> B.y;

		cout << "nhap toa do diem C:\n";
		cout << "nhap x= "; cin >> C.x;
		cout << "nhap y= "; cin >> C.y;
	}
};

struct Reangle
{
	Point A, B, C, D;

	void input()
	{
		cout << "nhap toa do diem A:\n";
		cout << "nhap x= "; cin >> A.x;
		cout << "nhap y= "; cin >> A.y;

		cout << "nhap toa do diem B:\n";
		cout << "nhap x= "; cin >> B.x;
		cout << "nhap y= "; cin >> B.y;

		cout << "nhap toa do diem C:\n";
		cout << "nhap x= "; cin >> C.x;
		cout << "nhap y= "; cin >> C.y;

		cout << "nhap toa do diem D:\n";
		cout << "nhap x= "; cin >> D.x;
		cout << "nhap y= "; cin >> D.y;
	}
};

struct Circle
{
	double tam, bankinh;

	void input()
	{
		cout << "nhap tam hinh tron ="; cin >> tam;
		cout << "nhap ban kinh hinh tron ="; cin >> bankinh;
	}

};

struct Convexpoly
{
	int n;
	Point* ptr = NULL;
	

	Convexpoly()
	{
		cout << "nhap so diem cua convexpoly = "; cin >> n;
		
		ptr = new(nothrow) Point[n];

		if (!ptr) {
			cout << "memory allocation failed!";
		}
		else
		{
			int d = 1;
			for (int i = 0; i < n; i++)
			{
				cout << "nhap toa do diem thu " << d << " :\n"; d++;
				cout << "nhap x= "; cin >> ptr[i].x;
				cout << "nhap y= "; cin >> ptr[i].y;
			}
		}
	}
	

	~Convexpoly()
	{
		delete ptr;
	}
};

bool IsConvex(Point* a,int n)
{

}


int main()
{
	cout << "1: point \n";
	cout << "2: segment\n";
	cout << "3: line \n";
	cout << "4: vector \n";
	cout << "5: triangle\n";
	cout << "6: reangle \n";
	cout << "7: circle \n";
	cout << "8: convex poly \n";
	cout << "chon doi tuong = ";

	int x;
	cin >> x;

	if (x == 8) 
	{
		Convexpoly convexpoly;
		cout << IsConvex(convexpoly.ptr, convexpoly.n);
		
	}
	else if(x>0 && x<8)
	{
		switch (x)
		{
			case 1:
			{
				Point point; 
				point.input(); 
				break;
			};
			case 2:
			{
				Segment segment; 
				segment.input();
				break;
			};
			case 3:
			{
				Line line; 
				line.input(); 
				break;
			};
			case 4:
			{
				Vector vector; 
				vector.input();
				break;
			};
			case 5:
			{
				Triangle triangle; 
				triangle.input(); 
				break;
			};
			case 6:
			{
				Reangle reangle; 
				reangle.input(); 
				break;
			};
			case 7:
			{
				Circle circle; 
				circle.input(); 
				break;
			};

		}
	}
	else { cout << "khong co doi tuong nay"; }
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file