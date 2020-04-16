#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    long long n,begin,end,emax,summ=0,summmax=0;
    cin >> n;
    vector <int> a(100000000);
    for (int i=0;i<n;i++){
        cin >> begin >> end;
        a[end]-=1;
        a[begin]+=1;
    }
