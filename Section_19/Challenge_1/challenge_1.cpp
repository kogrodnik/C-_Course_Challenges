#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    constexpr int totalWidth {70};
    constexpr int countryWidthColumn {20};
    constexpr int cityWitdhColumn {20};
    constexpr int populationWidthColumn {15};
    constexpr int costWithColumn {15};

    int titleLength = tours.title.length();
    std::cout << std::setw((totalWidth - titleLength) / 2) << "" << tours.title << '\n';
    std::cout << std::setw(countryWidthColumn) << std::left << "Country";
    std::cout << std::setw(cityWitdhColumn) << std::left << "City";
    std::cout << std::setw(populationWidthColumn) << std::right << "Population";
    std::cout << std::setw(costWithColumn) << std::right << "Cost";
    std::cout << '\n';

    for (auto country : tours.countries) {  // loop through the countries
        std::cout << std::setw(countryWidthColumn) << std::left << country.name;
        int i{0};
        for (auto city : country.cities) {  // loop through the cities for each country
            if (i > 0) {
                std::cout << std::setw(countryWidthColumn) << std::left << "";
            }
            std::cout << std::setw(cityWitdhColumn) << std::left << city.name
                      << std::setw(populationWidthColumn) << std::right << city.population
                      << std::setw(costWithColumn) << std::right << city.cost
                      << std::endl;
            i++;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}