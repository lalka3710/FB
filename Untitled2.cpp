#include <iostream>
using namespace std;
  
  
int main() 
{
	const int n = 3;
	const int m = 3;
	
	int a[n][n];
	
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout <<"Vvedite elemnt ";
			cin >> a[i][j];
			cout << endl;
			
		}
	}
		for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout <<a[i][j];	
		}
		cout << endl;
		 
	
	} 
	system("pause");
	return 0;
}
