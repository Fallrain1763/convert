#include <iostream>
#include "includes/convert.h"

using namespace std;

int main() {

    int input_type;

    do{

        do{
            cout << "What is your input type?(enter 0 to exit)" << endl;
            cout << "1. Dec  2. Bin  3. Hex  4. Oct" << endl;
            cin >> input_type;
        }while (input_type < 0 || input_type > 4);

        cout << endl;

        if (input_type == 0)
        {
            cout << "Exit successfully." << endl;
            break;
        }

        cout << "What is the input" <<endl;
        string input;
        cin >> input;

        // Dec
        if (input_type == 1)
        {
            cout << "Bin: " << dec_to_bin(input) <<endl;
            cout << "Hex: " << dec_to_hex(input) <<endl;
            cout << "Oct: " << dec_to_oct(input) <<endl;
            cout << "Sign Bin: "<< dec_to_sign_bin(input)<<endl;
        }

        // Bin
        else if(input_type ==2)
        {
            cout << "Dec: " << bin_to_dec(input) <<endl;
            cout << "Hex: " << bin_to_hex(input) <<endl;
            cout << "Oct: " << bin_to_Oct(input) <<endl;
            cout << "Sign Bin to Dec: "<< sign_bin_to_dec(input)<<endl;
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

        cout << endl;

    }while (1);

    return 0;
}