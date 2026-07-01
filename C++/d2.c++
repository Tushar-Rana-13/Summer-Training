#include <iostream>
using namespace std;

class student
{   
    int student_id;                     // Instance variables -> created multiple times for every object .
    string name;
    string branch;
    int marks[5];
    static string clg_name ;            // Class or static variables -> same for all objects .   

public:
    void setdata(int s_id, string n, string b)
    {
        student_id = s_id;
        name = n;
        branch = b;
    }
 
    void print_data()
    {
        cout << "Name of Student : "<< name << endl;
        cout << "Id of Student : "<< student_id << endl;
        cout << "Student Branch : "<< branch << endl;
        cout<<"College Name: "<< clg_name<<endl ;
    }

    void setmarks(int *arr)         // Pointer is passed which points to actual array created at main function .
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = *(arr + i);      // *(arr + i) gets value at address && arr+i points to next element address in array .
        }
    }

    void cal_per()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {   
            sum += marks[i];
        }
        cout << "Percentage Obtained : " << (sum * 100) / 50;
    }

    static void print_clg() {               // Static function to call static member .
        cout<<"----------->"<<clg_name<<"<-------------"<<endl ;
    }
};

string student::clg_name = "RBPU" ;         // :: (SRO operator) used to allocate memory to static variable declared in class . 

int main()
{
    student::print_clg() ;
    student obj;
    obj.setdata(77, "shubman", "CSE");
    obj.print_data();
    int m[5] = {9, 8, 9, 7, 6};
    obj.setmarks(m);
    obj.cal_per();

    return 0;
}




//     Static function --------------------------> Static Member 
//                                                    ^
//                                                    |
//                                                    |
//                                                    |
//                                                    |
//                                                 No-Static Function--------------------------> Non-static Member 
                                            