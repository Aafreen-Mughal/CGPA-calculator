#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int noOfCourses;
float cgpa[7];
string coursesName[7];
string grade[7];
int creditHour[7];

void input() {
    cout << "Enter total no of courses: ";
    cin >> noOfCourses;

    for(int i = 0; i < noOfCourses; i++) {
        cout << "Enter name of course " << i + 1 << ": ";
        cin >> coursesName[i];

        label:
        cout << "Enter grade: ";
        cin >> grade[i];

        if(grade[i] == "A+" || grade[i] == "A" || grade[i] == "A-" ||
           grade[i] == "B+" || grade[i] == "B" || grade[i] == "B-" ||
           grade[i] == "C+" || grade[i] == "C" || grade[i] == "C-" ||
           grade[i] == "D+" || grade[i] == "D" || grade[i] == "F") {
            // Grade is valid
        } else {
            cout << "Incorrect grade!!!\nRe-enter the grade: ";
            goto label;
        }
        if(grade[i]=="A+"|| grade[i]=="A"){
        	cgpa[i]=4.00;
		}
		else if(grade[i]=="A-"){
        	cgpa[i]=3.67;
		}
		else if(grade[i]=="B+"){
        	cgpa[i]=3.33;
		}
		else if(grade[i]=="B"){
        	cgpa[i]=3.00;
		}
		else if(grade[i]=="B-"){
        	cgpa[i]=2.67;
		}
		else if(grade[i]=="C+"){
        	cgpa[i]=2.33;
		}
		else if(grade[i]=="C"){
        	cgpa[i]=2.00;
		}
		else if(grade[i]=="C-"){
        	cgpa[i]=1.67;
		}
		else if(grade[i]=="D+"){
        	cgpa[i]=1.33;
		}
		else if(grade[i]=="D"){
        	cgpa[i]=1.00;
		}
		else if(grade[i]=="F"){
        	cgpa[i]=0.00;
		}
	
        cout << "Enter no of credit hours: ";
        cin >> creditHour[i];
        
    }
}
void display(){
 
	for(int i=0;i<noOfCourses;i++){
		cout<<coursesName[i]<<" "<<grade[i]<<" "<<cgpa[i]<<endl;
		
	}
}

int main() {
   system("Color B5"); 
       cout<<"\n_________________________\n";
    cout<<"|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|\n|\tCGPA CALCULATOR\t\t|\n|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|\n|\t\t\t\t\t\t|"<<endl;
     cout<<"_________________________\n";
    input();
    display();
    return 0;
}

