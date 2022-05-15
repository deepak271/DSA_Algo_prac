#include<iostream>
using namespace std;
class student   
{
private:
    string name;
    int rollno;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int avg;
    char grade;
public:
    void setdata();
    // void getdata();
    // void getstud(int roll);
    
};

void student::setdata()
{
    cout<<"\nwrite student name:";
    cout<<"\nwrite student rool no:";
    cin>>rollno;
    cout<<"\nwrite student sub1 marks:";
    cin>>sub1;
    cout<<"\nwrite student sub2 marks:";
    cin>>sub2;
    cout<<"\nwrite student sub3 marks:";
    cin>>sub3;
    cout<<"\nwrite student sub4 marks:";
    cin>>sub4;
    cout<<"\nwrite student sub5 marks:";
    cin>>sub5;
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    if(avg*100>90)
    grade='A';
    else if(avg*100>75 && avg*100<90)
    grade='B';
    else if(avg*100>50 && avg*100<75)
    grade = 'C';
    else if(avg*100>35 && avg*100<50)
    grade = 'D';
    else grade='F';
}

int main()
{
student stud;
stud.setdata();
return 0;
}