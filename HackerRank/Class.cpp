#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int age, grade;
        string fName, lName;
    public:
        void setAge(int age)
        {
            this->age = age;
        }

        int getAge()
        {
            return age;
        }

        void setfName(string fName)
        {
            this->fName = fName;
        }

        string getfName()
        {
            return fName;
        }

        void setlName(string lName)
        {
            this->lName = lName;
        }

        string getlName()
        {
            return lName;
        }

        void setGrade(int grade)
        {
            this->grade = grade;
        }

        int getGrade()
        {
            return grade;
        }
};

int main() {
    Student Student1;
    int temp;
    string sTemp;
    cin>>temp;
    Student1.setAge(temp);
    cin>>sTemp;
    Student1.setfName(sTemp);
    cin>>sTemp;
    Student1.setlName(sTemp);
    cin>>temp;
    Student1.setGrade(temp);

    cout<<Student1.getAge()<<endl;
    cout<<Student1.getlName()<<", "<<Student1.getfName()<<endl;
    cout<<Student1.getGrade()<<endl<<endl;
    cout<<Student1.getAge()<<","<<Student1.getfName()<<","<<Student1.getlName()<<","<<Student1.getGrade();
    return 0;
}
