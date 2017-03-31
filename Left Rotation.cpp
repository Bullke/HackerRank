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
    int n, d, value;
    cin >> n >> d;
    int leftRot[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> value;
        leftRot[(i+n-d)%n] = value;
    }
    
    for(int l = 0; l < n; l++)
    {
        cout << leftRot[l] << " ";
    }
    
    return 0;
}

