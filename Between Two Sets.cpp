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
#include <map>
#include <set>
#include <exception>
#include <stdexcept>
#include <iomanip>
#include <deque>
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <bitset>
#include <limits>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <unordered_map>

using namespace std;

int gcd(int first, int second)
{
    while (second > 0)
    {
        int temp = second;
        second = first % second;
        first = temp;
    }
    return first;
}

int gcd(int input[], int m)
{
    int result = input[0];
    for (int i = 1; i < m; i++)
    {
        result = gcd(result, input[i]);
    }
    return result;
}

int lcm(int first, int second)
{
    return (first * (second / gcd(first, second)));
}

int lcm(int input[], int n)
{
    int result = input[0];
    for (int i = 1; i < n; i++)
    {
        result = lcm(result, input[i]);
    }
    return result;
}

int main()
{
    int n, m, count = 0, least = 0, greatest = 0;
    
    cin >> n >> m;
    
    int A[n], B[m];
    
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    for(int j = 0; j < m; j++)
    {
        cin >> B[j];
    }
    
    least = lcm(A, n);
    greatest = gcd(B, m);
    
    for(int k = least, j = 2; k <= greatest; k = least*j, j++)
    {
        if((greatest % k) == 0)
        {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}