#include<iostream>
using namespace std;
void show(int[][10], int, int);
int main()
{
    int arr[10][10];
    int r, c, i, j;
    cout<<"Enter dimensions of array-\n";
    cout<<"Enter no. of rows (max.10):";
    cin>>r;
    cout<<"Enter no. of columns (max.10):";
    cin>>c;
    cout<<"Enter the elements of array(row-major order):\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            cin>>arr[i][j];
    }
    show(arr,r,c);
    return 0;
}
void show(int a[][10], int row, int col)
{
    int i, j;
    cout<<"The array is:\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
