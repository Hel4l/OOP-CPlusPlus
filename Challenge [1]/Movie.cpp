//
// Created by h4zem on 4/30/2023.
//

#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
        : name{name}, rating{rating}, watched{watched} {

}

Movie::Movie(const Movie &copy)
        : Movie{copy.name, copy.rating, copy.watched} {

}

Movie::~Movie() {

}

void Movie::set_name(std::string Name) {
    this->name = Name;
}

std::string Movie::get_name() const {
    return name;
}

void Movie::set_rating(std::string Rating) {
    this->rating = Rating;
}

std::string Movie::get_rating() const {
    return rating;
}

void Movie::set_watched(int Watched) {
    this->watched = Watched;
}

int Movie::get_watched() const {
    return watched;
}

void Movie::increament_watched() {
    watched++;
}

void Movie::print() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Watched: " << watched << std::endl;
    std::cout << "===================================\n";
}