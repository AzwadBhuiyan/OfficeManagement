#include<iostream>
#include <string>

using namespace std;

//using a struct to store different kinds of data for the node named employee
struct employee
{
    string name, designation;
    int age, id;
    char gender;
    float salary;
    bool is_suspend;
    employee *next;
    employee *prev;

};

employee* head = NULL;

// in the function all the info of an employee is stored in a new node named new_employee
void insertEmployee(){
string e_name, e_designation;
int e_age, e_id;
char e_gender;
float e_salary;
cout << "Enter full name: "; getline(cin, e_name);
cout << "Enter ID Number: "; cin >> e_id;
cout << "Enter age: "; cin >> e_age;
cout << "Enter gender: "; cin >> e_gender;
cout << "Enter salary: "; cin >> e_salary;
cout << "Enter designation: "; cin >> e_designation;

    employee *new_employee = new employee;
    new_employee -> name = e_name;
    new_employee -> id = e_id;
    new_employee -> age = e_age;
    new_employee -> gender = e_gender;
    new_employee -> salary= e_salary;
    new_employee -> is_suspend = false;
    new_employee -> designation = e_designation;

if (head == NULL){

    head = new_employee;
    new_employee -> next = new_employee -> prev = NULL;
    cout << "\nSuccessfully created new employee!" << endl << endl;
}
else{
    employee *current_node = head;
    while(current_node -> next != NULL)
        current_node = current_node -> next;
    current_node -> next = new_employee;
    new_employee -> prev = current_node;
    cout << "\nSuccessfully created new employee!" << endl << endl;
}

}

//This function shows all the information kept inside a employee node ony for the manager
void view_current_employee_info(employee *current_node){
    cout << "Employee ID Number: " << current_node -> id << endl;
    cout << "Employee Name: " << current_node -> name << endl;
    cout << "Employee Age: " << current_node -> age << endl;
        if (current_node -> gender == 'F')
            cout << "Employee gender: Female" << endl;
    else if(current_node -> gender == 'M')
            cout << "Employee gender: Male" << endl;
    else if (current_node -> gender == 'T')
            cout << "Employee gender: Transgender" << endl;
    if (current_node -> is_suspend == false)
            cout << "Employee Status: Not Suspended" << endl;
    else if(current_node -> is_suspend == true)
            cout << "Employee Status: Suspended" << endl;
    cout << "Employee Salary: " << current_node -> salary << endl;
    cout << "Employee Designation: " << current_node -> designation << endl << endl;

}
//this function will show the name and designation of the employees  sorted in a designation hierarchy to the guest
void view_current_employee_info_for_guest(employee *current_node){
    cout << "Name: " << current_node -> name << endl;
    cout << "Designation: " << current_node -> designation << endl << endl;
}


// this function will show all the info of the employees sorted in designation hierarchy to the manager
void viewEmployees(){
    if (head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            view_current_employee_info(current_node);
            current_node = current_node -> next;
        }
    }
    else{
        cout << "\nSorry, there is no employee available." << endl << endl;
    }
}
// this function will show an employees all informations by taking the designation as an input
void view_by_designation(){
    string check_designation;
    cout << "\nEnter designation: "; cin >> check_designation;
    cout << endl;
    if(head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            if (check_designation == current_node -> designation){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }
    }else{
        cout << "\nSorry, there is no employee available." << endl << endl;
    }
}

//this function maintains the hierarchy of designation and shows all info of employees in that serial.
void view_by_designation_by_hierarchy(){
    if(head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Director"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Manager"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Officer"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Accountant"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Salesman"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Clerk"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Intern"){
                view_current_employee_info(current_node);
            }
        current_node = current_node -> next;
        }
    }else{
        cout << "\nSorry, there is no employee available." << endl << endl;
    }
}

//This function will show employees info in hierarchy of designation only for guest
void view_by_designation_by_hierarchy_for_guest(){
if(head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Director"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Manager"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Officer"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Accountant"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Salesman"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Clerk"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }

        current_node = head;
        while(current_node != NULL){
            if (current_node -> designation == "Intern"){
                view_current_employee_info_for_guest(current_node);
            }
        current_node = current_node -> next;
        }
    }else{
        cout << "\nSorry, there is no employee available." << endl << endl;
    }
}
//This function will delete an employee node after connecting its the previous node to its next node
void delete_employee(){
    cout << "Enter Employee ID that you want to delete: ";
    int e_id;
    cin >> e_id;
    bool isFound = false;
    if (head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            employee *temp_node = current_node;
            if (e_id == current_node -> id){
                isFound = true;
                view_current_employee_info(current_node);
                if(current_node -> next == NULL){
                    current_node -> prev -> next = NULL;
                }
                else if(current_node == head){
                    current_node -> next -> prev = NULL;
                }
                else{
                temp_node -> prev -> next = temp_node -> next;
                temp_node -> next -> prev  = temp_node -> prev;
                }
                delete temp_node;
                break;
            }
        current_node = current_node -> next;
        }
        if (!isFound)
            cout << "Sorry, there is no employee with id " << e_id << "." << endl << endl;
        cout << "The following employee account has been deleted successfully."<< endl << endl;
    }
}
//this function will take new input for designation of an employee
void promote_employee(){
    cout << "\nEnter Employee ID for promotion: ";
    int e_id;
    cin >> e_id;
    if (head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            if (e_id == current_node -> id){

                view_current_employee_info(current_node);

                if (current_node -> designation == "Intern"){
                        current_node -> designation = "Clerk";}
                else if (current_node -> designation == "Clerk"){
                current_node -> designation = "Salesman";}
                else if (current_node -> designation == "Salesman"){
                current_node -> designation = "Accountant";}
                else if (current_node -> designation == "Accountant"){
                current_node -> designation = "Officer";}
                else if (current_node -> designation == "Officer"){
                current_node -> designation = "Manager";}
                else if (current_node -> designation == "Manager"){
                current_node -> designation = "Director";}
                else {cout<<" Employee can not be promoted"<<endl;}

cout << "\nNew designation has been replaced successfully." << endl << endl;

                cout<< current_node->name<<" is a "<< current_node->designation<<" now"<< endl<< endl;
                cout << "New Status of the Employee:"<<endl<< endl;
                view_current_employee_info(current_node);

                break;
                    break;



            }
        current_node = current_node -> next;
        }
    }
}


//this function allows to change the status of an employ from unsuspended to suspended
void suspend_employee(){
    cout << "\nEnter Employee ID that you want to promote: ";
    int e_id;
    string promotion;
    bool isFound = false;
    cin >> e_id;
    if (head != NULL){
        employee *current_node = head;
        while(current_node != NULL){
            if (e_id == current_node -> id){
                isFound = true;
                current_node -> is_suspend = true;

                break;
            }
        current_node = current_node -> next;
        }
        if (!isFound)
            cout << "Sorry, there is no employee with this id " << e_id << endl << endl;
        cout << current_node-> name << " has been successfully suspened." << endl << endl;
        view_current_employee_info(current_node);
    }
}
//this function is made for having some preloaded data in the program
void loadDummyData(){
    employee *new_employee = new employee;
    new_employee -> id = 15874;
    new_employee -> name = "Azwad Bhuiyan";
    new_employee -> age = 22;
    new_employee -> gender = 'M';
    new_employee -> salary = 30000;
    new_employee -> is_suspend = false;
    new_employee -> designation = "Manager";

    employee *new_employee2 = new employee;
    new_employee2 -> id = 11485;
    new_employee2 -> name = "Tasnima Zahin";
    new_employee2 -> age = 25;
    new_employee2 -> gender = 'F';
    new_employee2 -> salary= 50000;
    new_employee2 -> is_suspend = false;
    new_employee2 -> designation = "Director";

    employee *new_employee3 = new employee;
    new_employee3 -> id = 15616;
    new_employee3 -> name = "Elina Karimova";
    new_employee3 -> age = 22;
    new_employee3 -> gender = 'F';
    new_employee3 -> salary= 0.f;
    new_employee3 -> is_suspend = false;
    new_employee3 -> designation = "Intern";

    employee *new_employee4 = new employee;
    new_employee4 -> id = 24619;
    new_employee4 -> name = "John Watson";
    new_employee4 -> age = 27;
    new_employee4 -> gender = 'M';
    new_employee4 -> salary= 20000;
    new_employee4 -> is_suspend = false;
    new_employee4 -> designation = "Officer";

    employee *new_employee5 = new employee;
    new_employee5 -> id = 57815;
    new_employee5 -> name = "Susmita Chowdhury";
    new_employee5 -> age = 26;
    new_employee5 -> gender = 'F';
    new_employee5 -> salary= 25000;
    new_employee5 -> is_suspend = false;
    new_employee5 -> designation = "Accountant";

    employee *new_employee6 = new employee;
    new_employee6 -> id = 66201;
    new_employee6 -> name = "Sinthiya Prome";
    new_employee6 -> age = 22;
    new_employee6 -> gender = 'f';
    new_employee6 -> salary= 10000;
    new_employee6 -> is_suspend = false;
    new_employee6 -> designation = "Salesman";

    employee *new_employee7 = new employee;
    new_employee7 -> id = 11616;
    new_employee7 -> name = "Alamgir Alam";
    new_employee7 -> age = 31;
    new_employee7 -> gender = 'M';
    new_employee7 -> salary= 6000;
    new_employee7 -> is_suspend = false;
    new_employee7 -> designation = "Intern";

    head = new_employee;
    new_employee -> prev = NULL;
    new_employee -> next = new_employee2;
    new_employee2 -> prev = new_employee;
    new_employee2 -> next = new_employee3;
    new_employee3 -> prev = new_employee2;
    new_employee3 -> next = new_employee4;
    new_employee4 -> prev = new_employee3;
    new_employee4 -> next = new_employee5;
    new_employee5 -> prev = new_employee4;
    new_employee5 -> next = new_employee6;
    new_employee6 -> prev = new_employee5;
    new_employee6 -> next = new_employee7;
    new_employee7 -> prev = new_employee6;
    new_employee7 -> next = NULL;

}



int main()
{
loadDummyData();
int option = 2, option2 = 2, pin = 2;

while(option != 0){
    cout << "Enter any of the following option below:" << endl;
    cout << "1. Log in as manager\n2. Log in as guest\n0. Exit" << endl;
    cin >> option;
    if (option == 1){
        pin = NULL;
        cout << "Enter manager account pin no." << endl;
        cin >> pin;
        if (pin == 1234){
        while(option2 != 0){
            cout << "Enter any of the following option below:" << endl;
            cout << "1. Insert an employee\n2. View all employees\n3. View employees by designation" << endl;
            cout << "4. Delete an employee\n5. Promote an employee\n6. Suspend an employee" << endl;
            cout << "7. View employees by their hierarchy\n0. Log Out" << endl;
            cin >> option2;
            if (option2 == 1){
                insertEmployee();
            }
            else if(option2 == 2){
                viewEmployees();
            }
            else if(option2 == 3){
                view_by_designation();
            }
            else if(option2 == 4){
                delete_employee();
            }
            else if(option2 == 5){
                promote_employee();
            }
            else if(option2 == 6){
                suspend_employee();
            }
            else if(option2 == 7){
                view_by_designation_by_hierarchy();
            }
        }
        }
        else{
            cout << "Sorry, wrong pin." << endl;
        }
    }
    else if (option == 2){
        while (option2 != 0){
            cout << "1. View employee by their hierarchy.\n0. Log Out" << endl;
            cin >> option2;
            if (option2 == 1)
                view_by_designation_by_hierarchy_for_guest();
        }
    }
    else if (option == 0){
        break;
    }
    else{
        cout << "Sorry, wrong input." << endl;
    }
    option = option2 = 5;
}
cout << "\nThank you for using our system. Have a nice day!" << endl;
    return 0;
}
