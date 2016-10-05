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
#include <exception>
#include <stdexcept>
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template<>
struct Traits<Color>
{
    static string name(int num)
    {
        string enumHolder[3] = {"red", "green", "orange"};
        if((num >= 0) && (num < 3))
        {
            return enumHolder[num];
        }
        else
        {
            return "unknown";
        }
    }
};
template<>
struct Traits<Fruit>
{
    static string name(int num)
    {
        string enumHolder[3] = {"apple", "orange", "pear"};
        if((num >= 0) && (num < 3))
        {
            return enumHolder[num];
        }
        else
        {
            return "unknown";
        }
    }
};

int main()
{
    int t = 0; std::cin >> t;
    
    for (int i=0; i!=t; ++i)
    {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
    
    return 0;
}



/*
Templates are used for generic, type independent programming. Templates are used to declare variable of any valid C++ type. It means that you can declare fuctions of class without initially specifying the type. Like this...
template < typename T >
T fn(T a,T b){
    T temp;
    //function body
    return T;
}
See how you can you declare new variables with the template T. Similarly you can define new classes or structures with templates.
template < typename AnyType >
struct abc{
    AnyType a;
    AnyType func(AnyType x){
        AnyType Temp;
        //function body
        return Temp;
    }
};
But while using function with templates you can simply call them. Like...
string a,b,c;
c=fn(a,b);
However while declaring objects you need to specify the type. Like...
abc< int > a;
int b,c,d;
d=a.func(b,c);
Can you see this looks familiar. Yeah.. "vectors" and "maps" and so on.... they are defined using templates (that is why we call it STL standard template library).
However this problem is about template specialization. We use template specialization when we need the function to behave differently for a specific type. You can read about templates and templates specialization here...
http://www.tutorialspoint.com/cplusplus/cpp_templates.htm
and here also....
http://www.cplusplus.com/doc/tutorial/templates/
And typename is not a thing to worry about you can write class insted of typename if it feels better.
I hope it helped.
*/