/*#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails() {
  
}

// Display StudentId and Name
Student::display() {
  
}
*/
#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;
Student::Student()
{
  studentId = 0;
  strcpy(name, "");
}
// Assign studentId and name
void Student::assignDetails(int stdid,char sname[]) {
studentId = stdid;
strcpy(name,sname);
}
// Display StudentId and Name
void Student::display() {
cout<<"Student ID :"<<studentId<<endl;
cout<< "Name : "<< name<< endl;
}