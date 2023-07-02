#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double d = sqrt(2.0);
    cout<<"精度设置："<<endl;
    for(int i=0;i<5;i++){
        cout<<setprecision(i)<<d<<endl;
    }
    cout<<"当前精度："<<cout.precision()<<endl;
    cout<<"当前域宽："<<cout.width()<<endl;
    cout<<setw(6)<<d<<endl;
    cout<<"当前填充字符："<<endl;
    cout<<setfill('*')<<setw(10)<<d<<endl;
}