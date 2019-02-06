#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int i;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        int temp = a[i];
        temp = (round(temp/5)+1)*5;
        if(temp<38){
            //nothing;
            cout<<a[i];
        }
        else if(temp-a[i]>=3){
            cout<<a[i];
        }
        else if(temp-a[i]<3){
            cout<<temp;
        }
        cout<<"\n";
    }
    return 0;
}
