//
// Created by h4zem on 4/30/2023.
//

#ifndef CHALLENGE__1__MOVIE_H
#define CHALLENGE__1__MOVIE_H

#include<iostream>
#include <string>

class Movie {
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name, std::string rating, int watched);

    Movie(const Movie &copy);

    ~Movie();

    void set_name(std::string Name);

    std::string get_name() const;

    void set_rating(std::string Rating);

    std::string get_rating() const;

    void set_watched(int Watched);

    int get_watched() const;

    void increament_watched();

    void print() const;
};


#endif //CHALLENGE__1__MOVIE_H
