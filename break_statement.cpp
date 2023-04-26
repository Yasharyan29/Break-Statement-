// what we understand from this break_statment code 
#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=40; i++) //so here we have loop which has starting from the 0 and goes to 40 with an updation condition "i++(i=i+1)"
    {
        cout<<i<<" here we applied break condition which is stop at 30"<<endl;
        if(i==30){ // < -- this will break the loop at "30"
            break;
        }

    }
    return 0;
}