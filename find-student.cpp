#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc,char *argv[]){

//Defining some variables
	
	ifstream sec1;
	ifstream sec2;
	ifstream courses;

	int searchTarget;
	int usrID;

	bool found = false;
	bool takingClasses = false;

	string course;
	string lastName;
	string firstName;

//Opening the files
	sec1.open(argv[1]);
	sec2.open(argv[2]);
	courses.open(argv[3]);

//Check for opening errors
	if(sec1)
		;
	else{
		cout<<"sec1students.txt file cannot be opened";
		return 0;
	}
	if(sec2)
		;
	else{
                cout<<"sec2students.txt file cannot be opened";
                return 0;
        }
	if(courses)
                ;
        else{
                cout<<"studentcourses.txt file cannot be opened";
                return 0;
        }            
//ask user for the number
		cout<<"Enter the student number: ";
		cin>>searchTarget;
//validating the data		
		while(!cin.good()){
			
			cin.clear();
			cin.ignore(80,'\n');
			cout<<"Invalid value! Enter the student number: ";
			cin >> searchTarget;
		}
//searching in the first file		
		while(sec1 && !found){
			
			sec1 >> usrID;
			if(usrID == searchTarget){
				found = true;
				sec1.ignore( 4, ' ');
				sec1 >> lastName;
				sec1.ignore( 4, ' ');
				sec1 >> firstName;
				cout<<"Student number: "<<usrID<<endl;
				cout<<"Name: "<<lastName<<", "<<firstName<<endl;
				cout<<"Section: Daytime"<<endl;
			}
			else
				;
			sec1.ignore(100,'\n');
		}
//if not found search in the second file		
		while(sec2 && !found){

                        sec2 >> usrID;
                        if(usrID == searchTarget){
                                found = true;
                                sec2.ignore( 4, ' ');
                                sec2 >> lastName;
				sec2.ignore( 4, ' ');
                                sec2 >> firstName;
                                cout<<"Student number: "<<usrID<<endl;
                                cout<<"Name: "<<lastName<<", "<<firstName<<endl;
                                cout<<"Section: Evening"<<endl;                                
			}
                        else
                                ;
                        sec2.ignore(100, '\n');
                }
//search for the classes he is taking
		if(found){	
			while (courses){
				
				courses >> usrID;
				if (usrID == searchTarget){
					courses >> course;
					cout << course << endl;
					takingClasses = true;
				}		
				courses.ignore(100,'\n');
			}
			if(!takingClasses)
				cout<<"is not taking any course"<<endl;
			else
				;
		}
		else{
			cout<<"student number: "<< searchTarget << endl;
			cout<<"Invalid student number!"<< endl;
		}						
		sec1.close();
		sec2.close();
		courses.close();
return 0;
}
