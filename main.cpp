/*Comsc 210 | Lab 15 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>
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
    array<Movie, 4> contain;
    string tempw;
    string tempm;
    int tempy;

    ifstream fin("input.txt.txt");

    if (fin.good())
    {
        while(fin >> tempm)
        {
            fin.ignore();
            fin >> tempy;
            getline(fin, tempw);
            Movie base;
            base.setMovie(tempm);
            base.setYear(tempy);
            base.setWriter(tempw);



        }


        fin.close();
    }


    return 0;
}