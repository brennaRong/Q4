#include <iostream>
#include <fstream>
#include <cstdlib>

// User to enter input and output file names
// Read input from file character by character
// Change numbers to set characters


using namespace std;

int main()

{
    char replaceThisChar;
    ifstream inputFile;

    inputFile.open("activity.dat");

    if (inputFile.fail())
    {
        cout << "The input file failed to open";
        exit(1);
    }

    do
    {
        inputFile.get(replaceThisChar);
        switch(replaceThisChar)
        {
            case '0':
                replaceThisChar = 's';
            case '1':
                replaceThisChar = 'g';
            case '2':
                replaceThisChar = 'o';
            case '3':
                replaceThisChar = 'y';
            case '4':
                replaceThisChar = 'v';
            case '5':
                replaceThisChar = 'n';
            case '6':
                replaceThisChar = 'f';
            case '7':
                replaceThisChar = 'j';
        }
    }while (! inputFile.eof());

    cout << "";


    return 0;

}
