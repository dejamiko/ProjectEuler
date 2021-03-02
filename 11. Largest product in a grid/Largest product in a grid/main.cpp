//
//  main.cpp
//  Largest product in a grid
//
//  Created by Mikołaj Deja on 19/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int numbers[20][20];
    for(int i=0; i<20; ++i)
        for(int j=0; j<20; ++j)
            cin>>numbers[i][j];
    
    long int mult, max=0;
    for(int i=0; i<20; ++i)
        for(int j=0; j<20; ++j)
        {
            mult=0;
            if(j<16)
                mult=numbers[i][j]*numbers[i][j+1]*numbers[i][j+2]*numbers[i][j+3];
            if(mult>max)
                max=mult;
            if(i<16)
                mult=numbers[i][j]*numbers[i+1][j]*numbers[i+2][j]*numbers[i+3][j];
            if(mult>max)
                max=mult;
            if(j<16 && i<16)
                mult=numbers[i][j]*numbers[i+1][j+1]*numbers[i+2][j+2]*numbers[i+3][j+3];
            if(mult>max)
                max=mult;
            if(j<16 && i>2)
                mult=numbers[i][j]*numbers[i-1][j+1]*numbers[i-2][j+2]*numbers[i-3][j+3];
            if(mult>max)
                max=mult;
        }
    
    cout<<max<<endl;
    
    
    return 0;
}
