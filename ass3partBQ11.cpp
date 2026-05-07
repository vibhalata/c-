#include<iostream>
using namespace std;
int main(){
int i,sum,j;
for (i=1;i<=500;i++){
    sum=0;
    for(j=0;j<i;j++){
        if(i % j==0)
            sum +=j;
    }
    if(sum==i)
        cout << i<< "";
}
}
