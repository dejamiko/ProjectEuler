//
//  main.cpp
//  Square digit chains
//
//  Created by Mikołaj Deja on 08/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int count89=0;
    for(int i=1; i<10000000; ++i)
    {
        long int x=i;
        while(x!=1 && x!=89)
        {
            long int sum=0, copy=x;
            while(copy>0)
            {
                sum+=pow(copy%10, 2);
                copy/=10;
            }
            x=sum;
        }
        if(x==89)
            count89++;
    }
    cout<<count89<<endl;
    return 0;
}
