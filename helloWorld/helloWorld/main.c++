//
//  main.c
//  helloWorld
//
//  Created by Shahidur Rahman Shoruv on 8/12/24.
//

#include <iostream>
using namespace std;

int main(void)
{
    int step, house;
    
    cin >> house;
    
    for (int i=5; i>0; i--)
    {
        int rem = house % i;
        step = house / i;
        
        if (rem == 0)
        {
            cout << step;
            return 0;
        }
    }
    
}
