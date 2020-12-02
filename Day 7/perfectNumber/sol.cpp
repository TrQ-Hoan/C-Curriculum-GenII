#include<iostream>
using namespace std;
bool check(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
int main(){
    int m,n;
    cin >> m >> n;
    bool flag = false;
    for (int i=m; i <= n; i++){
        if(check(i) )
            flag=true,cout << i <<  " ";
    }
    if (!flag) cout << "None\n";
    return 0;
}
