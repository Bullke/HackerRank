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

Node* InsertNth(Node *head, int data, int position)
{
    Node* current = head;
    Node* previous = head;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(current == NULL)
    {
        head = newNode;
    }
    else
    {
        if(position == 0)
        {
            newNode->next = current;
            head = newNode;
        }
        else
        {
            while(position > 0)
            {
                if(current == NULL)
                {
                    break;
                }
                previous = current;
                current = current->next;
                position--;
            }
            previous->next = newNode;
            newNode->next = current;
        }
    }
    return head;
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