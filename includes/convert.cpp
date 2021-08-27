#include "convert.h"
#include <string>
#include <cstring> 
#include <cmath>

// Dec convert functions
//Base 10 to Base 2 
string dec_to_bin(string input)     
{
    //string to integer 
    int i_input = stoi(input);
    // array to store binary number
    int binaryNum[32];
    // counter for binary array
    int i = 0; 
    while (i_input > 0) {
        // storing remainder in binary array
        binaryNum[i] = i_input % 2; 
        i_input /= 2; 
        i++; 
    }
    string s_output = ""; 
    for (int j = i - 1; j >= 0; j--)
    s_output += to_string(binaryNum[j]); 

    return s_output;
}
    

string dec_to_hex(string input)     
{
    return "dec_to_hex";
}

string dec_to_oct(string input)     
{
    return "dec_to_oct";
}


// Bin convert functions
//Base 2 to Base 10 
string bin_to_dec(string input)     
{
    int i_input = stoi(input);
    int temp = 0, i = 0, remainder; 
    while (i_input != 0)
    {
        remainder = i_input % 10; 
        i_input /= 10; 
        temp += remainder*pow(2,i);
        ++i; 
    }
    
    string s_temp = to_string(temp);
    return s_temp;
}

string bin_to_hex(string input)     
{
    return "bin_to_hex";
}

string bin_to_Oct(string input)     
{
    return "bin_to_Oct";
}

// Hex convert functions
//Base 16 to Base 10 
string hex_to_dec(string input)     
{
    //Convert string to char array 
    int str_length = input.length();
    const int n = str_length + 1;
    int base = 1; 
    int temp = 0; 
    //Declare char array 
    char hexNum[n];
    //Copy contents of string to char array 
    strcpy(hexNum, input.c_str());
    for (int i=str_length-1; i>=0; i--) {
        if (hexNum[i]>='0' && hexNum[i]<='9') {
            temp += (hexNum[i] - 48)*base;
            base = base * 16;
        }
        else if (hexNum[i]>='A' && hexNum[i]<='F') {
            temp += (hexNum[i] - 55)*base;
            base = base*16;
        }
    }
    string s_temp = to_string(temp);
    return s_temp;
}

string hex_to_bin(string input)     
{
    return "hex_to_bin";
}

string hex_to_oct(string input)     
{
    return "hex_to_oct";
}

// Oct convert functions
//Base 8 to Base 10 
string oct_to_dec(string input)     
{
    int i_input = stoi(input);
    int temp = 0, i = 0, remainder; 
    while (i_input != 0)
    {
        remainder = i_input % 10; 
        i_input /= 10; 
        temp += remainder*pow(8,i);
        ++i; 
    }
    
    string s_temp = to_string(temp);
    return s_temp;
}
string oct_to_bin(string input)     
{
    return "oct_to_bin";
}

string oct_to_hex(string input)     
{
    return "oct_to_hex";
}