# Work Report

## Names: <ins>Lim, Stephanie&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Liu, Shuchen&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;West, David</ins>

## Features:

- Not Implemented:
  - No features have been not implemented

<br><br>

- Implemented:
  - Convert a dec number to bin, hex, and oct
  - Convert a 2's complements to dec number
  - Convert a hex number to dec, bin, and oct
  - Convert a oct number to dec, bin, and hex
  - Convert a dec number to 2's complements
  - Convert a bin number to dec, hex, oct

<br><br>

- Partly implemented:
  - 2's complements only support 8 bits(127 to -128)

<br><br>

- Bugs
  - No known bugs

<br><br>

# Reflections:

- In order to let other people push to your Github repo, you need to invite them 
  first
- It is interesting to code all the conversions. The calculation is simpler than 
  I thought 
- stoi() could convert string to int, and to_string() could convert int to 
  string

<br><br>

# **output**

<pre>

(base) shuchenliu@shuchendeiMac build % ./main
What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
1

What is the input
127
Bin: 1111111
Hex: 7F
Oct: 177
Sign Bin: 01111111

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
1

What is the input
77
Bin: 1001101
Hex: 4D
Oct: 115
Sign Bin: 01001101

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
1

What is the input
2
Bin: 10
Hex: 2
Oct: 2
Sign Bin: 00000010

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
1

What is the input
-77
Bin: -1001101
Hex: -4D
Oct: -115
Sign Bin: 10110011

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
1

What is the input
-128
Bin: -10000000
Hex: -80
Oct: -200
Sign Bin: 10000000

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
2

What is the input
11110011
Dec: 243
Hex: F3
Oct: 363
Sign Bin to Dec: -13

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
2

What is the input
01101100
Dec: 108
Hex: 6C
Oct: 154
Sign Bin to Dec: 108

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
2   

What is the input
00000010
Dec: 2
Hex: 2
Oct: 002
Sign Bin to Dec: 2

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
3

What is the input
FF
Dec: 255
Bin: 11111111
Oct: 377

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
3

What is the input
F4D
Dec: 3917
Bin: 111101001101
Oct: 07515

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
4

What is the input
6527
Dec: 3415
Bin: 110101010111
Hex: D57

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
4

What is the input
777777
Dec: 262143
Bin: 111111111111111111
Hex: 3FFFF

What is your input type?(enter 0 to exit)
1. Dec  2. Bin  3. Hex  4. Oct
0

Exit successfully.