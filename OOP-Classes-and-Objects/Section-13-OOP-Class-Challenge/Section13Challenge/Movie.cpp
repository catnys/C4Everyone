#include "Movie.h"


// Constructor
Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
	: name{ name_val }, rating{ rating_val }, watched{ watched_val } {
	
}

// Copy Constructor
Movie::Movie(const Movie& source)
	: Movie(source.name, source.rating, source.watched) {

}

// Destructor
Movie::~Movie() {
	
}

void Movie::incrementWatched() {
	// Implement the function here to increment the "watched" count
	watched++;
}
