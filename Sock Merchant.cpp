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
    int n, input, pairs = 0;
    int colorArray[100] = {0};
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        colorArray[input]++;
        if((colorArray[input] % 2) == 0)
        {
            pairs++;
        }
        //cout << colorArray[input] << " " << pairs << endl;
    }
    cout << pairs;
    
    return 0;
}