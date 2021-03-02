//
//  main.cpp
//  Combinatoric selection
//
//  Created by Mikołaj Deja on 05/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long double ans, counter=0;
    for(double n=1; n<=100; n+=1)
        for(double r=1; r<=n; r+=1)
        {
            double copy=r;
            ans=1;
            if(n-copy<copy)
                copy=n-copy;
            while(copy>0)
            {
                ans*=n-copy+1;
                ans/=copy;
                copy--;
            }
            if(ans>1000000)
                counter++;
        }
    cout<<counter<<endl;
    return 0;
}
