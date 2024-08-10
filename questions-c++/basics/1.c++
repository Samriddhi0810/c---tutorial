// program to print day before n days,considering(0-sun,1-mon,2-tue,3-wed,4-thur,5-fri,6-sat)
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter current date d:";
    cin>>d;
    cout<<"Enter no.of days n:";
    cin>>n;
    int x=n%7;
    int res=d-x;
    if(res<0)
        cout<<res+7;
    else
        cout<<res;
        cout<<"Day before n day is:"<<res;
        return 0;
}