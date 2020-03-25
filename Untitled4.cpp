#include<iostream>
using namespace std;

int row,col;
int i;
int j;

void printMat(int a[])
{
for(int i=0; i<row; ++i)
{
for(int j=0; j<col; ++j)
{
cout<<a[i][j]<<" ";
}
}
}

int main()
{
cin>>row;
cin>>col;

int mat[row][col];

for(int i=0; i<row; ++i)
{
for(int j=0; j<col; ++j)
{
cin>>mat[i][j];
}
}

printMat(mat);

return 0;
}
