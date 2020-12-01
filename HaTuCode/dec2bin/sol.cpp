#include<bits/stdc++.h>
using namespace std;
std::string toBinary(int n)
    {
        std::string r;
        while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
        return r;
    }
int main(){
    int n;
    cin >> n;
    cout << toBinary(n);
    return 0;
}