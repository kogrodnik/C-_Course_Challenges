#pragma once
#include "Movie.hpp"

#include <vector>

class Movies {
    private: 
    std::vector<Movie> moviesList {};

    public: 
    void displayAllMovies();
    bool addMovie(std::string movieName, std::string movieRating, int watched);
    bool incrementWached(std::string movieName);
};