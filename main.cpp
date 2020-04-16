#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long n,s,e,emax,summ=0,summmax=0;
    cin >> n;
    vector <int> a(100000000);
    for (int i=0;i<n;i++){
        cin >> s >> e;
        a[s]+=1;
        a[e]-=1;
    }
