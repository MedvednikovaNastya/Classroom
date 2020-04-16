#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    long long n,begin,end,summ=0,summmax=0;
    cin >> n;
    vector <int> a(100000000);
    for (int i=0;i<n;i++){
        cin >> begin >> end;
        a[end]-=1;
        a[begin]+=1;
    }
    for (long long i=0;i<10000000;i++){
        summ+=a[i];
        if(summ>summmax){
            summmax=summ;
        }
    }
    cout << summmax;
    return 0;
}
