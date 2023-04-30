#include <iostream>
#include "Movies.h"

bool add_movie(Movies &my_movies, std::string name, std::string rating, int watched) {
    if (my_movies.add_movie(name, rating, watched)) {
        return false;
    }
    return true;
}

bool increment_watched(Movies &my_movies, std::string name) {
    if (my_movies.increament_movie(name)) {
        return true;
    }
    return false;
}

int main() {
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);                 // OK
    add_movie(my_movies, "Star Wars", "PG", 5);             // OK
    add_movie(my_movies, "Cinderella", "PG", 7);           // OK

    my_movies.display();   // Big, Star Wars, Cinderella

    add_movie(my_movies, "Cinderella", "PG", 7);            // Already exists
    add_movie(my_movies, "Ice Age", "PG", 12);              // OK

    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age

    increment_watched(my_movies, "Big");                    // OK
    increment_watched(my_movies, "Ice Age");              // OK

    my_movies.display();    // Big and Ice Age watched count incremented by 1

    increment_watched(my_movies, "XXX");         // XXX not found
    return 0;
}
