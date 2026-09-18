class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        return {
            celsius+273.15, celsius*1.80+32.00
        };
        
    }
};



//array ans=[kelvin, fahrenheit]
// where;
// kelvin=celsius+273.15 
// fahrenheit=celsius*1.80+32.00

// so we directly return [kelvin, fahrenheit];