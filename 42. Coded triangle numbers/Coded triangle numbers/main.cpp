//
//  main.cpp
//  Coded triangle numbers
//
//  Created by Mikołaj Deja on 01/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream words("/Users/mikolajdeja/Documents/ComputerScience/Solutions/ProjectEuler/Data/words.txt");
    int size=1000, trian[size], counter=0, num=1786;
    for(int i=0; i<size; i++)
        trian[i]=i*(i+1)/2;
    string word[num];
    for(int i=0; i<num; ++i)
        getline(words, word[i], ',');
    for(int i=0; i<num; ++i)
    {
        string t;
        for(int j=1; j<word[i].size()-1; ++j)
            t+=word[i][j];
        word[i]=t;
    }
    int temp;
    for(int i=0; i<num; ++i)
    {
        temp=0;
        for(int j=0; j<word[i].size(); ++j)
            temp+=word[i][j]-'A'+1;
        for(int j=0; j<size; ++j)
        {
            if(trian[j]==temp)
                counter++;
            if(trian[j]>temp)
                break;
        }
    }
    cout<<counter<<endl;
    return 0;
}
