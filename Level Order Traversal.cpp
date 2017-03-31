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

class node
{
public:
    int data;
    node *left;
    node *right;
};

void LevelOrder(node * root)
{
    queue<node*> nodeQueue;
    node *temp = root;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            nodeQueue.push(temp->left);
        }
        if(temp->right)
        {
            nodeQueue.push(temp->right);
        }
        
        temp = nodeQueue.front();
        nodeQueue.pop();
    }
}

int main()
{
    return 0;
}