//
//  main.cpp
//  Lexicographic permutations
//
//  Created by Mikołaj Deja on 24/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace::std;

char nums[1000001][10];

int main() {
    int a=0;
    for(int l1=0; l1<10 && a<1000001; l1++)
        for(int l2=0; l2<10 && a<1000001; l2++)
            for(int l3=0; l3<10 && a<1000001; l3++)
                for(int l4=0; l4<10 && a<1000001; l4++)
                    for(int l5=0; l5<10 && a<1000001; l5++)
                        for(int l6=0; l6<10 && a<1000001; l6++)
                            for(int l7=0; l7<10 && a<1000001; l7++)
                                for(int l8=0; l8<10 && a<1000001; l8++)
                                    for(int l9=0; l9<10 && a<1000001; l9++)
                                        for(int l10=0; l10<10 && a<1000001; l10++)
                                        {
                                            if(l1!=l2 && l1!=l3 && l1!=l4 && l1!=l5 && l1!=l6 && l1!=l7 && l1!=l8 && l1!=l9 && l1!=l10 && l2!=l3 && l2!=l4 && l2!=l5 && l2!=l6 && l2!=l7 && l2!=l8 && l2!=l9 && l2!=l10 && l3!=l4 && l3!=l5 && l3!=l6 && l3!=l7 && l3!=l8 && l3!=l9 && l3!=l10 && l4!=l5 && l4!=l6 && l4!=l7 && l4!=l8 && l4!=l9 && l4!=l10 && l5!=l6 && l5!=l7 && l5!=l8 && l5!=l9 && l5!=l10 && l6!=l7 && l6!=l8 && l6!=l9 && l6!=l10 && l7!=l8 && l7!=l9 && l7!=l10 && l8!=l9 && l8!=l10 && l9!=l10)
                                            {
                                                nums[a][0]=l1+48;
                                                nums[a][1]=l2+48;
                                                nums[a][2]=l3+48;
                                                nums[a][3]=l4+48;
                                                nums[a][4]=l5+48;
                                                nums[a][5]=l6+48;
                                                nums[a][6]=l7+48;
                                                nums[a][7]=l8+48;
                                                nums[a][8]=l9+48;
                                                nums[a][9]=l10+48;
                                                a++;
                                            }
                                        }
    for(int i=0; i<10; ++i)
        cout<<nums[999999][i];
    cout<<endl;
    return 0;
}
