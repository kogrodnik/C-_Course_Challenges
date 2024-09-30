#pragma once
#include <string>

class Movie {

    private:
    std::string movieName_ {};
    std::string movieRating_ {};
    int watched_ {0};

    public:
    Movie(std::string movieName, std::string movieRating, int watched) : 
        movieName_{movieName}, movieRating_{movieRating}, watched_{watched}
        {}

    void incrementWatched();
    std::string getMovieName() const;
    std::string getMovieRating() const;
    int getWatched() const;
};