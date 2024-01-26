#include <stdio.h>
#define max 30

typedef struct information {
        char emp_id[max];
        char roll_number[max];
        struct Name {
              char f_name[max];
              char m_name[max];
              char l_name[max];
        }name;
        struct Address {
              char area[max];
              char city[max];
              char state[max];
        }address;
        char age[max];
        char salary[max];
        char designation[max];
}inform;

inform input() {
        inform p1;
  
        printf("Emp_id : ");
        gets(p1.emp_id);
  
        printf("First Name : ");
        gets(p1.name.f_name);
        printf("Middle Name : ");
        gets(p1.name.m_name);
        printf("Last Name : ");
        gets(p1.name.l_name);
  
        printf("Area: ");
        gets(p1.address.area);
        printf("City : ");
        gets(p1.address.city);
        printf("State : ");
        gets(p1.address.state);
  
        printf("age : ");
        gets(p1.age);
        printf("Salary : ");
        gets(p1.salary);
        printf("Designation : ");
        gets(p1.designation);

        return p1;
}
int main() {
        inform p1;
        p1 = input();

        printf("\nEmployee[10]\n");
        printf("(a)Emp_Id");
        printf("%s\n", p1.emp_id);
        printf("(b)Name\n");
        printf("\t(i) First Name %s\n\t(ii) Middle Name %s\n\t(iii) Last Name %s\n", p1.name.f_name, p1.name.m_name, p1.name.l_name);
        printf("(c)Address\n");
        printf("\t(i) Area %s\n\t(ii) City %s\n\t(iii) State %s\n", p1.address.area, p1.address.city, p1.address.state);
        printf("(d)Age %s\n", p1.age);
        printf("(e)Salary %s\n", p1.salary);
        printf("(f)Designation %s\n", p1.designation);
}
