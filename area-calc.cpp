//  Start Project > *92-8-5*  *22:49*  \\
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
//  Rectangle  \\
class Rectangle
{
	int length,width;
public:
	int area()					{return length*width;}
	int perim()					{return (length+width)*2;}
	void setLength(int value)	{if (value>0)length=value;}
	void setWidth(int value)	{if (value>0)width=value;}
	Rectangle();
};
Rectangle :: Rectangle()
{
	length=1;
	width=1;
}
//  Triangle  \\
class Triangle
{
	int rule;
	int altitude;
public:
	int area()						{return (rule*altitude);}
	int perim()						{return (2*(rule+altitude));}
	void setRule(int value)			{if (value>0) rule=value;}
	void setAltitude(int value)		{if (value>0) altitude=value;}
	Triangle();
};
Triangle :: Triangle()
{
	rule=1;
	altitude=1;
}
//  Circle  \\
class Circle
{
	float radius;
public:
	float area()				{return (float)(radius*radius*3.14);}
	float perim()				{return (float)(2*radius*3.14);}
	void setRadius(float value)	{if (value>0)radius=value;}
	Circle();
};
Circle :: Circle()
{
	radius=1;
}
int main()
{
	int a,b,funcNum;
	float c;
	Rectangle R;
	Triangle T;
	Circle C;



	system("color 5f");
	do
	{
		system("cls");
		cout<<"\n===================================\n";
		cout<<"| Enter One Of Function's Number  |\n";
		cout<<"===================================\n";
		cout<<"|                                 |\n";
		cout<<"| (1)  Rectangle                  |\n";
		cout<<"|                                 |\n";
		cout<<"| (2)  Triangle                   |\n";
		cout<<"|                                 |\n";
		cout<<"| (3)  Circle       (0)  Exit     |\n";
		cout<<"|                                 |\n";
		cout<<"===================================\n";
		cin>>funcNum;
		switch (funcNum)
		{
		case 1:  //  Rectangle
			{
				system("cls");
				cout<<"Rectangle Selected\n\n";
				cout<<"Enter Length :  ";cin>>a;
				cout<<"Enter Width  :  ";cin>>b;
				R.setLength(a);
				R.setWidth(b);
				cout<<endl<<"Area is  :  "<<R.area();
				cout<<endl<<"Perim is :  "<<R.perim()<<"\n\n";
				system("pause");
			}
			break;
		case 2:  //  Triangle
			{
				system("cls");
				cout<<"Triangle Selected\n\n";
				cout<<"Enter rule     :  ";cin>>a;
				cout<<"Enter altitude :  ";cin>>b;
				T.setRule(a);
				T.setAltitude(b);
				cout<<endl<<"Area is  :  "<<T.area();
				cout<<endl<<"Perim is :  "<<T.perim()<<"\n\n";
				system("pause");
			}
			break;
		case 3:  //  Circle
			{
				system("cls");
				cout<<"Circle Selected\n\n";
				cout<<"Enter radius     :  ";cin>>c;
				C.setRadius(c);
				cout<<endl<<"Area is  :  "<<C.area();
				cout<<endl<<"Perim is :  "<<C.perim()<<"\n\n";
				system("pause");
			}
			break;
		}

	} while (funcNum!=0);
}
//  Finish Project > *92-8-5*  *23:57*  \\
