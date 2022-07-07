#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool loginsys(const string& username,const string& password){
    string passw;
    string uname;
    ifstream data;
    data.open("/Users/wojciechszyjka/CLionProjects/Projektx/data.txt");
    getline(data,uname,';');
    getline(data,passw,';');

    if (passw == password and uname == username){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string passwd;
    string username;
    cout << "Enter username:" ;
    getline(cin,username);
    cout << endl << "Enter password:";
    getline(cin,passwd);
    cout << endl;

    if (loginsys(username,passwd)){
        cout << "Entered good username and password"<< endl;
    }
    else {
        cout << "Entered wrong username or password"<< endl;
    }

    return 0;

}
