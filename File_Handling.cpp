#include <iostream> // this library is use for stream operations in C++, such as 'cin' & 'cout'
#include <fstream>  // this library is use for stream operations in a File through C++, such as 'ifstream' & 'ofstream'
//#include <string>       // uncomment this library, if you gets any error regarding string library; This is been added to use 'string' class members in our program

using namespace std; // namespace is used to prevent writing 'std::' before every "cin" or "cout" command

int main() // This is the main function which is the entry point of every program in C++
{
    ifstream read;  // The object of 'ifstream', read, is used to read from the 
                    // file

    ofstream write; // The object of 'ofstream', write, is used to write to the 
                    // file

    fstream f;      // The object of 'fstream', f, is used to "read" as well as 
                    // "write" from/to the file

    string data;
    int count = 0;

    f.open("pf.txt", ios::in); // This command will open the existing file in   the backend of our program so that we could read/write from/to it. This is only possible because we have use the object of 'fstream' (Read line no. 11 to revise). If we have used the object 'ifstream'/'ofstream', then we'd we only able to read/write from/to the file, respectively, after opening it using read.open()/write.open

    // Note: If the File will not be available, then this command will automatically create a file of this name, and will open it to your program

    // f.open("FileName", ios::in/out/app/trunk) => this command has 2 parameters; 1st is the FileName along with extension like "FileName.txt". 2nd one is the mode in which you want to open the file in. There are mainly 4 modes, in (read), out (write), app (apoend the current added data with the previous one), and trunk (empty the file & write new entered data).

    // If you'll open the file with the object of "ifstream", then it'll open the file with the input mode (read), by default.
    // If you'll open the file with the object of "ofstream", then it'll open the file with the output mode (write), by default.

    if (f.is_open())    // it is to open the file for read/write
    {
        while (!f.eof())
        {
            getline(f, data);
            cout << data << endl;
            count++;
        }
    }
    else
    {
        cout << "BUSTED" << endl;
    }
    cout << count << endl;
    system("pause");
    return 0;
}