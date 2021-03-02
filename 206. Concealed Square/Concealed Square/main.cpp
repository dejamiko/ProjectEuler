//
//  main.cpp
//  Concealed Square
//
//  Created by Mikołaj Deja on 08/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isconcealed(unsigned long long x)
{
    int len=floor(log10(x))+1;
    char num[len];
    for(int i=0; i<len; ++i)
    {
        num[i]=x%10+48;
        x/=10;
    }
    if(num[18]=='1' && num[16]=='2' && num[14]=='3' && num[12]=='4' && num[10]=='5' && num[8]=='6' && num[6]=='7' && num[4]=='8' && num[2]=='9' && num[0]=='0')
        return true;
    return false;
}

int main() {
    unsigned long long int x=1000000000;
    bool go=1;
    while(go)
    {
        x+=10;
        if(isconcealed(x*x))
            go=false;
        if(x*x>1929394959697989990)
            break;
    }
    cout<<x<<endl;
    return 0;
}
