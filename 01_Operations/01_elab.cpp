#include <iostream>
#include <bitset>
 
using namespace std;
 
int main(void)
{
	int i,j,k,l;
	cout<<"Input i(oct),j(hex),k(hex),l(dec):"<<endl;
	cin>>oct>>i;  //Input is octal
	cin>>hex>>j;  //Input is hexadecimal
	cin>>k;   //Input is still hexadecimal
	cin>>dec>>l; //Enter as decimal number
	cout<<"hex:"<<"i = "<<hex<<i<<endl;
	cout<<"dec:"<<"j = "<<dec<<j<<'\t'<<"k = "<<k<<endl;
	cout<<"oct:"<<"l = "<<oct<<l;
	cout<<dec<<endl;  //Restore decimal number output state
	return (0);
}