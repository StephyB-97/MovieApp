
// students should have more comments

#include "Movie.h"
#include <string>


//gets the name
const string Movie::getName() const
{ return name; }



//gets the tickets during the first week
const long long Movie::getFirstWeekNumTicketsSold() const
{ return FirstWeekNumTicketsSold; }


//tickets of the second week
const long long Movie::getSecondWeekNumTicketsSold() const
{ return SecondWeekNumTicketsSold; }


//tickets of the third week
const long long Movie::getThirdWeekNumTicketsSold() const
{ return ThirdWeekNumTicketsSold; }



//tickets of the fourth week
const long long Movie::getFourthWeekNumTicketsSold() const
{ return FourthWeekNumTicketsSold; }



void Movie::setName(string nm)
{ name = nm; }

void Movie::setFirstWeekNumTicketsSold(long long num)
{ FirstWeekNumTicketsSold=num; }

void Movie::setSecondWeekNumTicketsSold(long long num)
{ SecondWeekNumTicketsSold=num; }

void Movie::setThirdWeekNumTicketsSold(long long num)
{ ThirdWeekNumTicketsSold=num; }

void Movie::setFourthWeekNumTicketsSold(long long num)
{ FourthWeekNumTicketsSold=num; }

//function to get the number of tickets sold.
long long Movie::totalTicketsSold()
{
    return (FirstWeekNumTicketsSold + SecondWeekNumTicketsSold +
            ThirdWeekNumTicketsSold + FourthWeekNumTicketsSold);
}

//function to get average of tickets sold
long long Movie::AverageOfTicketsSold()
{
    return (FirstWeekNumTicketsSold + SecondWeekNumTicketsSold +
            ThirdWeekNumTicketsSold + FourthWeekNumTicketsSold) / 4;
}
