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

using namespace std;

class Student
{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int newAge)
        {
            age = newAge;
        }
        int get_age()
        {
            return age;
        }
        void set_first_name(string newFirstName)
        {
            first_name = newFirstName;
        }
        string get_first_name()
        {
            return first_name;
        }
        void set_last_name(string newLastName)
        {
            last_name = newLastName;
        }
        string get_last_name()
        {
            return last_name;
        }
        void set_standard(int newStandard)
        {
            standard = newStandard;
        }
        int get_standard()
        {
            return standard;
        }
        string to_string()
        {
            stringstream output;
            string temp;
            output << age << "," << first_name << "," << last_name << "," << standard;
            temp = output.str();
            return temp;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

