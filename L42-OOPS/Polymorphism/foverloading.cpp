#include <iostream>
using namespace std;

// Function to print text document
void printDocument(string document) {
    cout << "Printing text document: " << document << endl;
}

// Function to print image document
void printDocument(string imageFile, int resolution) {
    cout << "Printing image document: " << imageFile << " with resolution: " << resolution << " dpi" << endl;
}

// Function to print PDF document
void printDocument(string pdfFile, bool doubleSided) {
    cout << "Printing PDF document: " << pdfFile;
    if (doubleSided) {
        cout << " (double-sided)";
    }
    cout << endl;
}

int main() {
    printDocument("report.txt"); // Calls the function to print a text document
    printDocument("photo.jpg", 300); // Calls the function to print an image document with a resolution of 300 dpi
    printDocument("presentation.pdf", true); // Calls the function to print a PDF document with double-sided printing
    
    return 0;
}
