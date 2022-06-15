// Movie class specification file
#ifndef Movie_H
#define FRIEND_H

#include <string>
using namespace std;
// Movie class declaration.

// You need to add more comments

class Movie
{
private:
	string name;		// name of movie
	long long FirstWeekNumTicketsSold; //FirstWeekNumTicketsSold
    long long SecondWeekNumTicketsSold; //SecondWeekNumTicketsSold
    long long ThirdWeekNumTicketsSold; //ThirdWeekNumTicketsSold
    long long FourthWeekNumTicketsSold; //FourthWeekNumTicketsSold

public:

    // Constructor #1
    Movie()
    { // Initialize the name attribute.
        name="Star wars";

        // Initialize the NumTicketsSold attributes.
        FirstWeekNumTicketsSold = 0; //FirstWeekNumTicketsSold
        SecondWeekNumTicketsSold = 0; //SecondWeekNumTicketsSold
        ThirdWeekNumTicketsSold = 0; //ThirdWeekNumTicketsSold
        FourthWeekNumTicketsSold = 0; //FourthWeekNumTicketsSold
    }

    // Constructor #2
    Movie(string nm)
	{ // Initialize the name attribute.
      name=nm;

        // Initialize the NumTicketsSold attributes.
        FirstWeekNumTicketsSold = 0; //FirstWeekNumTicketsSold
        SecondWeekNumTicketsSold = 0; //SecondWeekNumTicketsSold
        ThirdWeekNumTicketsSold = 0; //ThirdWeekNumTicketsSold
        FourthWeekNumTicketsSold = 0; //FourthWeekNumTicketsSold
    }

    //constructor #3
    Movie(string nm, long long num)
    {
        //initialize the name attribute
        name =nm;

        // Initialize the NumTicketsSold attributes.
        FirstWeekNumTicketsSold = 0; //FirstWeekNumTicketsSold
        SecondWeekNumTicketsSold = 0; //SecondWeekNumTicketsSold
        ThirdWeekNumTicketsSold = 0; //ThirdWeekNumTicketsSold
        FourthWeekNumTicketsSold = 0; //FourthWeekNumTicketsSold
    }



	const string getName() const;
    const long long  getFirstWeekNumTicketsSold() const;
    const long long getSecondWeekNumTicketsSold() const;
    const long long getThirdWeekNumTicketsSold() const;
    const long long getFourthWeekNumTicketsSold() const;

    void setName(string nm);
    void setFirstWeekNumTicketsSold(long long num);
    void setSecondWeekNumTicketsSold(long long num);
    void setThirdWeekNumTicketsSold(long long num);
    void setFourthWeekNumTicketsSold(long long num);

   //function to get the total of the tickets sold
    long long totalTicketsSold();

    //function to get the average of tickets sold
    long long AverageOfTicketsSold();

};
#endif