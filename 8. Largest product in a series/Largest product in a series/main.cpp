//
//  main.cpp
//  Largest product in a series
//
//  Created by Mikołaj Deja on 18/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char number[1000];
    int k=0, n=13;
    long long mult, max=0;
    while(k<1000)
    {
        cin>>number[k];
        if(number[k]<='9' && number[k]>='0')
            k++;
    }
    for(int i=0; i<1000-n; ++i)
    {
        mult=1;
        for(int j=0; j<n; ++j)
            mult*=number[i+j]-48;
        if(mult>max)
            max=mult;
    }
    cout<<max<<endl;
    return 0;
}
