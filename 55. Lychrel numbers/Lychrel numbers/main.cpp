//
//  main.cpp
//  Lychrel numbers
//
//  Created by Mikołaj Deja on 06/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


unsigned long long int rev(unsigned long long int x)
{
    unsigned long long int sum=0, len=floor(log10(x))+1;
    for(int i=0; i<len; ++i)
    {
        sum+=(x%10)*pow(10, len-1-i);
        x/=10;
    }
    return sum;
}

bool ispalindrome(string x)
{
    long long int len=x.size();
    for(int i=0; i<len/2; ++i)
        if(x[i]!=x[len-1-i])
            return false;
    return true;
}

string numtostring(long long int x)
{
    string n;
    while(x>0)
    {
        n=n+(char)(x%10+48);
        x/=10;
    }
    return n;
}

int main() {
    int counter=0;
    for(int i=196; i<10000; ++i)
    {
        bool lychrel=true;
        unsigned long long int copy=i;
        for(int j=0; j<30 && lychrel; ++j)
        {
            copy=copy+rev(copy);
            if(ispalindrome(numtostring(copy)))
                lychrel=false;
        }
        if(lychrel)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
