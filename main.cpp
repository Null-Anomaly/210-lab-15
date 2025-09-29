/*Comsc 210 | Lab 15 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Movie
{
    public:
    string getWriter() {return writer;}
    string getMovie() {return movie;}
    int getYear() {return year;}
    void setWriter(string w) {writer = w;}
    void setMovie(string m) {movie = m;}
    void setYear(int y) {year = y;}

    private:
    string writer;
    string movie;
    int year;

};

int main()
{
    string tempw;
    string tempm;
    int tempy;

    ifstream fin("input.txt.txt");

    if (fin.good())
    {
        while(fin >> tempw)


        fin.close();
    }


    return 0;
}