#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<long long> bons;
    long long sum = 0;
    bool changed = true;

    for (int x=0; x<3; x++)
    {
        long long  k;
        cin >> k;
        bons.push_back(k);
    }

    sort (bons.begin(), bons.end(), greater<long long>());
    long long in=0, in2=0;


    if (bons[1]-bons[2] <= bons[0] - bons[1])
    {
         in = bons[1]-bons[2] + (bons[0]-2*(bons[1]-bons[2])+2*bons[2])/3;
         if (bons[0] > (bons[1] + bons[2])*2) in = bons[1] + bons[2];
    }

        in2 = bons[2] + ((bons[0] - bons[2])+(bons[1]-bons[2]))/3;
        if (in2 > bons[1]) in2= bons[1];

     if (in > in2) cout << in <<endl;
     else cout << in2 << endl;




    return 0;
}
