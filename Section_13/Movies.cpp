#include "Movies.hpp"
#include <iostream>

void Movies::displayAllMovies() {
    if(moviesList.empty()) {
        std::cout << "Sorry, no movies to display" << '\n';
    } else {
        for(const auto &movie : moviesList) {
            std::cout << movie.getMovieName() << ", " << 
                        movie.getMovieRating() << ", " <<
                        movie.getWatched() << '\n';
        }
    }
}

bool Movies::addMovie(std::string movieName, std::string movieRating, int watched) {
    for(const auto &movie : moviesList) {
        if(movie.getMovieName() == movieName) {
            return false;
        }
    }
    Movie newMovie(movieName, movieRating, watched);
    moviesList.push_back(newMovie);
    return true;
}

bool Movies::incrementWached(std::string movieName) {
    for(auto &movie : moviesList) {
        if(movie.getMovieName() == movieName) {
            movie.incrementWatched();
            return true;
        }
    }
    return false;
}