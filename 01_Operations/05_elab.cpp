#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{ 
    float b,leftside,rs1,rs2;
    cin>>b>>leftside;
    rs1 = sqrt(pow(leftside,2)-pow(b,2));
    rs2 = sqrt(pow(leftside,2)+pow(b,2));
    cout<< fixed <<setprecision(5) << rs1 << " " << rs2;
    return 0;
}
