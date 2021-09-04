#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
using namespace std;

// Dec convert functions
string dec_to_bin(string input);   
string dec_to_hex(string input);   
string dec_to_oct(string input);
string dec_to_sign_bin(string input); 

// Bin convert functions
string bin_to_dec(string input);   
string bin_to_hex(string input);   
string bin_to_Oct(string input); 
string sign_bin_to_dec(string input);

// Hex convert functions
string hex_to_dec(string input);   
string hex_to_bin(string input);   
string hex_to_oct(string input); 

// Oct convert functions
string oct_to_dec(string input);  
string oct_to_bin(string input);   
string oct_to_hex(string input); 

#endif