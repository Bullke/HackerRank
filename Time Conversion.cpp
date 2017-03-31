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
    string time;
    cin >> time;
    if((time[8] == 'A') && ((time[0] == '1') && (time[1] == '2')))
    {
        time[0] = '0';
        time[1] = '0';
    }
    else if(time[8] == 'P')
    {
        if(!((time[0] == '1') && (time[1] == '2')))
        {
            time[0] =(char)((int)time[0] + 1);
            time[1] =(char)((int)time[1] + 2);
        }
    }
    time.erase(8,2);
    cout << time;
    return 0;
}