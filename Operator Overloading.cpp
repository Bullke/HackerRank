//
//  HackerRank.cpp
//  HackerRank
//
//  Created by Nenvy on 9/15/16.
//  Copyright © 2016 Nenad Bulicic. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix
{
public:
    vector<vector<int> > a;
    
    Matrix operator+(const Matrix &right)
    {
        for(int width=0; width<right.a.size(); width++)
        {
            for(int height=0; height<right.a[0].size(); height++)
            {
                a[width][height] = this->a[width][height] + right.a[width][height];
            }
        }
        return *this;
    }
};

int main ()
{
    int cases,k;
    cin >> cases;
    for(k=0;k<cases;k++)
    {
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            vector<int> b;
            int num;
            for(j=0;j<m;j++)
            {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for(i=0;i<n;i++)
        {
            vector<int> b;
            int num;
            for(j=0;j<m;j++)
            {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }  
    return 0;
}

