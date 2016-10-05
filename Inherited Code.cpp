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
#include <exception>

using namespace std;

class BadLengthException: public exception
{
    int num;
public:
    BadLengthException(int num)
    {
        this->num = num;
    }
    int what()
    {
        return num;
    }
};

bool checkUsername(string username)
{
    bool isValid = true;
    int n = username.length();
    if(n < 5)
    {
        throw BadLengthException(n);
    }
    for(int i = 0; i < n-1; i++)
    {
        if(username[i] == 'w' && username[i+1] == 'w')
        {
            isValid = false;
        }
    }
    return isValid;
}

int main()
{
    int T; cin >> T;
    while(T--)
    {
        string username;
        cin >> username;
        try
        {
            bool isValid = checkUsername(username);
            if(isValid)
            {
                cout << "Valid" << '\n';
            }
            else
            {
                cout << "Invalid" << '\n';
            }
        }
        catch (BadLengthException e)
        {
            cout << "Too short: " << e.what() << '\n';
        }
    }
    return 0;
}

