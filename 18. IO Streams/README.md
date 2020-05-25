## Streams

- Stream is a flow of data or flow of characters, streams are used for accessing the data from outside the program. From external sources or destination. We can have data from external source to program or vice-versa.

- Program can get data from keyboard, send data to monitor, read and write data to a file or from a network. There are various sources for program to receive and send data. There are Input Output streams called I/O. There are built-in classes present in C++ to access I/O streams that we can make use of. 

- Name of class is **ios** i.e. input output stream. From this we have `istream` class for input stream and `ostream` class for output stream. For **accessing files** there are classes available called `ifstream` input file stream and `ofstream` output file stream.

- For input stream from the keyboard, there is already an object present in iostream header file called `cin` and cout object of ostream class used to output to a device your data.

## File Handling

```cpp
#include <fstream>
#include <iostream>
int main()
{
    ofstream outfile("file.txt",ios::app); // Associate outfile object with the file passed to it. What we write to outfile object gets associated with the file.    
    // To insert
    outfile << "Hello"<<endl; // Write Hello and switch to new line
    outfile << 25<<endl; // Write 25 and go to new line.
    outfile.close(); // To close the file.
}
```

- If the file is not present in that case fill will be created if we are using output file stream ofstream in our code. If there is some content in the file in that case content will be truncated or removed. If you do not want data to be overwritten with new data you can openfile using **append mode** passed to the object using `ios::app`. Similarly to truncate the mode is `ios::trunc`.

## Type of Files: Text and Binary

- Text files are human readable and binary files are machine readable, what this means is if you write 23 in binary file it will be written in binary 0s and 1s form whereas in txt file 2 of 23 gets converted to ASCII code and 3 to its respective ASCII code i.e. 50 for 2 in ASCII and 51 for 3 in ASCII. For TXT notepad or any other text editor will convert every 8 bit of binary to ASCII code and look it up and convert to corresponding character. 

- To read and write data in binary in C++ `ios::binary` mode has to be used. Binary form is faster as for txt files conversion is required. Space wise as well txt takes up more space as compared to binary files.

## Manipulators

- Manipulators are used to enhance the strings or to format strings. When we want to write the data, to write the data we can adopt some formats. We have manipulators available for different data types.

- For **integer** we have following manipulators available : `hex`, `oct`, `dec` for hexadecimal form, octal and decimal form respectively.

```cpp
#include iostream
using namespace std;
int main(){
    cout<< hex << 163; // Will give output as A3
    cout << bin << 43; // Will display binary of 43
}
```

- For float we have manipulators like  `fixed` and `scientific` to display the output in different formats.