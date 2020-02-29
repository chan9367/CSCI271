#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// struct data record represents each column for a record
struct dataRecord {

	/*
		UPDATE HERE
		create strings for each column in your data
	*/
    string Animal_Name;
	string Animal_Gender;
	string Breed_Name;
	string Borough;
};

// function prototypes - NO CHANGE
bool readCSVtoArray (string, dataRecord[], int);
void printRecord(dataRecord);
void print5(dataRecord[]);
int ac(dataRecord[], int);



// main function
int main(){

	/*
		UPDATE HERE
		set values for filename and size variables below
	*/
    string filename = "NYCdogs.csv"; // filename of your csv file
	const int size = 37893;   //set size according to number of rows of data
	dataRecord myRecords[size];

	if (!readCSVtoArray(filename, myRecords, size)){
		cout << "Could not read file.";
	}
	else {
        cout<<"\nI chose to use the NYC dogs dataset for this project. Below are the first five records and the analysis example."<<endl;
		print5(myRecords);
		cout << "\nThere are " << ac(myRecords, size) << " chihuahua licensed as pets in New York City"<<endl;
	}

	return 0;
}


//function definitions

//read in csv records to array of data structs
bool readCSVtoArray (string fn, dataRecord recArray[], int size) {

	bool success = false;
	ifstream infile;
	string line;

	infile.open(fn.c_str());
	if (infile) {
		cout << "File opened\n";
		getline(infile, line); // pulls out header line
        // for each row in the array, read in a line from the csv file
		for (int i = 0; i < size; i++) {
		    getline(infile, line);          // read single line of csv data into string
			istringstream rowData(line);    // create stringstream from line
            // read each column of data into field in current record in array

			/*
				UPDATE HERE
				read into each string in your data record struct

			*/
			getline(rowData, recArray[i].Animal_Name, ',');
			getline(rowData, recArray[i].Animal_Gender, ',');
			getline(rowData, recArray[i].Breed_Name, ',');
			getline(rowData, recArray[i].Borough, ',');

		} // end for loop
		success = true; // file read in, change boolean to true
	} // end if

	return success;  // return success of file read
}


// print an individual record
void printData(dataRecord record) {

	/*
		UPDATE HERE

	*/
	cout         << "\nAnimal Name: " << record.Animal_Name
                    << "\nAnimal Gender: " << record.Animal_Gender
                    << "\nBreed Name: " << record.Breed_Name
                    << "\nBorough: " << record.Borough << endl;
}


// print first 5 records of data
void print5(dataRecord recArray[]) {
	cout << "First 5 records: \n";
	for (int i = 0; i < 5; i++) {
		printData(recArray[i]);
	}
}

int ac(dataRecord recArray[], int size) {
    int cc=0;
    for (int i = 0; i < size; i++) {
        if (recArray[i].Breed_Name == "Chihuahua" || recArray[i].Breed_Name == "chihuahua" )
            cc++;
    }
    return cc;
}
