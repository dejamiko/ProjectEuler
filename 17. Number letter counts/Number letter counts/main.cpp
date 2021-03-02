//
//  main.cpp
//  Number letter counts
//
//  Created by Mikołaj Deja on 20/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int let[]={0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8}, sum=0, tens[]={0, 6, 6, 5, 5, 5, 7, 6, 6};
    
    for(int i=0; i<20; ++i)
        sum+=let[i];
    
    for(int i=20; i<100; ++i)
        sum+=tens[i/10-1]+let[i%10];
    
    for(int i=100; i<1000; ++i)
    {
        if(i%100<20)
            sum+=let[i/100]+3+let[i%100]+7;
        else
            sum+=let[i/100]+3+tens[(i/10)%10-1]+let[i%10]+7;
    }
    sum+=11;            //one thousand
    sum-=27;            //'and' when even hundreds shouldn't be counted
    cout<<sum<<endl;
    return 0;
}
