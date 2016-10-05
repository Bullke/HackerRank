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
#include <array>
#include <numeric>
#include <string>
#include <functional>
#include <sstream>
#include <cassert>

using namespace std;

int BoxesCreated,BoxesDestroyed;

class Box
{
    public:
        Box()
    {
        l = 0, b = 0, h = 0;
        BoxesCreated++;
    }
    Box(int length, int breadth, int height)
    {
        l = length, b = breadth, h = height;
        BoxesCreated++;
    }
    Box(Box const &B)
    {
        l = B.l, b = B.b, h = B.h;
        BoxesCreated++;
    }
    ~Box()
    {
        l = 0, b = 0, h = 0;
        BoxesDestroyed++;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    bool operator<(Box &b)
    {
        return ((this->l < b.l) || ((this->b < b.b) && (this->l == b.l)) || ((this->h < b.h) && (this->b == b.b) && (this->l == b.l)));
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    friend ostream& operator<<(ostream& out, const Box B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
    
    private:
        int l, b, h;
};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser"<<endl;
            }
            else
            {
                cout<<"Greater"<<endl;
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }
        
    }
}

int main()
{
    BoxesCreated = 0;
    BoxesDestroyed = 0;
    check2();
    cout<<"Boxes Created : "<<BoxesCreated<<endl<<"Boxes Destroyed : "<<BoxesDestroyed<<endl;
    
    return 0;
}

