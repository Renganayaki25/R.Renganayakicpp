/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Name:Renganayaki
//CollegeName:Vivekananda College Of Engineering For Women 

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class WeatherReport {
private:
    string date;
    string location;
    string weatherType;
    double temperature;
    double rainPossibility;
    double humidity;

public:
    WeatherReport(std::string d, std::string loc, std::string wt, double temp, double rain, double hum) {
        date = d;
        location = loc;
        weatherType = wt;
        temperature = temp;
        rainPossibility = rain;
        humidity = hum;
    }

    void displayReport() const {
        cout << "Date: " << date << endl;
        cout << "Location: " << location << endl;
        cout << "Weather Type: " << weatherType << endl;
        cout << "Temperature: " << temperature << "°C" << endl;
        cout << "Rain Possibility: " << rainPossibility << "%" << endl;
        cout << "Humidity: " << humidity << "%" << endl;
    }
};

class WeatherApp {
private:
    vector<WeatherReport> reports;

public:
    void addReport(const WeatherReport& report) {
        reports.push_back(report);
    }

    void displayReports() const {
        for (const auto& report : reports) {
            report.displayReport();
            cout << "-----------------------" << endl;
        }
    }
};

int main() {
    WeatherApp weatherApp;

    WeatherReport today("Today", "Kodaikanal", "Cloudy", 25.5, 20.0, 70.0);
    WeatherReport yesterday("Yesterday", "Kodaikanal", "Rain", 20.0, 80.0, 85.0);
    WeatherReport tomorrow("Tomorrow", "Kodaikanal", "Dry", 30.0, 5.0, 60.0);

    weatherApp.addReport(today);
    weatherApp.addReport(yesterday);
    weatherApp.addReport(tomorrow);

    weatherApp.displayReports();

    return 0;
}