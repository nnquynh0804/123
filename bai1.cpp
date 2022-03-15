#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int so,a,b,tong=0,tso,dem=0;
	cout << "Nhap vao so can kiem tra : ";cin >> so;
	a=so;
	b=so;
	if(so <=0 )
	{cout << "Moi nhap lai so khac ! \n";}
	else 
	{
	do 
		{
			a=a/10;
			dem++;
	}while(a>0);
	while(so != 0)
	{
		tso = so%10;
		tong = tong + pow(tso,dem);
		so = so/10;
	}
	if(tong==b) 
	{cout << b <<  " la so armstrong\n";}
	else 
	{cout << b << " khong la so armstrong\n";}
	}
}