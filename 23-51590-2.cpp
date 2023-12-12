// Name: Nabeeha Taiyeba
// Id: 23-51590-2
// Section: O
// Course: Introduction to Programming Lab

#include<iostream>
 
using namespace std ;
 
void mark(float avg,float math,float phy,float ip)
{
avg =(math +phy+ip)/3;
cout <<" YOUR AVG NUMBER :" <<(float) avg;
 
}
int main()
 
 
{
cout<<" number of math :";
float math;
cin >> math ;
float avg;
float phy;
float ip;
 
cout<<"number of Phyics :";
cin >> phy;
cout <<"number of ip :";
cin >> ip;
mark(avg,math,phy,ip) ;
}