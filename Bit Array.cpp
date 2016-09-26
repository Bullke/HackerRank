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

using namespace std;

//constexpr unsigned int modulo {1u << 31};

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();
    
    unsigned int modulo {1u << 31};
    unsigned int N, S, P, Q, tracker = 1;
    
    cin >> N >> S >> P >> Q;
    
    unsigned long value {S % modulo};
    vector<bool> distinctBool(modulo);
    
    distinctBool[value] = true;
    
    for(unsigned int position = 1; position < N; position++)
    {
        value = ((value*P+Q)%modulo);
        if(distinctBool[value] == false)
        {
            tracker++;
            distinctBool[value] = true;
        }
    }
    cout << tracker;
    return 0;
}