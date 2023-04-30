//
// Created by h4zem on 4/30/2023.
//

#ifndef CHALLENGE__1__MOVIES_H
#define CHALLENGE__1__MOVIES_H

#include "Movie.h"
#include <iostream>
#include <vector>

class Movies {
    std::vector<Movie> movies_list;
public:
    Movies();

    Movies(const Movies &copy);

    ~Movies();

    bool add_movie(std::string name, std::string rating, int watched);

    bool increament_movie(std::string name);

    bool check_exist(std::string name);

    void display() const;
};


#endif //CHALLENGE__1__MOVIES_H
