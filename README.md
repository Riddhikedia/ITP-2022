# ITP-Assignment-1(2022)

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
To merge the two arrays and reverse the merged array. 
---
## How to use code
Here is a simpled way to download and run the code 
#Download project
```
git clone https://github.com/Riddhikedia/ITP-2022
```
Project Initialize 
```
cd ASSIGNMENT_01
```


Run the code
```
itp_project.c
```
```
itp_project.exe
```
---
**Test case**

Find max
```
Test Case-1
Input:
Enter the size of first array
5
Enter the size of second array
4
Enter the 5 numbers for first array
1
2
3
4
5
Enter the 4 numbers for second array
6
7
8
9

Output:
Merging the two arrays   
123456789
Reversing the third array
987654321

#--------------------------#
Test Case-2
Enter the size of first array
3
Enter the size of second array
5
Enter the 3 numbers for first array
7
4
8
Enter the 5 numbers for second array
1
9
0
3
2

Output:
Merging the two arrays   
74819032
Reversing the third array
23091847
```

---

### Theory


1. First, we would include a header file named stdio.h.
2. Then after using the main function, we would declare the variables p, q, r and i using the int function. 
3. we would ask the user about the no. of elements (p) in first array which is basically the array size declaration process. Then the declaration of array is done by using int a[p]. 
4. We will take inputs of array elements from the user by using scanf statements and this process of taking inputs will be done by using for loop. 
5. Now we start the for loop in which we assign i=0 as initialisation, i<=p-1 as condition and i++ for increasing the value of i each time inside the loop. 
6. Now for finding the third array c[r], we will have to merge a[p] and b[q]. We will apply for loop by assigning i=0, with condition i<=p-1 and by increasing i by 1 everytime. Then we equate c[i] = a[i]. Now again apply loop for i<=q-1 and c[i+x] =b[i]. 
7. Now for finding the reverse of c[r] array, we will apply the for loop by assigning i=z-1 with condition i>=0 and decreasing the value of i by 1 (i--) every time in the loop. 
---




---

### References
1. https://www.geeksforgeeks.org 
2. https://www.codescracker.com
