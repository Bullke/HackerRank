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
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    std::deque<int> maxValueDeque(k);
    
    int position = 0;
    for (; position < k; ++position)
    {
        while ( (!maxValueDeque.empty()) && arr[position] >= arr[maxValueDeque.back()])
        {
            maxValueDeque.pop_back();
        }
        maxValueDeque.push_back(position);
    }
    
    for (; position < n; ++position)
    {
        printf("%d ", arr[maxValueDeque.front()]);
        
        while ( (!maxValueDeque.empty()) && maxValueDeque.front() <= position - k)
        {
            maxValueDeque.pop_front();
        }
        
        while ( (!maxValueDeque.empty()) && arr[position] >= arr[maxValueDeque.back()])
        {
            maxValueDeque.pop_back();
        }
        
        maxValueDeque.push_back(position);
    }
    printf("%d \n", arr[maxValueDeque.front()]);
}
int main()
{
    
    int t;
    scanf ("%d",&t);
    while(t>0) {
        int n,k;
        scanf ("%d %d",&n,&k);
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}