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
#include <exception>
#include <stdexcept>
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

struct Workshop
{
    long int startTime, duration, endTime;
};

struct Available_Workshops: public Workshop
{
    int n;
    vector<Workshop> workshops = *new vector<Workshop>(n);
};

Available_Workshops* initialize(int start_time[], int duration[], int n)
{
    Available_Workshops* newAvailWorkshops = new Available_Workshops();
    newAvailWorkshops->n = n;
    for(int i=0; i < n; i++)
    {
        Workshop workshops;
        workshops.startTime = start_time[i];
        workshops.duration = duration[i];
        workshops.endTime = workshops.startTime + workshops.duration;
        newAvailWorkshops->workshops.push_back(workshops);
    }
    return newAvailWorkshops;
}
int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    int tempMax = 0;
    sort(ptr->workshops.begin(), ptr->workshops.end(), [](Workshop& first, Workshop& second){return first.endTime < second.endTime;});
    vector<Workshop> result = *new vector<Workshop>();
    for(int i=0; i<ptr->workshops.size(); i++)
    {
        cout << "Start Time: " << ptr->workshops[i].startTime << endl;
        cout << "End Time: " << ptr->workshops[i].endTime << endl;
        cout << "Duration: " << ptr->workshops[i].duration << endl;
    }
    
    for(vector<Workshop>::iterator iter=ptr->workshops.begin(); iter != ptr->workshops.end(); iter++)
    {
        if(iter->startTime >= tempMax)
        {
            result.push_back(*iter);
            tempMax = iter->endTime;
        }
    }
    return result.size();
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];
    
    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }
    
    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    
    return 0;
}

