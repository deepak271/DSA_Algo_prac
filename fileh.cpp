#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
 ofstream fil;
 fil.open("sample.txt");
 while(fil){
    getline(cin,line);
     if(line=="-1")
      break;
      fil<<line<<endl;
 }
 fil.close();
 ifstream fin;
 fin.open("sample.txt");
 while(fin)
 {
     getline(fin,line);
     cout<<line<<endl;
 }
 fin.close();
 //cout<<"file opene";
}