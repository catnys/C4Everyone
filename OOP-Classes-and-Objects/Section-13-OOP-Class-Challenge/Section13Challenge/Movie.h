#pragma once
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {

private:

	std::string name;
	std::string rating;
	int watched;

public:
	std::string getName() const { return this->name; }
	std::string getRating() { return this->rating; }
	int getWatched() { return this->watched; }

	Movie(std::string name_val = "null", std::string rating_val = "null", int watched_val = 0);

	// Copy Constructor
	Movie(const Movie& source);
	// Destructor
	~Movie();

	static int getMovie();

	void incrementWatched(); // Declare the function
};

#endif // _MOVIE_H_