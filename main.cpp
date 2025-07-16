#include <iostream>    // for displaying to the terminal
#include <fstream>     // for writing /  reading rom the file
#include <limits> 
#include <filesystem>

using namespace std;      


void displayMessage(const string& msg)
{
    cout << msg << endl;
}

void displayMenu()
{
    displayMessage("\nPassword Manager");
    displayMessage("1. Add Password");
    displayMessage("2. View Password");
    displayMessage("3. Exit");
    displayMessage("Enter your choice: ");
}


void savePassword(const string& site , const string& password)
{
    ofstream file ("Passwords.txt" , ios::app);  //without ios:app it would overwrite the file , here it appends (app)
    if(file.is_open())
    {
        file << site << " " << password << "\n";
        file.close();
        displayMessage("Password saved successfully!");
    }
    else{
        cerr << "Error: Unable to open the file for writing .\n";  //cerr means console error and it is part of iostream library just like cout and cin
    }
}


void loadPasswords()
{
    ifstream file("Passwords.txt");
    if(file.is_open())
    {
        string site , password;
        displayMessage("\nSaved Passwords:");
        while(file >> site >> password)
        {
            cout << " Site: " << site << " , Password: " << password << "\n";
        }
        file.close();
    }
    else{
        cerr << "\n[System] No passwords saved yet.\n";
    }

}
 


int main()
{
    int choice;
    string site , password;
    //std::cout << "Saving file at: " << std::filesystem::absolute("Passwords.txt") << std::endl;
    cout << "Current working directory: " << filesystem::current_path() << endl;




    do{
        displayMenu();

        cin >> choice;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


        switch(choice)
        {
            case 1:
                displayMessage("Enter the site Name: ");
                cin >> site;
                displayMessage("Enter Password: ");
                cin >> password;
                savePassword(site , password);
            break;

            case 2:
                loadPasswords();
            break;

            case 3:
                displayMessage("\n[System] Exiting...");
            break;

            default:

                displayMessage("\n[System] Invalid choice. Please try again.");
                break;
        }


    } while(choice != 3);


    return 0;
}


