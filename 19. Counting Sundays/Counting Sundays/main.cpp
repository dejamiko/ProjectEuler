//
//  main.cpp
//  Counting Sundays
//
//  Created by Mikołaj Deja on 22/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int months[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, monthsleap[]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, year=1900, days=0, sundays=0, copymon[12];
    while(year<2001)
    {
        bool leap=false;
        if((year%4==0 && year%100!=0) || year%400==0)
            for(int i=0; i<12; ++i)
            {
                copymon[i]=monthsleap[i];
                leap=true;
            }
        else
            for(int i=0; i<12; ++i)
                copymon[i]=months[i];
        for(int i=0; i<12; ++i)
        {
            while(copymon[i]>0)
            {
                if(leap)
                {
                    if(copymon[i]==monthsleap[i] && days%7==6 && year>=1901)
                        sundays++;
                }
                else
                    if(copymon[i]==months[i] && days%7==6 && year>=1901)
                        sundays++;
                copymon[i]--;
                days++;
            }
        }
        year++;
    }
    cout<<sundays<<endl;
    return 0;
}
