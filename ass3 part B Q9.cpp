#include<iostream>
using namespace std;
int main(){
int i;
cout << "demonstrating continue:\n";
for(i = 1;i<= 10;i = i+1){
    if(i == 5){
        continue;
    }
    cout<< "";
}
cout << "/n demonstrating break:\n";
for (i=1; i<=10; i=i+1){
    if(i==5){
        break;
    }
    cout << "" ;
}
return 0;

}
