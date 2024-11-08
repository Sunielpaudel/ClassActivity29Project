
#include <iostream>
#include "movie.hpp"

using namespace movieDetails;

int main() {
    std::string movieStr = "24 s2,2014";
    Movie movie = movieStringParsing(movieStr);

    std::cout << "Title and Season: " << movie.titleSeason << std::endl;
    std::cout << "Year: " << movie.year << std::endl;

    return 0;
}
