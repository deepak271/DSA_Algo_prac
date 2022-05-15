#include<iostream>
using namespace std;
class animal
{
    int feets;
    string name;
    public:
    void setft(int n)
    {
        feets=n;
    }
    void setnm(string s)
    {
        name = s;
    }
    void getdata();
};
void animal::getdata()
{
  cout<<"feets:"<<feets<<endl;
  cout<<"name:"<<name;
}
int main()
{
 animal a;
 a.setft(4);
 a.setnm("cow");
 a.getdata();
}