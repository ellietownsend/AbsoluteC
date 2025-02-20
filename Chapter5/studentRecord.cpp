//
//  studentRecord.cpp
//  bookCH6
//
//  Created by Ellie Townsend on 2/19/25.
//

#include "studentRecord.h"
#include <iostream>
using namespace std;


class StudentRecord{
public:
    double getAverage();
    char getGrade();
    
    double getQuizOne();
    void setQuizOne(double score);
    
    double getQuizTwo();
    void setQuizTwo(double score);
    
    double getMidterm();
    void setMidterm(double score);
    
    double getFinal();
    void setFinal(double score);
private:
    double quizOne;
    double quizTwo;
    double midterm;
    double finalExam;
    char grade;
};
// start of with "class" because were making blueprints for an object
 // have to end with a semicolin, or it excpects us to make objects of that type

double StudentRecord::getAverage(){
    return (((quizOne * 10) + (quizTwo * 10) + midterm + finalExam) / 4);
}

char StudentRecord::getGrade(){
    // To get percentage, divide by the total number of points
    quizOne /= 10;
    quizTwo /= 10;
    double bothQuizzes = ((quizOne + quizTwo) * .25);
    midterm = ((midterm / 100) * .25);
    finalExam = ((finalExam / 100) * .25);
    double score = (bothQuizzes + finalExam + midterm) * 100;
    
    if(score >= 90){
        grade = 'A';
        return 'A';
    }
    else if(score >= 80){
        grade = 'B';
        return 'B';
    }
    else if(score >= 70){
        grade = 'C';
        return 'C';
    }
    else if(score >= 60){
        grade = 'D';
        return 'D';
    }
    else{
        grade = 'F';
        return 'F';
    }
}
// Setters:
void StudentRecord::setQuizOne(double score){
    if(score < 0 || score > 10){
        cout << "Invalid score input for quiz 2";
    }
    quizOne = score;
}

void StudentRecord::setQuizTwo(double score){
    if(score < 0 || score > 10){
        cout << "Invalid score input for quiz 2";
    }
    quizTwo = score;
}

void StudentRecord::setMidterm(double score){
    if(score < 0 || score > 100){
        cout << "Invalid score input for quiz 2";
    }
    midterm = score;
}

void StudentRecord::setFinal(double score){
    if(score < 0 || score > 100){
        cout << "Invalid score input for quiz 2";
    }
    finalExam = score;
}
//Getters:
double StudentRecord::getQuizOne(){
    return quizOne;
}

double StudentRecord::getQuizTwo(){
    return quizTwo;
}

double StudentRecord::getMidterm(){
    return midterm;
}

double StudentRecord::getFinal(){
    return finalExam;
}

void studentRecordMain(){
    StudentRecord student1;
    cout << "Please input your grade for quiz one:" << endl;
    double quizOne;
    cin >> quizOne;
    student1.setQuizOne(quizOne);
    cout << "Please input your grade for quiz two:" << endl;
    double quizTwo;
    cin >> quizTwo;
    student1.setQuizTwo(quizTwo);
    cout << "Please input your grade for the midterm:" << endl;
    double midterm;
    cin >> midterm;
    student1.setMidterm(midterm);
    cout << "Please input your grade for the final:" << endl;
    double finalExam;
    cin >> finalExam;
    student1.setFinal(finalExam);
    
    cout << "The average score you recieved is: " << student1.getAverage() << endl;
    cout << "The final grade you recieved is: " << student1.getGrade() << endl;
}

