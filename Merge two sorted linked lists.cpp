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

Node* MergeLists(Node *headA, Node* headB)
{
    Node* newNode = new Node();
    newNode->data = 0;
    newNode->next = NULL;
    Node* head = newNode;
    while((headA != NULL) || (headB != NULL))
    {
        if(headA == NULL)
        {
            newNode->data = headB->data;
            headB = headB->next;
        }
        else if(headB == NULL)
        {
            newNode->data = headA->data;
            headA = headA->next;
        }
        else
        {
            if(headA->data > headB->data)
            {
                newNode->data = headB->data;
                headB = headB->next;
            }
            else if(headA->data < headB->data)
            {
                newNode->data = headA->data;
                headA = headA->next;
            }
            else
            {
                newNode->data = headA->data;
                headA = headA->next;
                headB = headB->next;
            }
        }
        if(!(headA == NULL && headB == NULL))
        {
            newNode->next = new Node();
        }
        newNode = newNode->next;
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