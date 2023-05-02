#include <iostream>
#include<conio.h>
#include<string>
#include <fstream>
#include<windows.h>
using namespace std;
class Word
{
public:
    string name,father_name,mother_name,address1,address2,mob_num,sex;
    string married_status,nationality,dob;
    string group,board;
    int  passyear;
    string result;

    int sz, line_count = 0, degree_count;
    char line[2000];
///Word File  Part
    void input()
    {
        ifstream read_info;
        ofstream write_info;
        read_info.open("CV.doc",ifstream::app);
        read_info.seekg(0,read_info.end);
        ifstream inFile("CV.doc");
        write_info.open("CV.doc", ios::app);
        write_info << "                   "<<"       Curriculum Vitae"<<endl<<endl<<endl<<endl;
        ofstream info_append("CV.doc", ios::app);
        cout<<"\n";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t Enter Your Name \t: ";
        getline(cin>>ws,name);
        cout <<"\t\t\t\t Enter Father's Name\t: ";
        getline(cin >> ws, father_name);
        cout<<"\t\t\t\t Enter Mother's Name\t: ";
        getline(cin >> ws, mother_name);
        cout<<"\t\t\t\t Enter Personal Address\t: ";
        getline(cin >> ws, address1);
        cout<<"\t\t\t\t Enter Present Address\t: ";
        getline(cin >> ws, address2);
        cout<<"\t\t\t\t Enter Mobile Number\t: ";
        getline(cin >> ws, mob_num);
        cout<<"\t\t\t\t Enter Date Of Birth\t: ";
        getline(cin >> ws, dob);
        cout<<"\t\t\t\t Enter Sex\t\t: ";
        getline(cin >> ws, sex);
        cout<<"\t\t\t\t Enter Married Status\t: ";
        getline(cin >> ws, married_status);
        cout<<"\t\t\t\t Enter Nationality\t: ";
        getline(cin >> ws, nationality);
        cout<<"\n";
        info_append <<"Name              :"<<name<<endl<<endl<<endl;
        info_append <<"Father's Name     :"<<father_name<<endl<<endl<<endl;
        info_append <<"Mother's Name     :"<<mother_name<<endl<<endl<<endl;
        info_append <<"Personal Address  :"<<address1<<endl<<endl<<endl;
        info_append <<"Present Address   :"<<address2<<endl<<endl<<endl;
        info_append <<"Mobile Number     :"<<mob_num<<endl<<endl<<endl;
        info_append <<"Date of Birth     :"<<dob<<endl<<endl<<endl;
        info_append <<"Sex               :"<<sex<<endl<<endl<<endl;
        info_append <<"Married Status    :"<<married_status<<endl<<endl<<endl;
        info_append <<"Nationality       :"<<nationality<<endl<<endl<<endl<<endl<<endl<<endl;
        info_append <<"Educational Qualification       "<<endl<<endl;
        info_append <<"Check Excel Sheet       "<<endl<<endl<<endl;

        cout<< "\t\t\t       Info Added Successfully....\n"<< endl;
        system("cls");
    write_info.close();
    }
    ///Excel File art
    void input2()
    {
    ifstream read_info;
    ofstream write_info;
    read_info.open("CV.csv",ifstream::app);
    read_info.seekg(0,read_info.end);
    ifstream inFile("CV.csv");
    write_info.open("CV.csv", ios::app);
    write_info << "Degrees" << "," << "Group" << "," << "Board/University"<<","<<"Pass.Year"<<","<<"Grade"<< "\n";
    ofstream info_append("CV.csv", ios::app);
    cout<<"\n";
    cout << "\n\n\n\n\n";
    cout << "\t\t\t   How Many Degrees Do you Have(Currently): ";
    cin >> degree_count;
    cout << "\n\n";
    for (int i = 0; i < degree_count; i++)
    {

        cout <<"\t\t\t\t Enter Degree Name\t\t: ";
        getline(cin >> ws, name);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Group\t\t: ";
        getline(cin >> ws, group);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Board/University\t: ";
        getline(cin >> ws, board);
        cout<<"\t\t\t\t Enter "<<name<<" "<<"Pass Year\t\t: ";
        cin>>passyear;
        cout<<"\t\t\t\t Enter "<<name<<" "<<"GPA/CGPA\t\t: ";
        getline(cin >> ws, result);
        cout<<"\n";

        info_append << name << "," << group << "," << board<<","<<passyear<<","<<result<< "\n";
        cout<< "\t\t\t  "<<name<<"  Qualification Added Successfully....\n"<< endl;
    }
    write_info.close();
    }





};

int main()
{
    char start_page_operation;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,6);
   cout<<endl;
   cout<<"\t\t\t       "<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   cout<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~";
   cout<<""<<endl;//project name
   cout<<"\t\t\t       ~\t"<<" \t    CV BUILDER"<<"\t       \t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"   \t   Developed By\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
     cout<<"\t\t\t       ~\t"<<"   \t    ->  Pavel\t    \t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;

  cout<<"\t\t\t       ~\t     "<<"Jahangirnagar University\t\t    ~"<<endl<<"\t\t\t       ~\t   \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t"<<"   \t      IIT-12\t\t    \t    ~"<<endl<<"\t\t\t       ~\t   \t\t\t\t\t    ~"<<endl;

   cout<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       "<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   cout << "\t\t\t       \t\t   \t\t\t\t      Press ENTER To Continue"<<ends;

   while (cin.get() != '\n')
   {
       cin.get();
   }
   cout << endl<< endl<< endl<< endl<< endl;
     system("cls");
   ///Start Page
    Word obj1;
    obj1.input();
    obj1.input2();
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t   See you Soon In Another Project";
    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t(#_#)"<<endl;
    getch();




    return 0;
}
