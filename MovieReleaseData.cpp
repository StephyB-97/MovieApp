/* Name: Stephanie Bernades
Date: April
Section:
Assignment: Movie Release Data Program
Due Date: April 15, 2020
About this project: It calculates the sales of 2 movies
Assumptions: all data input is valid
All work below was performed by Stephanie Bernades */

#include <iostream>
#include<string>


using namespace std;

//structure
struct Data
{
    string MovieName;
    int FirstWeekTickets;
    int SecondWeekTickets;
    int ThirdWeekTickets;
    int FourthWeekTickets;
    int TotalTicketsSold;
    int AverageTicketsSold;


};

void getData(Data *);    //function prototype
void totalAvgSales(Data*); //function prototype
void displayMovieData(Data *);   //function prototype



int main() {

    //The 2 variables set to Data
    Data movie1;
    Data movie2;

    //variable for the choice option
    char option;

    //show the menu
    cout <<"Menu Options:\n";
    cout <<"A) Add Data \n";
    cout <<"B) Compute Total and Avg \n";
    cout <<"C) Display Data\n";
    cout <<"D) Quit\n";
    cout <<"Enter an option: ";
    cin >> option;

    if (option =='a' || option =='A')
    {
        getData(&movie1);
        getData(&movie2);

        cout <<"Enter an option: ";
        cin >> option;
        if (option =='b'|| option=='B')
        {
            totalAvgSales(&movie1);
            totalAvgSales(&movie2);
            cout <<"Enter an option: ";
            cin >> option;
            if (option =='c'|| option=='C')
            {
                cout <<"First Movie " << endl;
                displayMovieData(&movie1);
                cout << endl;
                cout <<"Second Movie" << endl;
                displayMovieData(&movie2);
                cout <<"Enter an option: ";
                cin >> option;
            }
        }


    }
    else if(option =='b'|| option=='B')
    {

        totalAvgSales(&movie1);
        totalAvgSales(&movie2);
        cout <<"Enter an option: ";
        cin >> option;
        if (option =='c'|| option=='C')
        {
            cout <<"First Movie " << endl;
            displayMovieData(&movie1);
            cout << endl;
            cout <<"Second Movie" << endl;
            displayMovieData(&movie2);
            cout <<"Enter an option: ";
            cin >> option;
        }
    }
    else if(option =='c'|| option=='C')
    {
        cout <<"First Movie " << endl;
        displayMovieData(&movie1);
        cout << endl;
        cout <<"Second Movie" << endl;
        displayMovieData(&movie2);
        cout <<"Enter an option: ";
        cin >> option;
    }
    else if(option =='d'|| option=='D')
    {

      return 0;
    }
    else
    {
        cout <<"Enter an option: ";
        cin >> option;
    }






    return 0;
}

// FUnction  getData
// This function collects the data for the 2 movies
void getData(Data *s ) {

    //Get the movie name
    cout << "Please enter in Movie name...";
    cin.ignore();      //ignore the remaining newlines
    getline(cin, s->MovieName);
    cout << endl;


    //First week tickets sold
    cout <<"First Week Number of Tickets Sold...\n";
    cout <<"Please enter in the number of tickets sold..";
    cin >> s->FirstWeekTickets;
    cout << endl;

    //second week of tickets sold
    cout <<"Second Week Number of Tickets Sold...\n";
    cout <<"Please enter in the number of tickets sold...";
    cin >> s->SecondWeekTickets;
    cout << endl;

    //Third week of tickets sold
    cout <<"Third Week Number of Tickets Sold...\n";
    cout <<"Please enter in the number of tickets sold...";
    cin >> s->ThirdWeekTickets;
    cout << endl;

    //Fourth week tickets sold
    cout <<"Fourth Week Number of Tickets Sold...\n";
    cout <<"Please enter in the number of tickets sold...";
    cin >> s->FourthWeekTickets;
    cout << endl;


}


//  totalAvgSales
//This function calculates the total and the average of the sales of the tickets
void totalAvgSales(Data *s)
{
    int total;    //stores the total
    int average;   //stores the average

    total= s->FirstWeekTickets + s->SecondWeekTickets + s->ThirdWeekTickets + s->FourthWeekTickets;
    average = (s->FirstWeekTickets + s->SecondWeekTickets + s->ThirdWeekTickets + s->FourthWeekTickets) / 4;
    cout <<"Complete!";
    cout << endl;

}

// displayMovieData
// This functions displays the data
void displayMovieData(Data *s)
{
    //Display the data stored in the variable
    cout <<"Division Name: " << s->MovieName <<endl;
    cout <<"First Quarter Sales:" << s->FirstWeekTickets << endl;
    cout <<"Second Quarter Sales:" << s->SecondWeekTickets << endl;
    cout <<"Third Quarter Sales:" << s->ThirdWeekTickets << endl;
    cout <<"Fourth Quarter Sales:" << s->FourthWeekTickets << endl;
    cout <<"Total Number of Tickets Sold: " << s->TotalTicketsSold << endl;
    cout <<"Average Numbers of Tickets Sold: " << s->TotalTicketsSold << endl;

}