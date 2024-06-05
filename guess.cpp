#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
int guess=rand()%100+1;
    int num=0;
    int a=1;
    int time=4;
    cout<<"Enter a number between 1 and 100"<<endl;
    do
    {
    cout<<"Turns Remaining: "<<time+1;
    cin>>num;
    if(num==guess)
    {
    	cout<<"Congratulations"<<endl;
    	cout<<"Thanks for playing";
    	a=0;
    }
    else if(num<guess)
    {
    	cout<<"Try a bigger number"<<endl;
    }
    else if(num>guess)
    {
    	cout<<"Try a smaller number"<<endl;
    }
    }while(a==1 && time--);
    if(time==0){
    	cout<<"Better luck next time";
    }
    return 0;
}
