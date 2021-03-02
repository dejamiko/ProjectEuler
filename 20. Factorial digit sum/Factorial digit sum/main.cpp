//
//  main.cpp
//  Power digit sum
//
//  Created by Mikołaj Deja on 22/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int m=100;
    char numb[500];
    long int sum=0;
    for(int i=0; i<500; ++i)
        numb[i]='0';
    numb[499]=1+48;
    for(int i=1; i<m; ++i)
    {
        int rem=0, n;
        for(int j=499; j>=0; --j)
        {
            n=(i*(numb[j]-48)+rem)/10;
            numb[j]=(i*(numb[j]-48)+rem)%10+48;
            rem=n;
        }
    }
    for(int i=0; i<500; ++i)
        sum+=numb[i]-48;
    cout<<sum<<endl;
    return 0;
}
