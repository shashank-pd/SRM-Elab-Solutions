#include <iostream>
using namespace std;
int main(){
    int fannumber;
    cin>>fannumber;
    if (fannumber==7){
        cout<<"Fan of Both Dhoni and Ronaldo";
    }
    else if(fannumber>7){
        cout<<"Fan of Dhoni";
    }
    else{
        cout<<"Fan of Ronaldo";
    }
	return 0;
}
