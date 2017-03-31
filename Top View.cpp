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

void top_view(node* root)
{
    static int count=0;
    
    if (root->left && (count >= 0))
    {
        count++;
        top_view(root->left);
        
    }
    
    printf("%d ", root->data);
    count--;
    
    if (root->right && (count < 0))
    {
        count--;
        top_view(root->right);
    }
/*
    left_view(root->left);
    cout << root->data << " ";
    right_view(root->right);
}

void left_view(node* root)
{
    if (!root)
    {
        return;
    }
    left_view(root->left);
    cout << root->data << " ";
}

void right_view(node* root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    right_view(root->right);
}
*/
}

int main()
{
    return 0;
}