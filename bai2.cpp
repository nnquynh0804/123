#include<iostream>
using namespace std;
int main()
{
	for(int i=9;i<=25;i++)
		{
			if((i*2+(36-i)*4)==100)
				{
					cout << "So cho la " << 36-i << endl;
					cout << "So ga la " << i << endl;
					break;
				}
		}
	
	
}