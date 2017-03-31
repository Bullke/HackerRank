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
#include </Users/nenvy/Desktop/HackerRank/HackerRank/stdc++.h>

using namespace std;

class Spell
{
private:
    string scrollName;
public:
    Spell(): scrollName("")
    {
    }
    Spell(string name): scrollName(name)
    {
    }
    virtual ~Spell()
    {
    }
    string revealScrollName()
    {
        return scrollName;
    }
};

class Fireball : public Spell
{
private: int power;
public:
    Fireball(int power): power(power)
    {
    }
    void revealFirepower()
    {
        cout << "Fireball: " << power << endl;
    }
};

class Frostbite : public Spell
{
private: int power;
public:
    Frostbite(int power): power(power)
    {
    }
    void revealFrostpower()
    {
        cout << "Frostbite: " << power << endl;
    }
};

class Thunderstorm : public Spell
{
private: int power;
public:
    Thunderstorm(int power): power(power)
    {
    }
    void revealThunderpower()
    {
        cout << "Thunderstorm: " << power << endl;
    }
};

class Waterbolt : public Spell
{
private: int power;
public:
    Waterbolt(int power): power(power)
    {
    }
    void revealWaterpower()
    {
        cout << "Waterbolt: " << power << endl;
    }
};

class SpellJournal
{
public:
    static string journal;
    static string read()
    {
        return journal;
    }
};

string SpellJournal::journal = "";

void counterspell(Spell *spell)
{
    Fireball* fire = dynamic_cast<Fireball*>(spell);
    if (fire != NULL)
    {
        fire->revealFirepower();
        return;
    }
    
    Frostbite* frost = dynamic_cast<Frostbite*>(spell);
    if (frost != NULL)
    {
        frost->revealFrostpower();
        return;
    }
    
    Thunderstorm* thunder = dynamic_cast<Thunderstorm*>(spell);
    if (thunder != NULL)
    {
        thunder->revealThunderpower();
        return;
    }
    
    Waterbolt* water = dynamic_cast<Waterbolt*>(spell);
    if (water != NULL)
    {
        water->revealWaterpower();
        return;
    }
    
    string journal = SpellJournal::journal;
    string initSpell = spell->revealScrollName();
    
    int width = journal.length();
    int length = initSpell.length();
    
    int wordMatrix[width+1][length+1];
    
    //  spell = AquaVitae  journal = AruTaVae
    
    for(int i = 0; i <= width; i++)
    {
        for(int j = 0; j <= length; j++)
        {
            if((i == 0) || (j == 0))
            {
                wordMatrix[i][j] = 0;
            }
            else if(journal[i-1] == initSpell[j-1])
            {
                wordMatrix[i][j] = wordMatrix[i-1][j-1] + 1;
            }
            else
            {
                wordMatrix[i][j] = max(wordMatrix[i-1][j], wordMatrix[i][j-1]);
            }
        }
    }
    cout << wordMatrix[width][length] << "\n";
}

class Wizard
{
public:
    Spell *cast()
    {
        Spell *spell;
        string s; cin >> s;
        int power; cin >> power;
        if(s == "fire")
        {
            spell = new Fireball(power);
        }
        else if(s == "frost")
        {
            spell = new Frostbite(power);
        }
        else if(s == "water")
        {
            spell = new Waterbolt(power);
        }
        else if(s == "thunder")
        {
            spell = new Thunderstorm(power);
        }
        else
        {
            spell = new Spell(s);
            cin >> SpellJournal::journal;
        }
        return spell;
    }
};

int main()
{
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--)
    {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}