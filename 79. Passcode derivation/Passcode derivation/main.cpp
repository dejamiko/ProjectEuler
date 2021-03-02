//
//  main.cpp
//  Passcode derivation
//
//  Created by Mikołaj Deja on 12/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

string numtostring(int x)
{
    string n;
    while(x>0)
    {
        n=(char)(x%10+48)+n;
        x/=10;
    }
    return n;
}

bool check(int x, int y)
{
    string pass=numtostring(x), test=numtostring(y);
    int j=0;
    for(int i=0; i<test.size(); ++i)
    {
        while(pass[j]!=test[i])
        {
            j++;
            if(j>pass.size())
                return false;
        }
    }
    return true;
}



int main() {
    ifstream data("/Users/mikolajdeja/Documents/ComputerScience/Solutions/ProjectEuler/Data/keylog.txt");
    int i=100, testcases[50];
    bool go=true;
    for(int j=0; j<50; ++j)
        data>>testcases[j];
    while(go)
    {
        go=false;
        for(int j=0; j<50 && !go; ++j)
        {
            if(!check(i, testcases[j]))
                go=true;
        }
        i++;
    }
    cout<<--i<<endl;
    return 0;
}
