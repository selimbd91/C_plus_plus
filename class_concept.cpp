
#include<iostream>
using namespace std;

class Student{

protected:
    string name;
    int age;
    string university;

public:
    Student(string nam, int ag, string uni){

        printf("i am a constructor.\n");
        name = nam;
        age = ag;
        university = uni;
    }

    void studnt_info(){
        printf("student name: %s, age: %d, and Unviersity: %s\n", name.c_str(), age, university.c_str());

        // cout << "student name: " << name <<endl;
        // cout << "age: " << age <<endl;
        // cout << "Unviersity: " << university <<endl;

        // printf("%s\n", name.c_str());
    }

    void set_student_name(string namm){

        name = namm;
    }
    
    string get_student_name(){
        return name;
    }

};

class Xstudent: public Student{

    public:
        string jobb;
        Xstudent(string nam, int ag, string uni, string job):Student(nam, ag, uni){
            jobb = job;
        }

        void info(){

            cout << "student name: " << name <<endl;
            cout << "age: " << age <<endl;
            cout << "Unviersity: " << university <<endl;
            cout << "Profession: " << jobb <<endl;
        }


};


int main(){

    Xstudent s1("selim", 32, "Bremen", "developer");
    // Xstudent s1();
    // s1.studnt_info();

    // cout << s1.jobb << endl;

    s1.info();


    // cout << s1.get_student_name() << endl;

    // s1.set_student_name("akash");

    // cout << s1.get_student_name() << endl;



    return 0;
}