//
//  main.cpp
//  Names scores
//
//  Created by Mikołaj Deja on 23/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream namesunsorted("/Users/mikolajdeja/Documents/ComputerScience/Solutions/ProjectEuler/Data/names.txt");
    string names[5163];
    for(int i=0; i<5163; ++i)
        getline(namesunsorted, names[i], ',');
    sort(names, names+5163);
    for(int i=0; i<5163; ++i)
    {
        string t;
        for(int j=1; j<names[i].size()-1; ++j)
            t+=names[i][j];
        names[i]=t;
    }
    long long int sum=0, temp;
    for(int i=0; i<5163; ++i)
    {
        temp=0;
        for(int j=0; j<names[i].size(); ++j)
            temp+=names[i][j]-'A'+1;
        sum+=(i+1)*temp;
    }
    cout<<sum<<endl;
    return 0;
}
