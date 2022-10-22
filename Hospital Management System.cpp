/*
                            Assalamualaikum waa Rahmatullah,
         this is the Hospital Management Project of System Still Not Crushed!
*/

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Hospitalmanagement Class
class hospitalmanagement
{
public:
    void control_panel();
    void add_patient();
    void show_patient();
    void check_patientbill();
    void edit_patient();
    void del_patient();
};

// Function to display the menus
void hospitalmanagement::control_panel()
{
    cout.width(90);
    system("cls");
    cout << "           Dear Audience,  Assalamualaikum waa Rahmatullah" << endl;
    cout << "                                                Welcome to our Hospital Management System ";
    cout << "\n\n\t\t\t\tCONTROL PANEL";
    cout << "\n\n1. Add Patient(s)";
    cout << "\n2. Show Patient(s)";
    cout << "\n3. Search bills for a patient ";
    cout << "\n4. Edit Patient Record";
    cout << "\n5. Delete Patient Record";
    cout << "\n6. exit";


    cout << "\n\n\t\t\tDeveloper_1\n\t\tTasfia Sultana Bhuiyan";
    cout << "\n\tM.ID: C213201, Dept. of CSE, IIUC. Cell: 01710274580";
    cout << "\n\tEmail:tasfiabhuiyan2001@gmail.com";

    cout << "\n\n\t\t\tDeveloper_2\n\t\t Jannatul Mawa Hridy";
    cout << "\n\tM.ID: C213203, Dept. of CSE, IIUC. Cell: 01874255509";
    cout << "\n\tEmail:nafisaayman523@gmail.com";

    cout << "\n\n\t\t\tDeveloper_3\n\t\t Naznin Sultana Lamia ";
    cout << "\n\tM.ID: C213209, Dept. of CSE, IIUC. Cell: 01832935022";
    cout << "\n\tEmail:nurejannatchowdhury381@gmail.com";
}

// Function to add patient
void hospitalmanagement::add_patient()
{
    system("cls");
    fstream file;
    int bill;
    string p_name, d_name, p_id, des_name, p_num;
    cout << "\n\n\t\t\t\tAdd Patient(s)";
    cout << "\n\nPatient ID: ";
    cin >> p_id;
    cout << "\n*Patient Name must be a single word!";
    cout << "\n Name: ";
    cin >> p_name;
    cout << "\n*Referenced Doctor's Name must be a single word!";
    cout << "\nReferenced Doctor's Name: ";
    cin >> d_name;
    cout << "\n*Patient's Desease Name must be a single word!";
    cout << "\nDesease Name: ";
    cin >> des_name;
    cout << "\n*Patient's Mobile Number without any space!";
    cout << "\nPatient's Mobile Number: ";
    cin >> p_num;
    cout << "\nBill of Patient: ";
    cin >> bill;

    // Open file in append or output mode
    file.open("D:// patient.txt", ios::out | ios::app);
    file << " " << p_id << " " << p_name << " " << des_name << " " << p_num << " " << d_name << " " << bill << "\n";
    file.close();
}



// Function to display car
void hospitalmanagement::show_patient()
{
    system("cls");
    fstream file;
    double bill;
    string p_name, d_name, p_id, des_name, p_num;
    cout << "\n\n\t\t\t\t\tAll PATIENT lists are in the following";

    // Open the file in input mode
    file.open("D:// Patient.txt", ios::in);
    if (!file)
        cout << "\n\nFile Opening Error!";
    else
    { // file << " " << p_id << " " << p_name << " " << des_name << " " << p_num << " " << d_name << " " << bill << "\n";
        cout << "\n\n\nPatient ID\t\tCar's Company Name" << "\t\tCar's Author Nane\t\tBill of Patient(s)\n\n";
        file >> p_id >> p_name >> des_name >> p_num;
        file >> d_name >> bill;

        // Till end of file is reached
        while (!file.eof())
        {
            cout << " " << p_id
                 << "\t\t" << p_name
                  << "\t\t" << des_name
                   << "\t\t" << p_num
                 << "\t\t\t\t" << d_name
                 << "\t\t\t\t" << bill
                 << "\n\n";
            file >> p_id >> p_name >> des_name >> p_num;
        file >> d_name >> bill;
        }

        system("pause");

        // Close the file
        file.close();
    }
}

// Function to check the car
void hospitalmanagement::check_patientbill()
{
    system("cls");
    fstream file;
    double bill, count = 0;
    string p_id, p_name, a_name, p_idd;

    cout << "\n\n\t\t\t\tCheck Bills for the Patient";

    // Open the file in input mode
    file.open("D:// patient.txt", ios::in);

    if (!file)
        cout << "\n\nFile Opening Error!";

    else
    {
        cout << "\n\nPatient ID : ";
        cin >> p_idd;
        file >> p_id >> p_name;
        file >> a_name >> bill;

        while (!file.eof())
        {
            if (p_idd == p_id)
            {
                system("cls");
                cout << "\n\n\t\t\t\tCheck Bills for the Patient";
                cout << "\n\Patient ID: " << p_id;
                cout << "\nCar's Company Name: " << p_name;
                cout << "\nCar's Author Name: " << a_name;
                cout << "\nBill of the Patient: " << bill;
                cout << endl << endl;
                count++;
                break;
            }

            file >> p_id >> p_name;
            file >> a_name >> bill;
        }

        system("pause");
        file.close();

        if (count == 0)
            cout << "\n\n\t\tSorry\nRequested Patient ID not Found...!";
    }
}


// Function to edit the car
void hospitalmanagement::edit_patient()
{
    system("cls");
    fstream file, file1;
   double bill, no_co, count = 0;
    string p_name, p_na, a_name;
    string a_na, p_idd, p_id;

    cout << "\n\n\t\t\t\tEdit Patient Record";
    file1.open("D:// patient1.txt", ios::app | ios::out);
    file.open("D:// patient.txt", ios::in);

    if (!file)
        cout << "\n\nFile Opening Error!";

    else
    {
        cout << "\n\nPatient ID : ";
        cin >> p_id;
        file >> p_idd >> p_name;
        file >> a_name >> bill;

        // Till end of file is reached
        while (!file.eof())
        {
            if (p_id == p_idd)
            {
                system("cls");
                cout << "\t\t\t\tEdit Patient Record";
                cout << "\n\nNew Patient Name: ";
                cin >> p_na;
                cout << "\nCar's Author Name: ";
                cin >> a_na;
                cout << "\nBill of the Patient: ";
                cin >> no_co;

                file1 << " " << p_id << " " << p_na << " " << a_na << " " << no_co << "\n\n";
                count++;
            }

            else
                file1 << " " << p_idd << " " << p_name << " " << a_name << " " << bill << "\n\n";

            file >> p_idd >> p_name;
            file >> a_name >> bill;
        }

        if (count == 0)
            cout << "\n\nRequested Patient ID not Found...!";
    }

    cout << endl;
    system("pause");

    // Close the files
    file.close();
    file1.close();
    remove("D:// patient.txt");
    rename("D:// patient1.txt", "D:// patient.txt");
}

// Function to delete patient
void hospitalmanagement::del_patient()
{
    system("cls");
    fstream file, file1;
    double  bill, count = 0;
    string p_id, p_idd, p_name, a_name;
    cout << "\n\n\t\t\t\tDelete a Patient";

    // Append file in output mode
    file1.open("D:// patient1.txt", ios::app | ios::out);
    file.open("D:// patient.txt", ios::in);

    if (!file)
        cout << "\n\nFile Opening Error...";

    else
    {
        cout << "\n\nPatient ID : ";
        cin >> p_id;
        file >> p_idd >> p_name;
        file >> a_name >> bill;

        while (!file.eof())
        {
            if (p_id == p_idd)
            {
                system("cls");
                cout << "\n\n\t\t\t\tDelete a Patient";
                cout << "\n\nRequested Patient is Deleted Successfully...!\n\n";
                count++;
            }

            else
                file1 << " " << p_idd << " " << p_name << " " << a_name << " " << bill << "\n\n";

            file >> p_idd >> p_name;
            file >> a_name >> bill;
        }

        if (count == 0)
            cout << "\n\nRequested Patient ID not Found...!";
    }

    system("pause");

    // Close the file
    file.close();
    file1.close();

    remove("D:// patient.txt");
    rename("D:// patient1.txt", "D:// patient.txt");
}

// Function for car parking record
void patientRec()
{
    int ch;
    char x;
    hospitalmanagement p;

    while (1)
    {
        p.control_panel();
        cout << "\n\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            do {
                p.add_patient();
                cout << "\n\nWant to add another Patient? (only press: y/n): ";
                cin >> x;
            } while (x == 'y'|| x == 'Y');
            break;

        case 2:
            p.show_patient();
            break;

        case 3:
            p.check_patientbill();
            break;

        case 4:
            p.edit_patient();
            break;

        case 5:
            p.del_patient();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout << "\n\nINVALID CHOICE!!\n";
        }
    }
}

// Main Code
int main()
{
    // Calling the function
    patientRec();

    return 0;
}
