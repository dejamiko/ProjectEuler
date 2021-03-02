//
//  main.cpp
//  Number spiral diagonals
//
//  Created by Mikołaj Deja on 25/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int size=1001;
    long int nums[size][size], sum=0;
    int dir=1, step=1, i=(size-1)/2, j=(size-1)/2, number=1;
    nums[i][j]=number++;
    while(step<size)
    {
        if(dir==1)
            for(int k=0; k<step; ++k)
                nums[++i][j]=number++;
        if(dir==2)
            for(int k=0; k<step; ++k)
                nums[i][++j]=number++;
        if(dir==3)
            for(int k=0; k<step; ++k)
                nums[--i][j]=number++;
        if(dir==0)
            for(int k=0; k<step; ++k)
                nums[i][--j]=number++;
        dir=(dir+1)%4;
        if(dir==1)
            for(int k=0; k<step; ++k)
                nums[++i][j]=number++;
        if(dir==2)
            for(int k=0; k<step; ++k)
                nums[i][++j]=number++;
        if(dir==3)
            for(int k=0; k<step; ++k)
                nums[--i][j]=number++;
        if(dir==0)
            for(int k=0; k<step; ++k)
                nums[i][--j]=number++;
        dir=(dir+1)%4;
        step++;
    }
    step--;
    for(int k=0; k<step; ++k)
        nums[++i][j]=number++;
    for(int k=0; k<size; ++k)
    {
        sum+=nums[k][k];
        sum+=nums[size-1-k][k];
    }
    sum-=1;
    cout<<sum<<endl;
    return 0;
}
