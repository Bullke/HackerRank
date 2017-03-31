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

struct Node
{
    int data;
    Node *next;
};

void Print(Node* head)
{
    Node* current = head;
    while(current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int GetNode(Node *head,int positionFromTail)
{
    int count = 0;
    Node* current = head;
    Node* result = head;
    while(current != NULL)
    {
        current=current->next;
        if (count++ > positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
}

int main()
{
    int t;
    cin>>t;
    while(t-- >0)
    {
        
        int x; cin>>x;
        Node *head = NULL;
        while(x--)
        {
            
            int y;cin>>y;
            head = Insert(head,y);
        }
        Print(head);
        free(head);
    }
    
}