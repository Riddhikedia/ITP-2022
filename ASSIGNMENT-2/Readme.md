# ITP-Assignment-2(2022)

**Team Members**
|   Enrollment No.  |   Name                    | GithubId        |
|   --------------  |   --------------------    | ----------------|
|    IEC2021075     |   Sudha Yadav             |     eliexi      |
|    IEC2021076     |   Sahil Yadav             | sahilyadav516   |
|    IEC2021077     |   Riddhi Kedia            |  Riddhikedia    |
|    IEC2021078     |   Shivam Kumar Singh      |Shivamsinghindia |


**Group No-**"19"

**Faculty Name-**"Dr. Mohammad Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Write a program to create an array of the structure and enter some data into it. Then ask the user to enter current date. Display the names of those employees whose tenure is 3 or more than 3 years according to the given current date.

---
## How to use code
Here is a simpled way to download and run the code 
#Download project
```
git clone https://github.com/Riddhikedia/ITP-2022
```
Project Initialize 
```
cd ASSIGNMENT-2
```


Run the code
```
grp19.c
```
```
grp19.exe
```
---
**Test case**

```
Test Case-1
Input:
Printing details of employees having tenure of more than 3 years.
First enter today's date below in dd mm yyyy format:
03 02 2022

Output:

Details:
2       Mukesh Verma    2/10/2018 
69      Vijesh Garg     11/9/2017 
5       Yash Tyagi      19/7/2016 
25      Aman Yadav      30/5/2013 
81      Aditya Singh    29/12/2014
#--------------------------#
Test Case-2
Input:
Printing details of employees having tenure of more than 3 years.
First enter today's date below in dd mm yyyy format:
05 05 2018

Output:
25      Aman Yadav      30/5/2013 
81      Aditya Singh    29/12/2014
```

---

### Theory


1. First, we would include a header file named stdio.h.
2. we would declare the structure using struct function using employee as structure tag. Then after inside the structure tag we would declare the employee code, name, date of joining using int and char functions. 
3. After that we will be declaring the name of the structure that is all, where we would declare by writing it as all[10]. 
4. Now, we will input the data of the employees using struct employee function and naming the employees as e1, e2, e3, e4, e5, e6, e7, e8, e9 and e10. As, we know that all[0] = e1, similarly all[1]=e2, and so on till all[9]=e10.
5. Then after we would declare variables date, month and year to ask the user to input the current date in dd mm yyyy format using scanf statements. 
6. Now, to filter the required data of the employee structure, to get to know about the names of those employees whose tenure is 3 or more than 3 years according to the given current date, we would use for loops, where i =0 is used as initialisation and i<10 is used as condition for the loop, also i++ is used as change. 
7. Now inside this for loop we will be using if else statements for retrieving the required information of the employees. The condition for the if statement will be that if the difference between the input year and 3 is greater than the year of joining of the employee 
8. Now if the year of joining of the employee is equal to the (input year-3) then we will check for the month by again using the if else statement and the condition.
9. If the month of joining of the employee is less than the input month by the user then the information of that employee will be required by the user as this employee has completed the tenure of 3 years and hence it will be printed on the output screen. Now if the month of joining of the employee is equal to the month which the user has input, then we will check for the date by again using the if else statement. If the date of joining is less or equal to the input date by the user then the data of that employee is required by the user and hence will be printed on output screen. 
---




---

### References
1. https://www.geeksforgeeks.org 
2. https://www.codescracker.com
