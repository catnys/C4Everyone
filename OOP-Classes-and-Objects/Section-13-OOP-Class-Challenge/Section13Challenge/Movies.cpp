#include "Movie.h"
#include "Movies.h"

int Movies::numMovies{ 0 };

// Constructor
Movies::Movies(const std::vector<Movie>& movies_val)
    : movies{ movies_val } {
    ++numMovies;
}

// Copy Constructor
Movies::Movies(const Movies& source)
    : movies{ source.movies } {

}

// Destructor
Movies::~Movies() {
    --numMovies;
}

// Static function to get the number of movies
int Movies::getNumMovies() {
    return numMovies;
}


/*Function to increment the "watched" count of a movie

The (const std::string& movieToFind) parameter in the function declaration bool increment_watched(const std::string& movieToFind);
is a common way of passing a string parameter in C++ for several reasons:

- Passing by Reference (&): The & symbol indicates that the parameter is passed by reference.
This means that you are not making a copy of the string when you call the function. Instead, you are working with the original string,
which can be more efficient when dealing with larger strings. If you pass by value (without &),
a copy of the string would be created, which can be inefficient for large strings.

- const Keyword: The const keyword before std::string indicates that the parameter is a constant reference that means that within the function, you cannot modify the content of the string that is being passed.
This is used when you want to ensure that the function does not accidentally change the input string which is a good practice to use const for parameters that are not intended to be modified within the function.

So, when you pass a const std::string& as a parameter, you are saying that you want to work with the original string (efficient) and you promise not to change its content (safe).
It is a common practice in C++ to optimize performance and prevent unintended modifications of function parameters.*/

bool Movies::increment_watched(const std::string& movieToFind) {
    auto it = std::find_if(movies.begin(), movies.end(), [movieToFind](const Movie& movie) {
        return movie.getName() == movieToFind;
        });

    if (it != movies.end()) {
        // Movie found, increment the watched count (assuming Movie class has a function for incrementing watched count)
        it->incrementWatched();
        return true; // Movie was found and watched count was incremented
    }
    else {
        return false; // Movie was not found
    }
}

// Show all elements in the movies vector
void Movies::display() const {
    for (const Movie& movie : movies) {
        std::cout << movie.getName() << std::endl;
    }
}


bool Movies::add_movie(const std::string& name, const std::string& rating, int watched) {
    // Create a Movie object with the provided parameters
    Movie movie(name, rating, watched);

    // Use std::find_if to search for an existing movie with the same name
    auto it = std::find_if(movies.begin(), movies.end(), [&name](const Movie& m) {
        return m.getName() == name;
        });

    if (it != movies.end()) {
        // Movie found, do not add it to prevent duplicates
        return false;
    }
    else {
        // Movie was not found, so add it to the vector
        movies.push_back(movie);
        return true;
    }
}