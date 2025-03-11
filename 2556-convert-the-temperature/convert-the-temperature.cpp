class Solution {
public:
    vector<double> convertTemperature(double celsius) {


        double kelvin = celsius + 273.15;
        double fahren = (celsius*1.80) + 32;

        return{kelvin,fahren};
        
    }
};