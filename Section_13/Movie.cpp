#include "Movie.hpp"

void Movie::incrementWatched() {
    watched_++;
}

std::string Movie::getMovieName() const {
    return movieName_;
}

std::string Movie::getMovieRating() const {
    return movieRating_;
}

int Movie::getWatched() const {
    return watched_;
}