//
//  main.cpp
//  Double-base palindromes
//
//  Created by Mikołaj Deja on 30/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool ispalindrome(string x)
{
    long int len=x.size();
    for(int i=0; i<len/2; ++i)
        if(x[i]!=x[len-1-i])
            return false;
    return true;
}

string numtostring(int x)
{
    string n;
    while(x>0)
    {
        n=n+(char)(x%10+48);
        x/=10;
    }
    return n;
}

string bin(int x)
{
    string n;
    while(x>0)
    {
        n=n+(char)(x%2+48);
        x/=2;
    }
    return n;
}

int main() {
    long int sum=0;
    for(int i=0; i<1000000; ++i)
        if(ispalindrome(numtostring(i)) && ispalindrome(bin(i)))
            sum+=i;
    cout<<sum<<endl;
    return 0;
}
