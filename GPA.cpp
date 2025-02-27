#include <iostream>
#include <string>
using namespace std;

//--------- This programe will calculate GPA for a year ---------------

//This function helps to get GPA for user entered grade
double  getGPA(string grade) {
    if (grade == "a+" || grade == "A+") return 4.0;
    else if (grade == "a" || grade == "A") return 4.0;
    else if (grade == "a-" || grade == "A-") return 3.7;
    else if (grade == "b+" || grade == "B+") return 3.3;
    else if (grade == "b" || grade == "B") return 3.0;
    else if (grade == "b-" || grade == "B-") return 2.7;
    else if (grade == "c+" || grade == "C+") return 2.3;
    else if (grade == "c" || grade == "C") return 2.0;
    else if (grade == "c-" || grade == "C-") return 1.7;
    else if (grade == "d+" || grade == "D+") return 1.3;
    else if (grade == "d" || grade == "D") return 1.0;
    else if (grade == "e" || grade == "E") return 0.0;
    else {
        cout << "Invalid grade entered. Please enter a valid grade." << endl;
        return -1; //check user input grade is incorrect
    }
}

int main() {
    string grade;
    int credit, totalCredits = 0;
    double totalGPA = 0.0, gpa;
    double yeargpa;
    cout<<"*************************************************"<<"\n";
    for (int j = 1; j <= 2; j++){  //if your uni have more than 2 semster per year you can change (j <= 2).... ex: for 3 semster (j <=3)
        
        cout<<endl;
        cout<<"  Enter "<< j <<" semster details  "<<endl;
        cout<<endl;
        
        //This above forloop calculate year gpa
        //below forloop calculate semster gpa
    
        for (int i = 1; i <= 5; i++) { //This loop calculate 5 subjects. if you have difrent number of subjects per semster you can change (i <= 5) to eny number
            cout << "Enter subject " << i << " grade (A, B+, C- ...): ";
            cin >> grade;
            gpa = getGPA(grade);
            
            if (gpa == -1) {
            i--;
            continue;
            }

            cout << "Enter credits for subject " << i << ": ";
            cin >> credit;

            totalCredits += credit;
            totalGPA += gpa * credit;
        }

        double semGPA = totalGPA / totalCredits;
        cout<<"---------your " << j <<" semster GPA is: " << semGPA <<"--------"<< endl;
        yeargpa += semGPA;
    }
    
    cout<<endl;
    double FINALgpa = yeargpa / 2;
    cout<<"** your this year GPA is: "<< FINALgpa <<" **"<<endl;

    return 0;
}

