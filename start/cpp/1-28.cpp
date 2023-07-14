#include<iostream>
using namespace std;

void strconvert(string &s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;
}

int main()
{
    string str;
    cin>>str;
    strconvert(str);
    cout<<str<<endl; 
    return 0;
}
