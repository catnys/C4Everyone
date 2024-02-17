#include "Movies.h"

// Function Prototypes
void increment_watched(Movies& movies, std::string name);
void add_movie(Movies& movies, std::string name, std::string rating, int watched);

/******************************************************************************
* Helper function - increment_watched
* increment_watched expects a reference to Movies object and 
* the name of the movie to increment the watched count
*
* If the watched count was incremented successfully, it displays success message
* otherwise the watched count could not be incremented 
* because the name of the movie was not found
*******************************************************************************/

void increment_watched(Movies& movies, std::string name) {
	if (movies.increment_watched(name)) {
		std::cout << name << " watch incremented" << std::endl;
	}
	else {
		std::cout << name << " was not found." << std::endl;
	}
}


/******************************************************************************
* Helper function - add_movie
* add_movie expects a reference to a Movies object and
* also the name of the movie, the rating and the watched count
* 
* If the movie was successfully added to the movies object,
* it displays a success message
* otherwise, the movie was not added because the name is already exist.
******************************************************************************/
void add_movie(Movies& movies, std::string name, std::string rating, int watched) {
	if (movies.add_movie(name,rating,watched)) {
		std::cout << name << " added." << std::endl;
	}
	else {
		std::cout << name << " is already exists!" << std::endl;
	}
}


int main() {
	Movies my_movies;
	
	my_movies.display();

	add_movie(my_movies, "Big", "PG-13",2); //OK
	add_movie(my_movies, "Star Wars", "PG",5); //OK
	add_movie(my_movies, "Cindirella", "PG",7); //OK
	add_movie(my_movies, "Brave", "PG",9); //OK
	add_movie(my_movies, "Frozen", "PG", 10); //OK
	std::cout << "----------------------" << std::endl;

	my_movies.display();
	std::cout << "----------------------" << std::endl;
	std::cout << "Search for \"Frozen\" and to add :" << std::endl;
	add_movie(my_movies, "Frozen", "PG", 10); //ERROR
	std::cout << "----------------------" << std::endl;
	std::cout << "Search for \"Ice Age\" and to add : " << std::endl;
	add_movie(my_movies, "Ice Age", "PG", 8); //OK
	std::cout << "----------------------" << std::endl;


	my_movies.display();
	std::cout << "----------------------" << std::endl;

	increment_watched(my_movies, "Big"); // OK, increment Big's count + 1
	std::cout << "----------------------" << std::endl;

	increment_watched(my_movies, "Frozen"); // OK, increment Frozen's count + 1
	std::cout << "----------------------" << std::endl;


	my_movies.display();
	std::cout << "----------------------" << std::endl;

	increment_watched(my_movies, "Hello"); // ~Error, since it wasn't found


}