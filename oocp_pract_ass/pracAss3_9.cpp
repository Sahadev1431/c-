#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream outFile(filename);

    if (outFile.is_open()) {
        cout << "Enter content to write to the file (Type 'exit' on a new line to finish):\n";

        string line;
        while (true) {
            getline(cin, line);

            if (line == "exit")
                break;

            outFile << line << endl;
        }

        cout << "Content written to the file successfully.\n";

        outFile.close();
    } else {
        cerr << "Error: Unable to open the file for writing.\n";
    }
}
void readFromFile(const string& filename) {
    ifstream inFile(filename);

    if (inFile.is_open()) {
        cout << "Content of the file:\n";

        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    } else {
        cerr << "Error: Unable to open the file for reading.\n";
    }
}

void countWordsAndLines(const string& filename) {
    ifstream inFile(filename);

    if (inFile.is_open()) {
        int wordCount = 0;
        int lineCount = 0;
        string word;

        while (inFile >> word) {
            wordCount++;
        }

        inFile.clear();
        inFile.seekg(0, ios::beg);

        while (getline(inFile, word)) {
            lineCount++;
        }

        cout << "Number of words in the file: " << wordCount << endl;
        cout << "Number of lines in the file: " << lineCount << endl;

        inFile.close();
    } else {
        cerr << "Error: Unable to open the file for counting.\n";
    }
}

void copyFile(const string& sourceFilename, const string& destinationFilename) {
    ifstream sourceFile(sourceFilename);
    ofstream destinationFile(destinationFilename);

    if (sourceFile.is_open() && destinationFile.is_open()) {
        destinationFile << sourceFile.rdbuf();

        cout << "Content copied from " << sourceFilename << " to " << destinationFilename << " successfully.\n";

        sourceFile.close();
        destinationFile.close();
    } else {
        cerr << "Error: Unable to open files for copying.\n";
    }
}

int main() {
    string filename1 = "file1.txt";
    string filename2 = "file2.txt";

    writeToFile(filename1);

    cout << "\nContent read from " << filename1 << ":\n";
    readFromFile(filename1);

    countWordsAndLines(filename1);

    copyFile(filename1, filename2);

    return 0;
}
