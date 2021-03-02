//
//  main.cpp
//  Digit fifth powers
//
//  Created by Mikołaj Deja on 28/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long int sumgl=0;
    for(int long i=2; i<6*pow(9, 5); ++i)
    {
        long int sum=0, t=i;
        while(t>0)
        {
            int n=t%10;
            sum+=pow(n, 5);
            t/=10;
        }
        if(sum==i)
            sumgl+=i;
    }
    cout<<sumgl<<endl;
    return 0;
}
