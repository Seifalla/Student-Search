# Student-Search

# Program Running Instruction:
This program runs on Linux 4.4.0-34-generic x86_64 (DMB 005)

Use g++ to compile

This C++ program does the following:
The files sec1students.txt and sec2students.txt contain information about students for daytime section (section 1) and evening section (section 2) respectively. They have the same format (one line per student): 

1.	Student number 

2.	Student first name 

3.	Student last name 

4.	Major 

The data items are separated by one or more spaces on the line. Data items have no embedded spaces (for example, first or last names contain no spaces).
The file studencourses.txt contains data on the courses that the student is taking in a semester: 

1.	Student number 

2.	Course 

3.	Grade 

The data are separated by one or more spaces on the line. Data items have no embedded spaces. 
You can assume good data in the files (correct format for each line). However, there may be multiple spaces between data items on the line.

Example files can be found in the master branch of the repository.
The C++ program provides the search service by student numbers. When the user types a student number, your program will display the student number and the courses that this student is taking in this format:

Student number: 10618769 

Name: Potter, Harry

Section: day-time

CS215
EE380
EE470 

If the student number is not found display: 

Student number: 22222222

Invalid student number!

If the student number is found in student.txt, but the student is not taking any courses in studentcourses.txt, display: 

Student number: 10262824

Name: McFuzz, Gertrude

Section: evening

is not taking any course

Check for file open errors. You can terminate the program when the first open error occurs. For example, if the studentcourses.txt file cannot be opened, the program will display (then quit the program):
studentcourses.txt file cannot be opened! 
Do not use any directory names in your program. The sec1students.txt, sec2students.txt and studentcourses.txt files are in the current working directory. The C++ program must compile and execute from your current working directory.

