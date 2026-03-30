#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
if(a>b&&a>c){
    cout<< " 1st largest";
}
else if (b>c){
    cout<< "2nd  largest";
}
else{
    cout << "3rd largest";
}
}
