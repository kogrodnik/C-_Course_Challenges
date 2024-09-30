#include "Movies.hpp"
#include <iostream>

void addMovie(Movies &movies, std::string movieName, std::string movieRating, int watched) {
    if(movies.addMovie(movieName, movieRating, watched)) {
        std::cout << movieName << " added" << '\n';
    } else {
        std::cout << movieName << " already exists" << '\n';
    }
}

void incrementWached(Movies &movies, std::string movieName) {
    if(movies.incrementWached(movieName)) {
        std::cout << movieName << " watch incremented" << '\n';
    } else {
        std::cout << movieName << " not found" << '\n';
    }
}

int main() {
    Movies myMovies; 

    myMovies.displayAllMovies();
    
    addMovie(myMovies, "Big", "PG-13",2);
    addMovie(myMovies,"Star Wars", "PG",5);
    addMovie(myMovies,"Cinderella", "PG",7);
     
    myMovies.displayAllMovies();
    
    addMovie(myMovies,"Cinderella", "PG",7);
    addMovie(myMovies,"Ice Age", "PG",12);
 
    myMovies.displayAllMovies();
    
    incrementWached(myMovies,"Big");
    incrementWached(myMovies,"Ice Age");
    
    myMovies.displayAllMovies();
    
    incrementWached(myMovies,"XXX");

    return 0;
}