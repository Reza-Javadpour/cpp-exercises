//  By Reza Javadpour
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	const int stackSize=10;
	int i;
	int funcNum;
	int stack [stackSize]={2,3,5,7};
	int top=3;
menu:
	system("pause");
	system("cls");
	system("color 5f");
	//		Request :
	cout<<endl<<"\tEnter (1) =   Push"
		<<"\n\tEnter (2) =   Pop"
		<<"\n\tEnter (3) =   Show Stack items"
		<<"\n\tEnter (4) =   Quit"
		<<"\n\nEnter here >>  ";
	//---------------
	cin>>funcNum;
	system("cls");
	switch (funcNum)
	{
		case 1:	//	Push
			{
				if (top == stackSize-1)
			{
				cout<<"Stack is full\n";
				system("color cf");
			}
				else
			{
				top+=1;
				cout<<"Enter a value : ";
				cin>>stack[top];
				cout<<"\nPush "<<stack[top]<<" in "<<top<<endl;
			}
			}
			break;
		case 2:	//	Pop
			{
				if (top == -1)
			{
				cout<<"Stack is empty\n";
				system("color a0");
			}
				else
			{
				cout<<stack[top]<<" from "<<top<<" clear"<<endl;
				stack[top]=0;
				top-=1;
			}
			}
			break;
		case 3: //	Show Satck :
			{
			for(int pointer=top,i=stackSize-1;i>=0;i--,pointer++)
			{
				cout<<"-----"<<endl;
				cout<<"| "<<stack[i]<<" |";
				if (pointer==stackSize-1)
					cout<<" << Top";
				cout<<endl;
			}
			cout<<"-----"<<endl;
			}
			break;
		case 4:
			exit(1);
	}
	goto menu;
	getch();
}
//left
