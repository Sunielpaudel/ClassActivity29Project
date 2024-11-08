#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

namespace movieDetails {

    struct Movie {
        std::string titleSeason; 
        int year;                 
    };

    Movie movieStringParsing(const std::string& movieStr);

} 

#endif MOVIE_HPP