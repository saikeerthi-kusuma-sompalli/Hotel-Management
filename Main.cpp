#include<iostream>
#include<string>
#include<vector>
using namespace std;


vector< vector<string> > allCustomers;

class HotelManagement{
public:
        vector<string> customer;
        void customerInfo(){
                string firstName;
                string lastName;
                string email;
                string mobileNumber;
                string address;
                cout << "Enter First name: ";
                getline(cin,firstName);
                cout << "Enter Last name: ";
                getline(cin,lastName);
                cout << "email: ";
                getline (cin,email);
                cout << "Enter mobile number: ";
                getline(cin,mobileNumber);
                cout << "Enter Address: ";
                getline (cin,address);
                customer.push_back(firstName);
                customer.push_back(lastName);
                customer.push_back(email);
                customer.push_back(mobileNumber);
                customer.push_back(address);
                allCustomers.push_back(customer);
        }
        void getCustomerInfo(){
                for (int i = 0; i < customer.size();i++){
                        cout << customer[i] << endl;
                }
        }
        void allCustomersInfo(){
                for (int i= 0; i < allCustomers.size();i++){
                        for (int j =0; j < allCustomers[i].size();j++){
                                cout << allCustomers[i][j] << " ";
                        }
                        cout << endl;
                }
        }
};

int main(){
        HotelManagement H1,H2;
        H1.customerInfo();
        H2.customerInfo();
        H1.getCustomerInfo();
        H2.getCustomerInfo();
        H1.allCustomersInfo();
}

