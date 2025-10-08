#include <iostream>
using namespace std;

class Temperature {
private:
    double value;   // temperature value
public:
    // Constructor
    Temperature(double v = 0) {
        value = v;
    }

    // Set new temperatures
    void setValue(double v) {
        value = v;
    }

    // Conversion functions
    double toFahrenheitFromC()
     { 
        return (value * 9.0 / 5.0) + 32;
     }
    double toKelvinFromC()  
     {
         return value + 273.15;
     }

    double toCelsiusFromF()  
    { 
        return (value - 32) * 5.0 / 9.0;
    }
    double toKelvinFromF()   
    {
         return (value - 32) * 5.0 / 9.0 + 273.15; 
    }

    double toCelsiusFromK()  
      {
         return value - 273.15;
      }
    double toFahrenheitFromK() 
    { 
        return (value - 273.15) * 9.0 / 5.0 + 32; 
    }
};

int main() {
    Temperature temp;
    int Tempchoice;
    double val;

   while (true) 
    { 
    cout << "=============================\n";
    cout << " || TEMPERATURE CONVERTER ||   \n";
    cout << "=============================\n";

    cout << "1. CELSIUS -> FAHRENHEIT\n";
    cout << "2. CELSIUS -> KELVIN\n";
    cout << "3. FAHRENHEIT -> CELSIUS\n";
    cout << "4. FAHRENHEIT -> KELVIN\n";
    cout << "5. KELVIN -> CELSIUS\n";
    cout << "6. KELVIN -> FAHRENHEIT\n";
    cout << "0. EXIT\n";

      if (Tempchoice == 0) {
            cout << "Exiting program...!\n";
            break;   // 🚪 exit loop when user selects 0
        }

    cout << "Enter your temp.choice: ";
    cin >> Tempchoice;

    switch(Tempchoice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " C = " << temp.toFahrenheitFromC() << " F\n";
            break;

        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " C = " << temp.toKelvinFromC() << " K\n";
            break;

        case 3:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " F = " << temp.toCelsiusFromF() << " C\n";
            break;

        case 4:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " F = " << temp.toKelvinFromF() << " K\n";
            break;

        case 5:
            cout << "Enter temperature in Kelvin: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " K = " << temp.toCelsiusFromK() << " C\n";
            break;

        case 6:
            cout << "Enter temperature in Kelvin: ";
            cin >> val;
            temp.setValue(val);
            cout << val << " K = " << temp.toFahrenheitFromK() << " F\n";
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice...!! Please try again.\n";

    }

 }  

    return 0;
}