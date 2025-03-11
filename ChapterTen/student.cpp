//
//  student.cpp
//  bookCH10
//
//  Created by Ellie Townsend on 3/11/25.
//

#include "student.h"
#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    void setClasses();
    void getClasses();
    void resetClasses();
    void setName();
    Student();
    
    Student(const Student& rightSide);
    Student& operator=(const Student& obj);
    
    ~Student();
    
private:
    string name;
    int numClasses;
    string *classList;
};

Student::Student(const Student& rightSide)
:name(rightSide.name), numClasses(rightSide.numClasses){
// set all private variables from the right side equal to the object called within the initalization section
    classList = new string[numClasses];
    for(int i = 0; i < numClasses; i++){
        classList[i] = rightSide.classList[i];
    }
}

Student& Student::operator=(const Student& obj){
    if(name == obj.name){
        return *this;
    }
    else{
        name = obj.name;
        numClasses = obj.numClasses;
        for(int i = 0; i < numClasses; i++){
            classList[i] = obj.classList[i];
        }
    }
    return *this;
}

void Student::resetClasses(){
    numClasses = 0;
    delete [] classList;
}

Student::~Student(){
    if(numClasses !=0){
        delete [] classList;
    }
}

Student::Student()
:name(""), numClasses(0){}

void Student::setName(){
    cout << "Please enter your name:" << endl;
    getline(cin, name);
}

void Student::setClasses(){
    cout << "How many classes are you currently enrolled in? " << endl;
    cin >> numClasses;
    cin.ignore(1000,'\n');
    
    classList = new string[numClasses];
    
    for(int i = 0; i < numClasses; i++){
        cout << "Please enter a current class you are enrolled in: " << endl;
        string userClass;
        getline(cin,userClass);
        classList[i] = userClass;
    }
}

void Student::getClasses(){
    cout << name << "'s current class load is:" << endl;
    if(numClasses == 0){
        cout << "No classes to show for " << name << "."<< endl;
    }
    else{
        for(int i = 0; i < numClasses; i++){
            cout << classList[i] << " " << endl;
        }
    }
}

void enrollStudent(){
    // Creating, and resetting a student:
    /*Student ellie;
    ellie.setName();
    ellie.setClasses();
    ellie.getClasses();
    ellie.resetClasses();
    ellie.getClasses();*/
    
    //Setting a NEWLY created object to an existing one:
    /*Student Fran;
    Fran.setName();
    Fran.setClasses();
    Fran.getClasses();
    Student Mario = Fran;
    Mario.getClasses();*/
    
    //Setting two ALREADY created objects equal to one another:
    Student Sam;
    Sam.setName();
    Sam.setClasses();
    Sam.getClasses();
    
    Student Rosa;
    Rosa.setName();
    Rosa.setClasses();
    Rosa.getClasses();
    
    Rosa = Sam;
    Rosa.getClasses();
    
}



