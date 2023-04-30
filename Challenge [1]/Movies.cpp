//
// Created by h4zem on 4/30/2023.
//

#include "Movies.h"

Movies::Movies() {

}

Movies::Movies(const Movies &copy)
        : movies_list{copy.movies_list} {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    if (!check_exist(name)) {
        movies_list.push_back({name, rating, watched});
        std::cout << name << " Successfully added" << std::endl << std::endl;
        return true;
    }
    std::cout << name << " Already exist " << std::endl << std::endl;
    return false;
}

bool Movies::increament_movie(std::string name) {
    if (!movies_list.empty()) {
        for (int i = 0; i < movies_list.size(); ++i) {
            if (movies_list[i].get_name() == name) {
                movies_list[i].increament_watched();
                std::cout << name << " watched count incremented by 1" << std::endl << std::endl;
                return true;
            }
        }
        return false;
        std::cout << name << " Not found to make increament" << std::endl << std::endl;
    }
    std::cout << "Movie list is empty" << std::endl << std::endl;
    return false;
}

bool Movies::check_exist(std::string name) {
    if (!movies_list.empty()) {
        for (int i = 0; i < movies_list.size(); ++i) {
            if (movies_list[i].get_name() == name) {
                return true;
            }
        }
        return false;
    }
    return false;
}

void Movies::display() const {
    if (!movies_list.empty()) {
        std::cout << "---Printing Movies List---\n";
        for (int i = 0; i < movies_list.size(); ++i) {
            movies_list[i].print();
        }
        std::cout << std::endl;
    } else {
        std::cout << "--You don't have any movie in this list ---\n\n";
    }
}