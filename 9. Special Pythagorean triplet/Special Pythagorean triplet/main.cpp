//
//  main.cpp
//  Special Pythagorean triplet
//
//  Created by Mikołaj Deja on 18/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n=1000, c;
    bool go=true;
    for(int a=1; a<=n/3 && go; ++a)
        for(int b=1; b<=n/2 && go; ++b)
        {
            c=n-a-b;
            if(pow(c,2)==pow(a,2)+pow(b,2))
            {
                cout<<a*b*c<<endl;
                go=false;
            }
        }
    return 0;
}
