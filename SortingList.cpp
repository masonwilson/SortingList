//Mason Wilson UVA Student
//This is a c++ program that sorts lists 
//see README.md for required format for list to sort
//use command line for file intake

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool readFile(string filename, vector<string> v);

int main(int argc, char*argv[]){
	//read in file 
	//separated by line
	//ending with --

	vector<string> words;
	bool result = readFile(argv[1], words);
	if(!result){
		return 1;
	}



	return 0;

}

bool readFile(string filename, vector<string> v){
	ifstream file(filename);

	if(!file.is_open()){
		return false;
	}

	string line;
	while(getline(file, line)){
		if(line != "     "){
			v.push_back(line);
		}

	}
	for(string s : v){
		cout << s << endl;
	}

	file.close();
	return true;

}