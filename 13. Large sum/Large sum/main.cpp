//
//  main.cpp
//  Large sum
//
//  Created by Mikołaj Deja on 19/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream nums("/Users/mikolajdeja/Documents/ComputerScience/Solutions/ProjectEuler/Data/numbers.txt");
    char numbers[100][50], answer[60];
    
    for(int i=0; i<100; ++i)
        for(int j=0; j<50; ++j)
            nums>>numbers[i][j];
    for(int j=0; j<60; ++j)
        answer[j]='0';
    int rem=0, sum;
    
    for(int j=49; j>=0; --j)
    {
        sum=0;
        for(int i=0; i<100; ++i)
        {
            sum+=numbers[i][j]-48;
        }
        sum+=rem;
        rem=sum/10;
        answer[j+10]=(char)(sum%10+48);
    }
    
    sum/=10;
    int n=9;
    
    while(sum>0)
    {
        answer[n]=(char)(sum%10+48);
        sum/=10;
        n--;
    }
    
    int counter=10;
    for(int j=0; j<60; ++j)
        if(answer[j]!='0' && counter>0)
        {
            cout<<answer[j];
            counter--;
        }
    cout<<endl;
    return 0;
}
