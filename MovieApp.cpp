/* Name: Stephanie Bernades
Date: April 19, 2020
Section:
Assignment: Movie App
Due Date: April 22
About this project: the project displays the sales of 4 weeks of sales of tickets and
 displays the weekly amount of tickets sold, average of tickets sold and total of tickets sold.
Assumptions: NA
All work below was performed by Stephanie Bernades */
#include <iostream>
#include "Movie.h"
using namespace std;

//function prototype
void DisplayInformation( Movie mov);

int main()
{
    //welcome
    cout<<"Welcome to the Movie Data Program"<<endl;



    // a Movie object with the following data:
    Movie mov1("Star Wars");
    mov1.setFirstWeekNumTicketsSold(1200);
    mov1.setSecondWeekNumTicketsSold(21000);
    mov1.setThirdWeekNumTicketsSold(899900);
    mov1.setFourthWeekNumTicketsSold(678000);


    //second Movie object with data from the activity
    Movie mov2("Planet of Apes");
    mov2.setFirstWeekNumTicketsSold(8800);
    mov2.setSecondWeekNumTicketsSold(787000);
    mov2.setThirdWeekNumTicketsSold(786879900);
    mov2.setFourthWeekNumTicketsSold(667000);


    //third  Movie object with data from the activity
    Movie mov3("ET");
    mov3.setFirstWeekNumTicketsSold(77878);
    mov3.setSecondWeekNumTicketsSold(564564);
    mov3.setThirdWeekNumTicketsSold(876786);
    mov3.setFourthWeekNumTicketsSold(567567567);

    //display the information
    cout <<"**********************" << endl;
    DisplayInformation(mov1);
    cout <<"**********************" << endl;
    DisplayInformation(mov2);
    cout <<"**********************" << endl;
    DisplayInformation(mov3);
    cout <<"**********************" << endl;
    
    return 0;
}

/* *******************************
 *         DisplayMovie          *
 *    Displays the information   *
 **********************************/
void DisplayInformation( Movie mov)
{
    cout <<"Name: " << mov.getName() << endl;
    cout <<"First Week Number of Tickets Sold: " << mov.getFirstWeekNumTicketsSold() << endl;
    cout <<"Second Week Number of Tickets Sold: " << mov.getSecondWeekNumTicketsSold() << endl;
    cout <<"Third Week Number of Tickets Sold: " << mov.getThirdWeekNumTicketsSold() << endl;
    cout <<"Fourth Week Number of Tickets Sold: " << mov.getFourthWeekNumTicketsSold() << endl;
    cout <<"Total Number of Tickets Sold: " << mov.totalTicketsSold() << endl;
    cout <<"Average Number of Tickets Sold: " << mov.AverageOfTicketsSold() << endl;
    cout << endl;
}