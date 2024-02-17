#pragma once
#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <iostream>
#include "Movie.h" // Include the Movie class header

class Movies {

private:
    static int numMovies;
    std::vector<Movie> movies; // Use a vector to store Movie objects

public:
    // Constructor now only accepts a vector of Movie objects
    Movies(const std::vector<Movie>& movies_val = {});

    // Copy Constructor
    Movies(const Movies& source);

    // Destructor
    ~Movies();

    // Static function to get the number of movies
    static int getNumMovies();

    // Increment method (returns true if movie found and watched count incremented, false otherwise)
    bool increment_watched(const std::string& movieToFind);

    // Display function to show all elements in the movies vector (const member function)
    void display() const;

    // add movie function
    bool add_movie(const std::string& name, const std::string& rating, int watched);
};

#endif // _MOVIES_H_