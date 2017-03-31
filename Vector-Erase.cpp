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
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

int main()
{
    int length, value, erasePos, begin, end;
    vector<int> eraseVector;
    cin >> length;
    for(int position = 0; position < length; position++)
    {
        cin >> value;
        eraseVector.push_back(value);
    }
    cin >> erasePos;
    eraseVector.erase(eraseVector.begin() + erasePos-1);
    cin >> begin >> end;
    eraseVector.erase(eraseVector.begin() + begin-1, eraseVector.begin() + end-1);
    
    cout << eraseVector.size() << endl;
    for (std::vector<int>::iterator it=eraseVector.begin(); it!=eraseVector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    
    return 0;
}