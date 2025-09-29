/*Comsc 210 | Lab 15 | Lawrence Bryant
IDE used: VSC*/

//Includes
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>
using namespace std;

//Class declairation
class Movie
{
    public:
    string getWriter() {return writer;}
    string getMovie() {return movie;}
    int getYear() {return year;}
    void setWriter(string w) {writer = w;}
    void setMovie(string m) {movie = m;}
    void setYear(int y) {year = y;}

    //Handles output of variables
    void printAll()
    {
        cout << "Movie: " << getMovie() << "\n";
        cout << "Year Released: " << getYear() << "\n";
        cout << "Screenwriter: " << getWriter() << "\n";
    }

    private:
    string writer;
    string movie;
    int year;

};

//Main.
int main()
{
    //Variable declaration.
    array<Movie, 4> contain;
    string tempw;
    string tempm;
    int tempy;

    //Brings in the file being used
    ifstream fin("input.txt.txt");

    //Checks if the file being used is good and fills out the array with data from
    //A good file.
    if (fin.good())
    {
        int i = 0;
        while(getline(fin,tempm))
        {
            fin >> tempy;
            fin.ignore();
            getline(fin, tempw);
            Movie base;
            base.setMovie(tempm);
            base.setYear(tempy);
            base.setWriter(tempw);
            contain[i] = base;
            i++;
        }

        fin.close();
    }
     else {cout << "Input file not found.\n";}

    //Outputs all items in the array via printAll function in class.
    for(int i = 0; i < contain.size(); i++)
    {
        contain[i].printAll();
        cout << "\n";
    }

    return 0;
}