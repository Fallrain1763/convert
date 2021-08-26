#include <iostream>
#include "includes/convert.h"

using namespace std;

int main() {

    cout << "What is your input type?" << endl;
    cout << "1. Dec  2. Bin  3. Hex  4. Oct" << endl;
    int input_type;
    cin >> input_type;

    cout<<"What is the input"<<endl;
    string input;
    cin >>input;
    
    // Dec
    if (input_type == 1)
    {
        cout << "Bin: " << dec_to_bin(input) <<endl;
        cout << "Hex: " << dec_to_hex(input) <<endl;
        cout << "Oct: " << dec_to_oct(input) <<endl;
    }
    
    // Bin
    else if(input_type ==2)
    {
        cout << "Dec: " << bin_to_dec(input) <<endl;
        cout << "Hex: " << bin_to_hex(input) <<endl;
        cout << "Oct: " << bin_to_Oct(input) <<endl;
    }
    
    // Hex
    else if(input_type ==3)
    {
        cout << "Dec: " << hex_to_dec(input) << endl;
        cout << "Bin: " << hex_to_bin(input) << endl;
        cout << "Oct: " << hex_to_oct(input) << endl;
    }
    
    // Oct
    else if(input_type == 4)
    {
        cout << "Dec: " << oct_to_dec(input) <<endl;
        cout << "Bin: " << oct_to_bin(input) <<endl;
        cout << "Hex: " << oct_to_hex(input) <<endl;
    }

    // Invalid input type
    else
    {
        cout<<"Invalid input type"<<endl;
    }

    return 0;
}


