
#include<iostream>
#include<cstdl>

#include<string> 
using  namespace  std;
static  string  host; 
static  string  rhost; 
void  pingp(string); 
int  main()
{
int  i=0;
cout<<"Enter  ur  choice:  \n  1.  Ping  to  Same  Subnet  Machine\n  2.  Ping  to
Different  Subnet  Machine\n";
cin>>i;
cout<<"Enter  host  IP  address  &   Mask";
cin>>host;
switch(i)

{case 1: pingp(host); break;
case 2:
cout<<"Enter  IP  addres  &   Mask  of  another  Subnet  n/w";
cin>>rhost;
system(("ifconfig  eth0:1  "+rhost).c_str());
pingp(rhost);
break;
default:  cout<<"Enter  proper  choice";
}
return  0;}
void  pingp(string  host)
{
system(("ping  "+host).c_str());
}