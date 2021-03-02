//
//  main.cpp
//  Pandigital multiples
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

int stringtonum(string n)
{
    int sum=0, len=n.size();
    for(int i=0; i<len; ++i)
        sum+=(n[i]-48)*pow(10, len-1-i);
    return sum;
}

bool ispan(string num)
{
    int nums[10];
    for(int i=0; i<10; ++i)
        nums[i]=1;
    for(int i=0; i<10; ++i)
        nums[num[i]-48]--;
    if(nums[0]!=1)
        return false;
    for(int i=1; i<10; ++i)
        if(nums[i]!=0)
            return false;
    return true;
}

int main() {
    long int largest=0;
    for(int i=2; i<9; ++i)
        for(int j=0; j<10000; ++j)
        {
            string num;
            for(int k=1; k<=i; ++k)
                num=num+numtostring(j*k);
            if(ispan(num))
                if(stringtonum(num)>largest)
                    largest=stringtonum(num);
        }
    cout<<largest<<endl;
    return 0;
}
