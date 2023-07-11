#include<iostream>
using namespace std;
int main(){
    int num,a,b,c;
    cin>>num;
    a=num%10;
    b=(num/10)%10;
    c=num/100;
    if(num==(a*a*a+b*b*b+c*c*c))
        cout<<num<<"是水仙花数"<<endl;
    else
        cout<<num<<"不是水仙花数"<<endl;
    return 0;
}