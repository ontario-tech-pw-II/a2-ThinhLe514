#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
    string finame, foname;
	
	// check if there are enough arguments
    if (argc < 3)
    {
        cerr << " Not enough arguments" << endl;
    } else if (argc > 3)
    {
        cerr << " Too many arguments" << endl;
    }

    finame = argv[1];
    foname = argv[2];
	
	// open the first file
 	fin.open(finame);

	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
    fout.open(foname);
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
