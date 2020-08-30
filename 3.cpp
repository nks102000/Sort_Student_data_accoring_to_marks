//WAP that reads records of n students and sort them in descending order of their mark.
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char *name;
    int roll;
    int total_marks;
    public:
    void set(char *na,int rl,int marks){
        name=new char[strlen(na)];
        strcpy(name,na);
        roll=rl;
        total_marks=marks;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Total Marks: "<<total_marks<<endl;

    }
    void sort(student s[],int n){
        for(int i=0;i<n-1;i++){
            for(int j =i;j<n-i-1;j++){
                if(s[j].total_marks<s[j+1].total_marks){
                    student temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
    }
};

int main(){
    int n;
    cout<<"Enter number of students you want to enter the detail for:";
    cin>>n;
    student s[n];
    char name[50];
    int roll;
    int total_marks;
    for(int i=0;i<n;i++){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll:";
        cin>>roll;
        cout<<"Enter marks:";
        cin>>total_marks;
        s[i].set(name,roll,total_marks);
    }
    s[0].sort(s,n);
    for(int i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}
