//
//  main.cpp
//  Champernowne's constant
//
//  Created by Mikołaj Deja on 31/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
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

int main() {
    string chap;
    int d=1, num=1;
    while(d<=1000000)
    {
        chap=chap+numtostring(num);
        d+=log10(num)+1;
        num++;
    }
    cout<<(chap[0]-48)*(chap[9]-48)*(chap[99]-48)*(chap[999]-48)*(chap[9999]-48)*(chap[99999]-48)*(chap[999999]-48)<<endl;
    return 0;
}
