#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void ReadIn(ifstream &fil, vector <int> &vec);


int main()
{
    vector <int> numbers;
    int count(0), fourer(4);
    ifstream infile;
    infile.open("E:\\pidatawspaces.txt");
    if (infile.fail())
    {
        cout << "File Cannot Open\n";
        exit(1);
    }
    ReadIn(infile, numbers);
        while (fourer < numbers.size())
        {
            cout << setw(3) << numbers[fourer];
            fourer = fourer + 4;
            
            count++;

            if (count == 20)
            {
                cout << endl;
                count = 0;
            }
            
        }
    
    cout << endl;

    infile.close();
    return 0;

}

void ReadIn(ifstream &fil, vector <int> &vec)
{
    int temp;
    char a;
    fil >> a;
    while (!fil.eof())
    {
        temp = a - '0';
        vec.push_back(temp);
        fil >> a;

    }
}
