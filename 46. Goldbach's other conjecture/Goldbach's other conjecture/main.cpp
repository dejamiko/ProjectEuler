//
//  main.cpp
//  Goldbach's other conjecture
//
//  Created by Mikołaj Deja on 02/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sizeofprimes=1000000, allnumbers[sizeofprimes], sizeofsquares=1000;
    for(int i=0; i<sizeofprimes; ++i)
        allnumbers[i]=i;
    allnumbers[1]=0;
    for(int j=2; j*j<=sizeofprimes; ++j)
        for(int i=0; i<sizeofprimes; ++i)
            if(allnumbers[i]%j==0 && allnumbers[i]!=j)
                allnumbers[i]=0;
    int numberofprimes=0;
    for(int i=0; i<sizeofprimes; i++)
        if(allnumbers[i]!=0)
            numberofprimes++;
    long int primes[numberofprimes];
    numberofprimes=0;
    for(int i=0; i<sizeofprimes; i++)
        if(allnumbers[i]!=0)
        {
            primes[numberofprimes]=allnumbers[i];
            numberofprimes++;
        }
    long long int squares[sizeofsquares];
    for(int i=0; i<sizeofsquares; ++i)
        squares[i]=i*i;
    squares[0]=1;
    
    bool contra=true;
    long long int odd=1;
    while(contra)
    {
        odd+=2;
        for(int j=0; j<numberofprimes; ++j)
            if(primes[j]==odd)
            {
                odd+=2;
                break;
            }
        bool goldbach=false;
        for(int j=0; j<numberofprimes && !goldbach && primes[j]<odd; ++j)
            for(int k=0; k<sizeofsquares && !goldbach && 2*squares[k]<odd; ++k)
                if(odd==primes[j]+2*squares[k])
                    goldbach=true;
        if(!goldbach)
            contra=false;
    }
    cout<<odd<<endl;
    return 0;
}
