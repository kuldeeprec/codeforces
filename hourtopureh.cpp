#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<sstream>
#include<iostream>
#include<iomanip>
using namespace std;
string to_format(const int number) {
    stringstream ss;
    ss << setw(2) << setfill('0') << number;
    return ss.str();
}
int main(int argc, char *a[])
{
    //Write code here
    int hh1,mm1,hh2,mm2;
    cin>>hh1>>mm1>>hh2>>mm2;
    int ansh,ansm;
    ansm= (mm1+mm2)%60;
    string m,h;
    m=to_format(ansm);
    ansh=(hh1+hh2+(mm1+mm2)/60)%24;
    h=to_format(ansh);
    cout<<h<<" "<<m<<endl;
}