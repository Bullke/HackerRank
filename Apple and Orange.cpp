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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    int apples = 0, oranges = 0;
    cin >> m >> n;
    int input;
    //vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++)
    {
        //cin >> apple[apple_i];
        cin >> input;
        if((input >= (s-a)) && (input <= (t-a)))
        {
            apples++;
        }
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++)
    {
        //cin >> orange[orange_i];
        cin >> input;
        if((input*(-1) >= (b-t)) && (input*(-1) <= (b-s)))
        {
            oranges++;
        }
    }
    cout << apples << endl << oranges << endl;;
    return 0;
}