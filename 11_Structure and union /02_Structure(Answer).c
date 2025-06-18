⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐
   
🟢 Language ➡ C
🟢 Topic ➡ Structure(Answer)

🧩 01. Define a structure Employee with member variables id, name, salary.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp = {101, "John", 55000.50};

    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}
📥 Sample Output:
ID: 101
Name: John
Salary: 55000.50






🧩 02. Write a function to take input employee data from the user.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void inputEmployee(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf(" %[^\n]", e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}
int main() {
    struct Employee emp;
    inputEmployee(&emp);
    printf("\nID: %d\nName: %s\nSalary: %.2f\n", emp.id, emp.name, emp.salary);
    return 0;
}
📥 Input:
Enter ID: 102
Enter Name: Alice
Enter Salary: 68000
📤 Output:
ID: 102
Name: Alice
Salary: 68000.00






🧩 03. Write a function to display employee data.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void displayEmployee(struct Employee e) {
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}
int main() {
    struct Employee emp = {103, "Mark", 75000};
    displayEmployee(emp);
    return 0;
}
📤 Output:
ID: 103
Name: Mark
Salary: 75000.00








🧩 04. Write a function to find the highest salary employee from a given array of 10 employees.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
struct Employee getHighestSalary(struct Employee e[], int n) {
    int i, maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }
    return e[maxIndex];
}
int main() {
    struct Employee e[3] = {
        {101, "Alice", 50000},
        {102, "Bob", 60000},
        {103, "Charlie", 58000}
    };
    struct Employee max = getHighestSalary(e, 3);
    printf("Employee with Highest Salary:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", max.id, max.name, max.salary);
    return 0;
}
📤 Output:
Employee with Highest Salary:
ID: 102
Name: Bob
Salary: 60000.00







🧩 05. Write a function to sort employees according to their salaries.

#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void sortBySalary(struct Employee e[], int n) {
    struct Employee temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(e[i].salary > e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
void displayAll(struct Employee e[], int n) {
    for(int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }
}
int main() {
    struct Employee e[3] = {
        {101, "Alice", 55000},
        {102, "Bob", 48000},
        {103, "Charlie", 60000}
    };
    sortBySalary(e, 3);
    printf("Sorted by Salary:\n");
    displayAll(e, 3);
    return 0;
}
📤 Output:
Sorted by Salary:
ID: 102, Name: Bob, Salary: 48000.00
ID: 101, Name: Alice, Salary: 55000.00
ID: 103, Name: Charlie, Salary: 60000.00
Let me know if you want me to continue with programs 06 to 10 now!







🧩 06. Write a function to sort employees according to their names.

#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void sortByName(struct Employee e[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
void displayAll(struct Employee e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }
}
int main() {
    struct Employee e[3] = {
        {101, "Zack", 60000},
        {102, "Alice", 50000},
        {103, "Bob", 55000}
    };

    sortByName(e, 3);
    printf("Sorted by Name:\n");
    displayAll(e, 3);

    return 0;
}
📤 Output:
Sorted by Name:
ID: 102, Name: Alice, Salary: 50000.00
ID: 103, Name: Bob, Salary: 55000.00
ID: 101, Name: Zack, Salary: 60000.00







🧩 07. Write a program to calculate the difference between two time periods (24-Hour Format).

#include <stdio.h>
struct Time {
    int hour;
    int minute;
    int second;
};
struct Time findDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    if (t2.second > t1.second) {
        t1.minute--;
        t1.second += 60;
    }
    diff.second = t1.second - t2.second;

    if (t2.minute > t1.minute) {
        t1.hour--;
        t1.minute += 60;
    }
    diff.minute = t1.minute - t2.minute;
    diff.hour = t1.hour - t2.hour;
    return diff;
}
int main() {
    struct Time t1 = {14, 35, 50};
    struct Time t2 = {12, 20, 30};
    struct Time diff = findDifference(t1, t2);
    printf("Time Difference = %02d:%02d:%02d\n", diff.hour, diff.minute, diff.second);
    return 0;
}
📤 Output: Time Difference = 02:15:20









🧩 08. Write a program to store information of 10 students and display them using structure.

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter Roll, Name, Marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
📥 Sample Input:
Enter Roll, Name, Marks for student 1: 1 Raj 89.5
...
📤 Sample Output:
Roll: 1, Name: Raj, Marks: 89.50
...








🧩 09. Write a program to store information of n students and display them using structure.

#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    free(s);
    return 0;
}
📥 Input:
Enter number of students: 3
Enter Roll, Name, Marks for student 1: 1 Ravi 88
Enter Roll, Name, Marks for student 2: 2 Neha 91
Enter Roll, Name, Marks for student 3: 3 Ajay 76
📤 Output:
Roll: 1, Name: Ravi, Marks: 88.00
Roll: 2, Name: Neha, Marks: 91.00
Roll: 3, Name: Ajay, Marks: 76.00








🧩 10. Program to enter marks of 5 students in Chemistry, Maths and Physics and calculate percentage.

#include <stdio.h>
struct Marks {
    int roll;
    char name[50];
    int chem, maths, phy;
};
int main() {
    struct Marks m[5];
    float percent;

    for (int i = 0; i < 5; i++) {
        printf("Enter Roll, Name, Chemistry, Maths, Physics for student %d: ", i + 1);
        scanf("%d %s %d %d %d", &m[i].roll, m[i].name, &m[i].chem, &m[i].maths, &m[i].phy);
    }

    printf("\n--- Student Percentage ---\n");
    for (int i = 0; i < 5; i++) {
        percent = (m[i].chem + m[i].maths + m[i].phy) / 3.0;
        printf("Roll: %d, Name: %s, Percentage: %.2f%%\n", m[i].roll, m[i].name, percent);
    }

    return 0;
}
📥 Input:
Enter Roll, Name, Chemistry, Maths, Physics for student 1: 1 Anu 85 90 88
...
📤 Output:
Roll: 1, Name: Anu, Percentage: 87.67%
...
