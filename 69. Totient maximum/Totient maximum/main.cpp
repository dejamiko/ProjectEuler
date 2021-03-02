//
//  main.cpp
//  Totient maximum
//
//  Created by Mikołaj Deja on 12/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int p(int n)
{
    float result = n;
    for(int p=2; p*p<=n; ++p)
    {
        if(n%p==0)
        {
            while(n%p == 0)
                n/=p;
            result*=(1.0-(1.0/(float)p));
        }
    }
    if(n>1)
        result*=(1.0-(1.0/(float)n));
    return (int)result;
}


int main() {
    double max=0;
    int number;
    for(int n=2; n<1000000; ++n)
    {
        int phi=p(n);
        if((float)n/(float)phi>max)
        {
            max=(float)n/(float)phi;
            number=n;
        }
    }
    cout<<number<<endl;
    return 0;
}
