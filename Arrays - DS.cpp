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
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
    }
    
    int front = 0;
    int end = arr.size()-1;
    int temp;
    
    while (end > front)
    {
        temp = arr[front];
        arr[front] = arr[end];
        arr[end] = temp;
        front++;
        end--;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
