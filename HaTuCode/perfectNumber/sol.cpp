#include<stdio.h>
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
    for (int i=m; i <= n; i++){
        if(check(i) )
            cout << i <<  " ";
    }
    return 0;
}