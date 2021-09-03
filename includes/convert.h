#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
using namespace std;

// Dec convert functions
string dec_to_bin(string input);   
string dec_to_hex(string input);   
string dec_to_oct(string input);
string dec_to_sin_bin(string input); // assume this finished; needs to be written (Stephanie)
string dec_to_sin_hex(string input); // finished
string dec_to_sin_oct(string input); // finished

// Bin convert functions
string bin_to_dec(string input);   
string bin_to_hex(string input);   
string bin_to_Oct(string input); 
string sin_bin_to_dec(string input); // needs to be written (David)

// Hex convert functions
string hex_to_dec(string input);   
string hex_to_bin(string input);   
string hex_to_oct(string input); 

// Oct convert functions
string oct_to_dec(string input);  
string oct_to_bin(string input);   
string oct_to_hex(string input); 


#endif