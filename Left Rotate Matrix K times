#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int row, col, k;
        cin>>row>>col>>k;
        int a[row][col];
        int b[row][col];
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
                cin>>a[i][j];
        }

        //int r = k%col;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
                b[i][j] = a[i][(j + k)%col];
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col ; j++)
                cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
