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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0; arr_i < 6; arr_i++)
    {
        for(int arr_j = 0; arr_j < 6; arr_j++)
        {
            cin >> arr[arr_i][arr_j];
        }
    }
    
    int tempSum = 0;
    int maxSum = 0;
    bool first = false;
    
    for(int height = 0; height < 4; height++)
    {
        for(int width = 0; width < 4; width++)
        {
            for(int i = width; i < width+3; i++)
            {
                tempSum += arr[height][i];
                tempSum += arr[height+2][i];
            }
            tempSum += arr[height+1][width+1];
            if(!first)
            {
                maxSum = tempSum;
                first = true;
            }
            else if(tempSum > maxSum)
            {
                maxSum = tempSum;
            }
            tempSum = 0;
        }
    }
    
    cout << maxSum;
    
    return 0;
}
