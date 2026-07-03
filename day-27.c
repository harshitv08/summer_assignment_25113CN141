#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[50];
};

void addStudent() {
    struct Student s;
    FILE *fp = fopen("students.dat", "ab");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Course: ");
    scanf(" %[^\n]", s.course);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Student record added successfully!\n");
}

void displayStudents() {
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("No records found!\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll No: %d\nName: %s\nAge: %d\nCourse: %s\n\n",
               s.rollNo, s.name, s.age, s.course);
    }
    fclose(fp);
}

void searchStudent() {
    int roll;
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("No records found!\n");
        return;
    }
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);
    int found = 0;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.rollNo == roll) {
            printf("\nRecord Found:\nRoll No: %d\nName: %s\nAge: %d\nCourse: %s\n",
                   s.rollNo, s.name, s.age, s.course);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No record found with Roll No %d\n", roll);
    }
    fclose(fp);
}

void deleteStudent() {
    int roll;
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (!fp) {
        printf("No records found!\n");
        return;
    }
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);
    int found = 0;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.rollNo == roll) {
            found = 1;
            continue; 
        }
        fwrite(&s, sizeof(s), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");
    if (found)
        printf("Record deleted successfully!\n");
    else
        printf("No record found with Roll No %d\n", roll);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

void addEmployee(FILE *fp) {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    printf("Employee added successfully!\n");
}

void displayEmployees(FILE *fp) {
    struct Employee emp;
    rewind(fp);
    printf("\n--- Employee Records ---\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
               emp.id, emp.name, emp.department, emp.salary);
    }
}

void searchEmployee(FILE *fp) {
    int id;
    struct Employee emp;
    rewind(fp);
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        if (emp.id == id) {
            printf("Employee Found: ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                   emp.id, emp.name, emp.department, emp.salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

void deleteEmployee(FILE *fp) {
    int id;
    struct Employee emp;
    FILE *temp = fopen("temp.dat", "wb");
    rewind(fp);

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        if (emp.id != id) {
            fwrite(&emp, sizeof(struct Employee), 1, temp);
        } else {
            found = 1;
        }
    }
    fclose(fp);
    fclose(temp);
    remove("employee.dat");
    rename("temp.dat", "employee.dat");
    fp = fopen("employee.dat", "rb+");

    if (found)
        printf("Employee deleted successfully!\n");
    else
        printf("Employee with ID %d not found.\n", id);
}

int main() {
    FILE *fp = fopen("employee.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("employee.dat", "wb+");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
    }

    int choice;
    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(fp); break;
            case 2: displayEmployees(fp); break;
            case 3: searchEmployee(fp); break;
            case 4: deleteEmployee(fp); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    fclose(fp);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float basicPay;
    float hra;      // House Rent Allowance
    float deductions;
    float netSalary;
};

void calculateSalary(struct Employee *emp) {
    emp->netSalary = emp->basicPay + emp->hra - emp->deductions;
}

void addEmployee(FILE *fp) {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Basic Pay: ");
    scanf("%f", &emp.basicPay);
    printf("Enter HRA: ");
    scanf("%f", &emp.hra);
    printf("Enter Deductions: ");
    scanf("%f", &emp.deductions);

    calculateSalary(&emp);
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    printf("Employee salary record added successfully!\n");
}

void displaySalaries(FILE *fp) {
    struct Employee emp;
    rewind(fp);
    printf("\n--- Salary Records ---\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("ID: %d | Name: %s | Basic Pay: %.2f | HRA: %.2f | Deductions: %.2f | Net Salary: %.2f\n",
               emp.id, emp.name, emp.basicPay, emp.hra, emp.deductions, emp.netSalary);
    }
}

void searchSalary(FILE *fp) {
    int id;
    struct Employee emp;
    rewind(fp);
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        if (emp.id == id) {
            printf("\n--- Salary Slip ---\n");
            printf("ID: %d\nName: %s\nBasic Pay: %.2f\nHRA: %.2f\nDeductions: %.2f\nNet Salary: %.2f\n",
                   emp.id, emp.name, emp.basicPay, emp.hra, emp.deductions, emp.netSalary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

int main() {
    FILE *fp = fopen("salary.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("salary.dat", "wb+");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
    }

    int choice;
    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Slip by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(fp); break;
            case 2: displaySalaries(fp); break;
            case 3: searchSalary(fp); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    fclose(fp);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks[5];   // marks for 5 subjects
    float total;
    float percentage;
    char grade;
};

void calculateResult(struct Student *stu) {
    stu->total = 0;
    for (int i = 0; i < 5; i++) {
        stu->total += stu->marks[i];
    }
    stu->percentage = stu->total / 5.0;

    if (stu->percentage >= 90) stu->grade = 'A';
    else if (stu->percentage >= 75) stu->grade = 'B';
    else if (stu->percentage >= 60) stu->grade = 'C';
    else if (stu->percentage >= 40) stu->grade = 'D';
    else stu->grade = 'F';
}

void addStudent(FILE *fp) {
    struct Student stu;
    printf("Enter Roll No: ");
    scanf("%d", &stu.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", stu.name);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &stu.marks[i]);
    }

    calculateResult(&stu);
    fwrite(&stu, sizeof(struct Student), 1, fp);
    printf("Student record added successfully!\n");
}

void displayMarksheet(FILE *fp) {
    struct Student stu;
    rewind(fp);
    printf("\n--- Marksheet Records ---\n");
    while (fread(&stu, sizeof(struct Student), 1, fp)) {
        printf("\nRoll No: %d\nName: %s\n", stu.rollNo, stu.name);
        for (int i = 0; i < 5; i++) {
            printf("Subject %d Marks: %.2f\n", i + 1, stu.marks[i]);
        }
        printf("Total: %.2f\nPercentage: %.2f%%\nGrade: %c\n", 
               stu.total, stu.percentage, stu.grade);
    }
}

void searchMarksheet(FILE *fp) {
    int roll;
    struct Student stu;
    rewind(fp);
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    while (fread(&stu, sizeof(struct Student), 1, fp)) {
        if (stu.rollNo == roll) {
            printf("\n--- Marksheet ---\n");
            printf("Roll No: %d\nName: %s\n", stu.rollNo, stu.name);
            for (int i = 0; i < 5; i++) {
                printf("Subject %d Marks: %.2f\n", i + 1, stu.marks[i]);
            }
            printf("Total: %.2f\nPercentage: %.2f%%\nGrade: %c\n", 
                   stu.total, stu.percentage, stu.grade);
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}

int main() {
    FILE *fp = fopen("marksheet.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("marksheet.dat", "wb+");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
    }
    int choice;
    do {
        printf("\n--- Marksheet Generation System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll No\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(fp); break;
            case 2: displayMarksheet(fp); break;
            case 3: searchMarksheet(fp); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    fclose(fp);
    return 0;
}
