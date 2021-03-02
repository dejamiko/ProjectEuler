//
//  main.cpp
//  Distinct primes factors
//
//  Created by Mikołaj Deja on 04/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int distinctprimefactors(long int x)
{
    int num=0;
    for(int i=2; i<=x; ++i)
    {
        bool yes=false;
        while(x%i==0)
        {
            x/=i;
            yes=true;
        }
        if(yes)
            num++;
    }
    return num;
}

int main() {
    bool go=true;
    int x=644;
    while(go)
    {
        x++;
        if(distinctprimefactors(x)==4 && distinctprimefactors(x+1)==4 && distinctprimefactors(x+2)==4 && distinctprimefactors(x+3)==4)
            go=false;
    }
    cout<<x<<endl;
    return 0;
}
