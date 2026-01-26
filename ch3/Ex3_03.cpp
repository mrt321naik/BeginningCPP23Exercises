// Ex3_03.cpp - Operations with enumerations
#include<print>
#include<utility>


int main() 
{
	enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	Day yesterday { Day::Monday }, today{ Day::Tuesday }, tommrow{ Day::Wednesday };
	const Day poets_day{ Day::Friday };

	enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
	Punctuation ch{ Punctuation::Comma };

	std::println("yesterday's value is {}{} but poets_day's is {}{}",
			std::to_underlying(yesterday), std::to_underlying(ch),
			std::to_underlying(poets_day), std::to_underlying(Punctuation::Exclamation));
	
	today = Day::Thursday;		// Assign new..
	ch = Punctuation::Question;	// .. enumerator values
	tommrow = poets_day;		// Copy enumerator value
					
	std::println("Is today's value({}) the same as poets_day({}){}",
			std::to_underlying(today), std::to_underlying(poets_day), std::to_underlying(ch));

	// ch = tommrow;	/* Uncomment any of these for an error*/
	// tommrow = friday;
	// today = 6;
}
