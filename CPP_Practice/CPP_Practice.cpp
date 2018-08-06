#include<iostream>
#include<cmath>
using namespace std;
class Student{
    public:
        double cgpa(double cgpa,double gpa, int no_Of_course){
            return cgpa+(gpa/(double)no_Of_course);
        }
};
int main(){
    double cgpa, gpa,finalGrade;
    int CourseNumber;
    Student tony;
    cout<<"Enter Cgpa, current gpa, and Course Number\n"<<endl;
    cin>>cgpa>>gpa>>CourseNumber;
    finalGrade = tony.cgpa(cgpa,gpa,CourseNumber); 
    if(finalGrade>4.0){
        
        cout<<double(floor(finalGrade))<<endl;
    }
    else{
        
    cout<<finalGrade<<endl;
    }
    return 0;
}