
#include <sstream>

namespace movieDetails {

    struct Movie {
        std::string titleSeason;
        int year;
    };

    Movie movieStringParsing(const std::string& movieStr) {
        Movie movie;
        size_t commaPos = movieStr.find(','); 

        if (commaPos != std::string::npos) {
            movie.titleSeason = movieStr.substr(0, commaPos);          // Extract "24 s2"
            movie.year = std::stoi(movieStr.substr(commaPos + 1));     // Extract year as integer
        }

        return movie;
    }

} 
