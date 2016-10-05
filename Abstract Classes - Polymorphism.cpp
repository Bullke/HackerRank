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

struct Node
{
    Node* next;
    Node* prev;
    int value;
    int key;
    Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
    Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache
{
protected:
    map<int,Node*> mp; //map the key to the node in the linked list
    int cp;  //capacity
    Node* tail; // double linked list tail pointer
    Node* head; // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0; //get function
};

class LRUCache: public Cache
{
public:
    LRUCache(int capacity): Cache()
    {
        cp = capacity;
        tail = nullptr;
        head = nullptr;
    }
    void set(int newKey, int newValue)
    {
        if(cp <= 0)
        {
            return;
        }
        else if(mp.find(newKey) != mp.end())
        {
            if(mp.size() <= cp)
            {
                Node *currentNode = mp[newKey];
                currentNode->value = newValue;
                moveNodeToHead(currentNode);
            }
            else
            {
                Node *node = tail;
                deleteNode(node);
                mp.erase(node->key);
                delete node;
                Node *newNode = new Node(newKey, newValue);
                moveNodeToHead(newNode);
                mp.insert(pair<int,Node*>(newKey,newNode));
            }
            
        }
        else if(mp.size() < cp)
        {
            Node *newNode = new Node(newKey, newValue);
            moveNodeToHead(newNode);
            mp.insert(pair<int,Node*>(newKey,newNode));
        }
        else
        {
            Node *node = tail;
            deleteNode(node);
            mp.erase(node->key);
            delete node;
            Node *newNode = new Node(newKey, newValue);
            moveNodeToHead(newNode);
            mp.insert(pair<int,Node*>(newKey,newNode));
        }
    }
    int get(int keyRequest)
    {
        if(mp.find(keyRequest) != mp.end())
        {
            return mp[keyRequest]->value;
        }
        return -1;
    }
    
private:
    void deleteNode(Node* node)
    {
        if(!node)
        {
            return;
        }
        if(node->prev)
        {
            node->prev->next = node->next;
        }
        if(node->next)
        {
            node->next->prev = node->prev;
        }
        if(node == head)
        {
            head = node->next;
        }
        if(node == tail)
        {
            tail = node->prev;
        }
    }
    void moveNodeToHead(Node* node)
    {
        if(!node)
        {
            return;
        }
        deleteNode(node);
        if(head)
        {
            head->prev = node;
        }
        node->next = head;
        node->prev = nullptr;
        if(!tail)
        {
            tail = node;
        }
        head = node;
    }
};

int main()
{
    int n, capacity,i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for(i=0;i<n;i++)
    {
        string command;
        cin >> command;
        if(command == "get")
        {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if(command == "set")
        {
            int key, value;
            cin >> key >> value;
            l.set(key,value);
        }
    }
    
    return 0;
}