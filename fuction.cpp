#include<iostream>
#include<cmath>
using namespace std;
void function(long long n){
    long long  k=0,i;
    for ( i = 1; i<=n; i++)
    {
        k= k+pow(-1,i)*i;
        
    }
    cout<< k;
    



}
int main(){
    long long  n;
    cin>>n;
    function(n);
   

    
    return 0;
}
