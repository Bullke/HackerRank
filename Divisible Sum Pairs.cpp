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

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n], m[k];
    
    for(int i = 0; i < k; i++)
    {
        m[i] = 0;
    }
    
    for(int j = 0; j < n; j++)
    {
        cin >> a[j];
        m[a[j] % k]++;
    }
    
    sum += ((m[0] * (m[0]-1)) / 2);
    
    for(int l = 1; (l <= k / 2) && (l != (k - l)); l++)
    {
        sum += m[l] * m[k-l];
    }
    
    if((k % 2) == 0)
    {
        sum += ((m[k/2] * (m[k/2] - 1)) / 2);
    }
    
    cout << sum << endl;
    return 0;
}