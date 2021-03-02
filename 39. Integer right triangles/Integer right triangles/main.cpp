//
//  main.cpp
//  Integer right triangles
//
//  Created by Mikołaj Deja on 31/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int solutions, max=0, p=0;
    for(int i=1; i<=1000; ++i)
    {
        solutions=0;
        for(int j=1; j<=i/2; ++j)
            for(int k=1; k<=j; ++k)
                if(pow(i-j-k, 2)==pow(j,2)+pow(k,2))
                   solutions++;
        if(solutions>max)
        {
            max=solutions;
            p=i;
        }
    }
    cout<<p<<endl;
    return 0;
}
