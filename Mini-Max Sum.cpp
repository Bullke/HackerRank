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
    long int input;
    long long int min = INT32_MAX, max = INT32_MIN, sum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%li", &input);
        if(max < input)
        {
            max = input;
        }
        if(min > input)
        {
            min = input;
        }
        sum += input;
    }
    printf("%lli %lli", (sum - max), (sum - min));
    
    return 0;
}