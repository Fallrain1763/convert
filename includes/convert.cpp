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


//Base 10 to Base 16
string dec_to_hex(string input)
{
    string temp="123";
    string binary = dec_to_bin(input);
    temp = bin_to_hex(binary);
    return temp;
}

// Base 10 to Base 8
string dec_to_oct(string input)
{
    string temp="";
    int oct = 8;
    int inputted_value = stoi(input);
    int remainders[100]; 
    int used = 0;
    do
    {
        int remain = inputted_value % 8;
        remainders[used] = remain;
        used++;
        inputted_value = inputted_value / 8;
    }while (inputted_value > 0);
    used = used-1;
    while (used > -1)
    {
        temp+= to_string(remainders[used]);
        used--;
    }
    return temp;
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
    string temp="123";
    int string_length = input.length();
    return temp;
}

// Base 2 to Base 8 (not completed yet)
string bin_to_Oct(string input)
{
    string temp="123";
    int string_length = input.length();
    string fullinput = input;
    int whole = string_length % 3;
    // checks if binary is divisable by 3 for grouping method
    while(whole != 0)
    {
        fullinput = "0" + fullinput;
        whole = whole -1;
    }
    int item_value = 0;
    string group[input.length()+1];
    string grouped = "";
    int curr_at = 0;
    // should group all binary from the input
    for(int i=0;i<input.length()+1;i++)
    {
        if (count == 2)
        {
            group[curr_at] = grouped;
            curr_at++;
            count = 0;
            grouped = "";
        }
        else
        {
            count++;
            grouped = grouped + input.at(i);
        }
    }
    temp = "";
    //should change all binary to oct
    for(int used=0;used<curr_at;used++)
    {
        string binary_item = group[used];
        int binary_length = binary_item.length();
        int item_amount=0;
        if (binary_item.at(0) == "1")
        {
            item_amount = item_amount + 4;
        }
        if (binary_item.at(1) == "1")
        {
            item_amount = item_amount + 2;
        }
        if (binary_item.at(2) == "1")
        {
            item_amount = item_amount + 1;
        }
        temp = temp + to_string(item_amount);
        item_amount = 0;
    }
    return temp;
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

//Base 16 to Base 2
// looks finished
string hex_to_bin(string input)
{
    string temp="123";
    char arr[input.length()+1];
    string output[input.length()+1];
    strcpy(arr,input.c_str());
    int get_arr=0;
    for(int count = 0;count > input.length()+1; count = count+1)
    {
        string item="";
        int value = arr[count] - '0';
        if value >=8)
        {
            value = value -8;
            item = item + "1";
        }
        else
        {
            item = item +"0";
        }
        if(value >= 4)
        {
            value = value-4;
            item = item + "1";
        }
        else
        {
            item = item + "0";
        }
        if (value >= 2)
        {
            value = value-2;
            item = item +"1";
        }
        else
        {
            item = item +"0";
        }
        if(value >= 1)
        {
            value = value -1;
            item= item+"1";
        }
        else
        {
            item = item + "0";
        }
        output[count] = item;
    }
    
    temp = "";
    while (get_arr != input.length())
    {
        temp = temp + output[get_arr];
    }
    return temp;
}

//Base 16 to Base 8
string hex_to_oct(string input)
{
    string temp="123";
    //changes from Base 16 to Base 10
    string binary = hex_to_bin(input);
    //now that have dec change to oct
    temp = bin_to_Oct(binary);
    return temp;
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

//Base 8 to Base 2
// looks finished
string oct_to_bin(string input)
{
    string temp="123";
    char arr[input.length()+1];
    string output[input.length()+1];
    strcpy(arr,input.c_str());
    int get_arr=0;
    for(int count = 0;count > input.length()+1; count = count+1)
    {
        string item="";
        int value = arr[count] - '0';
        if(value >= 4)
        {
            value = value-4;
            item = item + "1";
        }
        else
        {
            item = item + "0";
        }
        if (value >= 2)
        {
            value = value-2;
            item = item +"1";
        }
        else
        {
            item = item +"0";
        }
        if(value >= 1)
        {
            value = value -1;
            item= item+"1";
        }
        else
        {
            item = item + "0";
        }
        output[count] = item;
    }
    
    temp = "";
    while (get_arr != input.length())
    {
        temp = temp + output[get_arr];
    }
    return temp;
}

//Base 8 to Base 16
string oct_to_hex(string input)
{
    string temp="123";
    // Base 8 to Base 10
    string binary = oct_to_bin(input);
    //now that have dec change to hex
    temp = bin_to_hex(binary);
    return temp;
}