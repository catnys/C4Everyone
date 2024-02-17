// Section 19
// Challenge 1
// Formatting output
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

void ruler() {
    std::cout << "\n12345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}

void setline(int totalWidth) {
    std::cout << std::setw(totalWidth) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' '); // reset setfill to blank

}


int main()
{
    const int totalWidth{ 70 };
    const int fieldWidthCountry{ 20 };
    const int fieldWidthCity{ 20 };
    const int fieldWidthPopulation{ 15 };
    const int fieldWidthCost{ 15 };

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
    ruler();
    int titleLength = tours.title.length();
    std::cout << std::setw((totalWidth - titleLength) / 2) << "" << tours.title << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(fieldWidthCountry) << std::left << "Country"
        << std::setw(fieldWidthCountry) << std::left << "City"
        << std::setw(fieldWidthPopulation) << std::left << "Population"
        << std::setw(fieldWidthCost) << std::right << "Price"
        << std::endl;

    setline(totalWidth);
    std::cout << std::setprecision(2) << std::fixed;

    // Now, Formatted display so you can see how to access the vector elements
   
    for (auto country : tours.countries) {
        std::cout << std::left << std::setw(20) << country.name;

        // Flag to control the first city in a country
        bool firstCity = true;

        for (auto city : country.cities) {
            if (!firstCity) {
                std::cout << std::left << std::setw(20) << "";
            }
            else {
                firstCity = false;
            }

            std::cout << std::left << std::setw(20) << city.name;
            std::cout << std::right << std::setw(15) << city.population;
            std::cout << std::right << std::setw(15) << city.cost << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;
    return 0;
}