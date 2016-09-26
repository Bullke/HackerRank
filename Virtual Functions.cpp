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

class Person
{
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
protected:
    string name;
    int age;
};

class Professor : public Person
{
public:
    Professor()
    {
        id++;
    }
    
    void getdata()
    {
        cin >> name >> age >> publication;
    }
    
    void putdata()
    {
        cout << name << " " << age << " " << publication << " " << cur_ << endl;
    }
private:
    int publication;
    int cur_{id};
    static int id;
};

class Student : public Person
{
public:
    Student()
    {
        id++;
    }
    
    void getdata()
    {
        cin >> name >> age;
        for (int i=0; i<6; i++)
        {
            cin >> marks[i];
        }
    }
    
    void putdata()
    {
        int sum = 0;
        for (int i=0; i<6; i++)
        {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_ << endl;
    }
protected:
    int marks[6];
    int cur_{id};
    static int id;
};
int Professor::id = 1;

int Student::id = 1;

int main()
{
    
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    
    for(int i = 0;i < n;i++)
    {
        
        cin>>val;
        if(val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
            
        }
        else per[i] = new Student; // Else the current object is of type Student
        
        per[i]->getdata(); // Get the data from the user.
        
    }
    
    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    
    return 0;
    
}

