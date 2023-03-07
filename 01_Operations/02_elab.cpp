#include <iostream>
using namespace std;
int main()
{
    int aravspeed,aaronspeed,speeddiff;
    cin>>aravspeed;
    cin>>aaronspeed;
    if(aravspeed>aaronspeed){
    speeddiff=aravspeed-aaronspeed;
    }
    else{
        speeddiff=aaronspeed-aravspeed;
    } cout<<speeddiff;
	return 0;
}
