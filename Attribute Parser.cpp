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
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string input;
    vector<string> hrmlInputs, queryCommands, tagList;
    map<string, string> attributeMap;
    cin.ignore();
    
    for (int i = 0; i < N; i++)
    {
        getline(cin, input);
        hrmlInputs.push_back(input);
    }
    
    for (int j = 0; j < Q; j++)
    {
        getline(cin, input);
        queryCommands.push_back(input);
    }
    
    for (int k = 0; k < N; k++)
    {
        input = hrmlInputs[k];
        input.erase(remove(input.begin(), input.end(), '"'), input.end());
        input.erase(remove(input.begin(), input.end(), '>'), input.end());
        
        if (input.substr(0, 2) == "</")
        {
            tagList.pop_back();
        }
        else
        {
            stringstream inputStream;
            inputStream << input;
            string tag, name, value, newInput;
            char discard;
            inputStream >> discard >> tag >> name >> discard >> value;
            if (tagList.size() > 0)
            {
                newInput = *tagList.rbegin();
                newInput = newInput + "." + tag;
            }
            else
            {
                newInput = tag;
            }
            tagList.push_back(newInput);
            attributeMap[*tagList.rbegin() + "~" + name] = value;
            while (inputStream)
            {
                inputStream >> name >> discard >> value;
                attributeMap[*tagList.rbegin() + "~" + name] = value;
            }
        }
    }
    for (int i = 0; i < Q; i++)
    {
        if (attributeMap.find(queryCommands[i]) == attributeMap.end())
        {
            cout << "Not Found!" << endl;
        }
        else
        {
            cout << attributeMap[queryCommands[i]] << endl;
        }
    }
    
    return 0;
}

