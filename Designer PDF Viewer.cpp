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
    int n = 26, sum = 0, max = 0, tempMax = 0;
    vector<int> h(n);
    for(int h_i = 0; h_i < n; h_i++)
    {
        cin >> h[h_i];
    }
    string word;
    cin >> word;
    for(int j = 0; j < word.length(); j++)
    {
        tempMax = (h[(int)word[j]-97]);
        if(tempMax > max)
        {
            max = tempMax;
        }
    }
    sum = word.length() * max;
    cout << sum;
    return 0;
}