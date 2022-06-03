#include <fstream>
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   ifstream infile;
   ofstream outfile;
  
   double *x,*y,*z;
   double *a,*b,*c;
   double *p,*q,*r;
   string tab1;
   char tab2[100];
   double natom;
   double time;
   double xlow,xhigh,ylow,yhigh,zlow,zhigh;
   x=new double [10];
   y=new double [10];
   z=new double [10];
   a=new double [10];
   b=new double [10];
   c=new double [10];
   p=new double [10];
   q=new double [10];
   r=new double [10];
//for(int i=0;i<2001;i++)
//{
  infile.open("Trajectory.lmp");
//  infile.getline(tab1,50);
  infile>>tab1>>tab1;
  cout<<"fisrt-line"<<tab1<<endl;
  infile>>time;
  cout<<"time="<<time<<"\t"<<endl;
  infile>>tab1>>tab1;
//  infile.getline(tab1,100);
  cout<<"after-time="<<tab1<<endl;
  infile>>natom;
  cout<<"number-atom="<<natom<<"\t"<<endl;
  getline(infile,tab2);
  cout<<"item-box="<<tab2<<endl;
  infile>>xlow>>xhigh;
  cout<<xlow<<"\t"<<xhigh<<endl;
  infile>>ylow>>yhigh;
  cout<<ylow<<"\t"<<yhigh<<endl;
infile>>zlow>>zhigh;
  cout<<zlow<<"\t"<<zhigh<<endl;
  // outfile.open("OUT1.dat");
  // outfile<<tab1<<endl;
  // outfile<<time<<"\t"<<endl;
   int xu,yu,zu;
   int vx,vy,vz;
   int fx,fy,fz;
// for(int i=0;i<2100;i++)
// {
//infile.getline(tab1,100);
cout<<tab1<<endl;
//infile>>xu>>yu>>zu;
//cout<<xu<<"\t"<<yu<<"\t"<<zu<<"\n";

//infile>>vx>>vy>>vz;
//cout<<vx<<"\t"<<vy<<"\t"<<vx<<"\t";

//         infile>>fx>>fy>>fz;
//cout<<fx<<"\t"<<fy<<"\t"<<fz<<endl;
// }


delete[] x;
delete[] y;
delete[] z;
delete[] a;
delete[] b;
delete[] c;
delete[] p;
delete[] q;
delete[] r;
//infile.close("Trajectory.lmp");

//outfile.close("OUT1.dat");

}
