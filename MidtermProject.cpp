#include <iostream>
using namespace std;

// Constants for Metric Conversion
// Length (Metric Conversion)
const double Milimeters_Centimeters = 0.1;
const double Milimeters_Meters = 0.001;
const double Milimeters_Kilometers = 0.000001;
const double Centimeters_Milimeters = 10;
const double Centimeters_Meters = 0.01;
const double Centimeters_Kilometers = 0.00001;
const double Meters_Milimeters = 1000;
const double Meters_Centimeters = 100;
const double Meters_Kilometers = 0.001;
const double Kilometers_Milimeters = 1000000;
const double Kilometers_Centimeters = 100000;
const double Kilometers_Meters = 1000;

// Mass (Metric Conversion)
const double Milligram_Gram = 0.001;
const double Milligram_Kilogram = 0.000001;
const double Gram_Milligram = 1000;
const double Gram_Kilogram = 0.001;
const double Kilogram_Milligram = 1000000;
const double Kilogram_Gram = 1000;

// Volume (Metric Conversion)
const double Milliliter_Liter = 0.001;
const double Liter_Milliliter = 1000;

// Constants for English Conversion
// Length (English Conversion)
const double Inches_Feet = 0.0833333333;
const double Inches_Yard = 0.0277777778;
const double Inches_Miles = 0.0000157828;
const double Feet_Inches = 12;
const double Feet_Yard = 0.3333333333;
const double Feet_Miles = 0.0001893932;
const double Yard_Inches = 36;
const double Yard_Feet = 3;
const double Yard_Miles = 0.0005681797;
const double Miles_Inches = 63360.23622;
const double Miles_Feet = 5280.019685;
const double Miles_Yard = 1760.0065617;

// Mass (English Conversion)
const double Ounce_Pound = 0.0625;
const double Pound_Ounce = 16;

// Volume (English Conversion)
// Fluid ounce
const double FlOunce_Pint = 0.05;
const double FlOunce_Quart = 0.025;
const double FlOunce_Gallon = 000625;
const double Pint_FlOunce = 20;
const double Pint_Quart = 0.5;
const double Pint_Gallon = 0.125;
const double Quart_FlOunce = 40;
const double Quart_Pint = 2;
const double Quart_Gallon = 0.25;
const double Gallon_FlOunce = 160;
const double Gallon_Pint = 8;
const double Gallon_Quart = 4; 

// Metric to English Conversion
// Length
// Milimeters
const double Milimeters_Inches = 0.0393700787;
const double Milimeters_Feet = 0.0032808399;
const double Milimeters_Yard = 0.0010936133; 
const double Milimeters_Miles = 6.213688756E-7;
const double Centimeters_Inches = 0.3937007874;
const double Centimeters_Feet = 0.032808399;
const double Centimeters_Yard = 0.010936133;
const double Centimeters_Miles = 0.0000062137;
const double Meters_Inches = 39.37007874;
const double Meters_Feet = 3.280839895;
const double Meters_Yard = 1.0936132983;
const double Meters_Miles = 0.0006213689;
const double Kilometers_Inches = 39370.07874;
const double Kilometers_Feet = 3280.839895;
const double Kilometers_Yard = 1093.6132983;
const double Kilometers_Miles = 0.6213688756;

// Mass
const double Milligram_Ounce = 0.000035274;
const double Milligram_Pound = 0.0000022046;
const double Gram_Ounce = 0.0352739907;
const double Gram_Pound = 0.0022046244;
const double Kilogram_Ounce = 35.273990723;
const double Kilogram_Pound = 2.2046244202;

// Volume
const double Milliliter_FlOunce = 0.0351950797;
const double Milliliter_Pint = 0.001759754;
const double Milliliter_Quart = 0.000879877;
const double Milliliter_Gallon = 0.0002199692;
const double Liter_FlOunce = 35.195079728;
const double Liter_Pint = 1.7597539864;
const double Liter_Quart = 0.8798769932;
const double Liter_Gallon = 0.2199692483;

// English to Metric Conversion
// Length
const double Inches_Milimeters = 25.4;
const double Inches_Centimeters = 2.54;
const double Inches_Meters = 0.0254; 
const double Inches_Kilometers = 0.0000254;
const double Feet_Milimeters = 304.8;
const double Feet_Centimeters = 30.48;
const double Feet_Meters = 0.3048;
const double Feet_Kilometers = 0.0003048;
const double Yard_Milimeters = 914.4;
const double Yard_Centimeters = 91.44;
const double Yard_Meters = 0.9144;
const double Yard_Kilometers = 0.0009144;
const double Miles_Milimeters = 1609350;
const double Miles_Centimeters = 160935;
const double Miles_Meters =  1609.35;
const double Miles_Kilometers = 1.60935;

// Mass
const double Ounce_Milligram = 28349.5;
const double Ounce_Gram = 28.3495;
const double Ounce_Kilogram = 0.0283495;
const double Pound_Milligram = 453592;
const double Pound_Gram = 453.592;
const double Pound_Kilogram =  0.453592;

// Volume 
const double FlOunce_Milliliter = 28.4130625;
const double FlOunce_Liter = 0.0284130625;
const double Pint_Milliliter = 568.26125;
const double Pint_Liter = 0.56826125;
const double Quart_Milliliter = 1136.5225;
const double Quart_Liter = 1.1365225;
const double Gallon_Milliliter = 4546.09;
const double Gallon_Liter = 4.54609;

void metric() {
	int choice;
	double value;
	
	cout << "Metric to Metric Conversion \n \n";
	
	cout << "Length: \n";
	cout << "1. Milimeters to Centimeters \n";
	cout << "2. Milimeters to Meters \n";
	cout << "3. Milimeters to Kilometers \n";
	cout << "4. Centimeters to Milimeters \n";
	cout << "5. Centimeters to Meters \n";
	cout << "6. Centimeters to Kilometers \n";
	cout << "7. Meters to Milimeters \n";
	cout << "8. Meters to Centimeters \n";
	cout << "9. Meters to Kilometers \n";
	cout << "10. Kilometers to Milimeters \n";
	cout << "11. Kilometers to Centimeters \n";
	cout << "12. Kilometers to Meters \n \n";
	
	cout << "Mass: \n";
	cout << "13. Milligram to Gram \n";
	cout << "14. Milligram to Kilogram \n";
	cout << "15. Gram to Milligram \n";
	cout << "16. Gram to Kilogram \n";
	cout << "17. Kilogram to Milligram \n";
	cout << "18. Kilogram to Gram \n \n";
	
	cout << "Volume: \n";
	cout << "19. Milliliter to Liter \n";
	cout << "20. Litter to Milliliter \n \n";
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	cout << "Enter the value you want to convert: ";
	cin >> value;
	
	switch (choice) {
	case 1:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Centimeters << " cm. \n";
		break;
	case 2: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Meters << " m. \n";
		break;
	case 3:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Kilometers << " km. \n";
		break;
	case 4:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Milimeters << " mm. \n";
		break;	
	case 5:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Meters << " m. \n";
		break;
	case 6:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Kilometers << " km. \n";
		break;
	case 7:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Milimeters << " mm. \n";
		break;
	case 8:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Centimeters << " cm. \n";
		break;
	case 9:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Kilometers << " km. \n";
		break;
	case 10:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Milimeters << " mm. \n";
		break;
	case 11:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Centimeters << " cm. \n";
		break;
	case 12:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Meters << " m. \n";
		break;
	case 13:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mg is " << value * Milligram_Gram << " g. \n";
		break;
	case 14:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mg is " << value * Milligram_Kilogram << " kg. \n";
		break;	
	case 15:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " g is " << value * Gram_Milligram << " mg. \n";
		break;
	case 16:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " g is " << value * Gram_Kilogram << " kg. \n";
		break;
	case 17:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " kg is " << value * Kilogram_Milligram << " mg. \n";
		break;
	case 18:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " kg is " << value * Kilogram_Gram << " g. \n";
		break;
	case 19:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ml is " << value * Milliliter_Liter << " L. \n";
		break;
	case 20:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " L is " << value * Liter_Milliliter << " ml. \n";
		break;			
	default:
		cout << "Invalid choice. \n";
		break;
	}	
}

void english() {
	int choice;
	double value;
	
	cout << "English to English Conversion \n \n";
	
	cout << "Length: \n";
	cout << "1. Inches to Feet \n";
	cout << "2. Inches to Yard \n";
	cout << "3. Inches to Miles \n";
	cout << "4. Feet to Inches \n";
	cout << "5. Feet to Yard \n";
	cout << "6. Feet to Miles \n";
	cout << "7. Yard to Inches \n";
	cout << "8. Yard to Feet \n";
	cout << "9. Yard to Miles \n";
	cout << "10. Miles to Inches \n";
	cout << "11. Miles to Feet \n";
	cout << "12. Miles to Yard \n \n";
	
	cout << "Mass: \n";
	cout << "13. Ounce to Pound \n";
	cout << "14. Pound to Ounce \n \n";
	
	cout << "Volume: \n";
	cout << "15. Fluid Ounce to Pint \n";
	cout << "16. Fluid Ounce to Quart \n";
	cout << "17. Fluid Ounce to Gallon \n";
	cout << "18. Pint to Fluid Ounce \n";
	cout << "19. Pint to Quart \n";
	cout << "20. Pint to Gallon \n";
	cout << "21. Quart to Fluid Ounce \n";
	cout << "22. Quart to Pint \n";
	cout << "23. Quart to Gallon \n";
	cout << "24. Gallon to Fluid Ounce \n";
	cout << "25. Gallon to Pint \n";
	cout << "26. Gallon to Quart \n \n";
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	cout << "Enter the value you want to convert: ";
	cin >> value;
	
	switch (choice) {
	case 1:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Feet << " ft. \n";
		break;
	case 2: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Yard << " yard. \n";
		break;
	case 3:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Miles << " miles. \n";
		break;
	case 4:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Inches << " inches. \n";
		break;	
	case 5:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Yard << " yard. \n";
		break;
	case 6:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Miles << " miles. \n";
		break;
	case 7:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Inches << " inches. \n";
		break;
	case 8:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Feet << " ft. \n";
		break;
	case 9:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Miles << " miles. \n";
		break;
	case 10:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Inches << " inches. \n";
		break;
	case 11:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Feet << " ft. \n";
		break;
	case 12:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Yard << " yard. \n";
		break;
	case 13:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " oz is " << value * Ounce_Pound << " lb. \n";
		break;
	case 14:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " lb is " << value * Pound_Ounce << " oz. \n";
		break;
	case 15:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " fl oz is " << value * FlOunce_Pint << " pint. \n";
		break;
	case 16:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " fl oz is " << value * FlOunce_Quart << " quart. \n";
		break;
	case 17:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " fl oz is " << value * FlOunce_Gallon << " gallon. \n";
		break;
	case 18:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " pint is " << value * Pint_FlOunce << " fl oz. \n";
		break;
	case 19:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " pint is " << value * Pint_Quart << " quart. \n";
		break;
	case 20:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " pint is " << value * Pint_Gallon << " gallon. \n";
		break;
	case 21:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " quart is " << value * Quart_FlOunce << " fl oz. \n";
		break;
	case 22:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " quart is " << value * Quart_Pint << " pint. \n";
		break;
	case 23:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " quart is " << value * Quart_Gallon << " gallon. \n";
		break;
	case 24:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " gallon is " << value * Gallon_FlOunce << " fl oz. \n";
		break;
	case 25:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " gallon is " << value * Gallon_Pint << " pint. \n";
		break;
	case 26:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " gallon is " << value * Gallon_Quart << " quart. \n";
		break;	
	default:
		cout << "Invalid choice. \n";
		break;
	}	
}

void metricToEnglish() {
	int choice;
	double value;
	
	cout << "Metric to English Conversion \n \n";
	
	cout << "Length: \n";
	cout << "1. Milimeters to Inches \n";
	cout << "2. Milimeters to Feet \n";
	cout << "3. Milimeters to Yard \n";
	cout << "4. Milimeters to Miles (not yet working) \n";
	cout << "5. Centimeters to Inches \n";
	cout << "6. Centimeters to Feet \n";
	cout << "7. Centimeters to Yard \n";
	cout << "8. Centimeters to Miles \n";
	cout << "9. Meters to Inches \n";
	cout << "10. Meters to Feet \n";
	cout << "11. Meters to Yard \n";
	cout << "12. Meters to Miles \n";
	cout << "13. Kilometers to Inches \n";
	cout << "14. Kilometers to Feet \n";
	cout << "15. Kilometers to Yard \n";
	cout << "16. Kilometers to Miles \n \n";
	
	cout << "Mass: \n";
	cout << "17. Milligram to Ounce \n";
	cout << "18. Milligram to Pound \n";
	cout << "19. Gram to Ounce \n";
	cout << "20. Gram to Pound \n";
	cout << "21. Kilogram to Ounce \n";
	cout << "22. Kilogram to Pound \n \n";
	
	cout << "Volume: \n";
	cout << "23. Milliliter to  Fluid Ounce \n";
	cout << "24. Milliliter to Pint \n";
	cout << "25. Milliliter to Quart \n";
	cout << "26. Milliliter to Gallon \n";
	cout << "27. Liter to Fluid Ounce \n";
	cout << "28. Liter to Pint \n";
	cout << "29. Liter to Quart \n";
	cout << "30. Liter to Gallon \n";
	
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	cout << "Enter the value you want to convert: ";
	cin >> value;
	
	switch (choice) {
	case 1:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Inches << " inches. \n";
		break;
	case 2: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Feet << " ft. \n";
		break;
	case 3:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Yard << " yard. \n";
		break;
	case 4:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mm is " << value * Milimeters_Miles << " miles. \n";
		break;	
	case 5:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Inches << " inches. \n";
		break;
	case 6:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Feet << " ft. \n";
		break;
	case 7:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Yard << " yard. \n";
		break;
	case 8:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " cm is " << value * Centimeters_Miles << " miles. \n";
		break;
	case 9:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Inches << " inches. \n";
		break;
	case 10:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Feet << " feet. \n";
		break;
	case 11:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Yard << " yard. \n";
		break;
	case 12:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " m is " << value * Meters_Miles << " miles. \n";
		break;
	case 13:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Inches << " inches. \n";
		break;
	case 14:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Feet << " feet. \n";
		break;
	case 15:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Yard << " yard. \n";
		break;
	case 16:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " km is " << value * Kilometers_Miles << " miles. \n";
		break;
	case 17:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mg is " << value * Milligram_Ounce << " oz. \n";
		break;
	case 18: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " mg is " << value * Milligram_Pound << " lb. \n";
		break;
	case 19:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " g is " << value * Gram_Ounce << " oz. \n";
		break;
	case 20:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " g is " << value * Gram_Pound << " lb. \n";
		break;	
	case 21:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " kg is " << value * Kilogram_Ounce << " oz. \n";
		break;
	case 22:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " kg is " << value * Kilogram_Pound << " lb. \n";
		break;
	case 23:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ml is " << value * Milliliter_FlOunce << " fl oz. \n";
		break;
	case 24:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ml is " << value * Milliliter_Pint << " pint. \n";
		break;
	case 25:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ml is " << value * Milliliter_Quart << " quart. \n";
		break;
	case 26:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ml is " << value * Milliliter_Gallon << " gallon. \n";
		break;
	case 27:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " L is " << value * Liter_FlOunce << " fl oz. \n";
		break;
	case 28:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " L is " << value * Liter_Pint << " pint. \n";
		break;
	case 29:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " L is " << value * Liter_Quart << " quart. \n";
		break;
	case 30:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " L is " << value * Liter_Gallon << " gallon. \n";
		break;
	default:
		cout << "Invalid choice. \n";
		break;
	}	
}

void englishToMetric() {
	int choice;
	double value;
	
	cout << "English to Metric Conversion \n \n";
	
	cout << "Length: \n";
	cout << "1. Inches to Milimeters \n";
	cout << "2. Inches to Centimeters \n";
	cout << "3. Inches to Meters \n";
	cout << "4. Inches to Kilometers (not yet working) \n";
	cout << "5. Feet to Milimeters \n";
	cout << "6. Feet to Centimeters \n";
	cout << "7. Feet to Meters \n";
	cout << "8. Feet to Kilometers \n";
	cout << "9. Yard to Milimeters \n";
	cout << "10. Yard to Centimeters \n";
	cout << "11. Yard to Meters \n";
	cout << "12. Yard to Kilometers \n";
	cout << "13. Miles to Milimeters \n";
	cout << "14. Miles to Centimeters \n";
	cout << "15. Miles to Meters \n";
	cout << "16. Miles to Kilometers \n \n";
	
	cout << "Mass: \n";
	cout << "17. Ounce to Milligram \n";
	cout << "18. Ounce to Gram \n";
	cout << "19. Ounce to Kilogram \n";
	cout << "20. Pound to Milligram \n";
	cout << "21. Pound to Gram \n";
	cout << "22. Pound to Kilogram \n \n";
	
	cout << "Volume: \n";
	cout << "23. Fluid Ounce to Milliliter \n";
	cout << "24. Fluid Ounce to Liter \n";
	cout << "25. Pint to Milliliter \n";
	cout << "26. Pint to Liter \n";
	cout << "27. Quart to Milliliter \n";
	cout << "28. Quart to Liter \n";
	cout << "29. Gallon to Milliliter \n";
	cout << "30. Gallon to Liter \n \n";
	
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	cout << "Enter the value you want to convert: ";
	cin >> value;
	
	switch (choice) {
	case 1:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Milimeters << " mm. \n";
		break;
	case 2: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Centimeters << " cm. \n";
		break;
	case 3:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Meters << " m. \n";
		break;
	case 4:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " inches is " << value * Inches_Kilometers << " km. \n";
		break;	
	case 5:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Milimeters << " mm. \n";
		break;
	case 6:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Centimeters << " cm. \n";
		break;
	case 7:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Meters << " m. \n";
		break;
	case 8:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " ft is " << value * Feet_Kilometers << " km. \n";
		break;
	case 9:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Milimeters << " mm. \n";
		break;
	case 10:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Centimeters << " cm. \n";
		break;
	case 11:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Meters << " m. \n";
		break;
	case 12:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " yard is " << value * Yard_Kilometers << " km. \n";
		break;
	case 13:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Milimeters << " mm. \n";
		break;
	case 14:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Centimeters << " cm. \n";
		break;
	case 15:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Meters << " m. \n";
		break;
	case 16:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " miles is " << value * Miles_Kilometers << " km. \n";
		break;
	case 17:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " oz is " << value * Ounce_Milligram << " mg. \n";
		break;
	case 18: 
		cout << "\n";
		cout << "Result: \n";
		cout << value << " oz is " << value * Ounce_Gram << " g. \n";
		break;
	case 19:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " oz is " << value * Ounce_Kilogram << " kg. \n";
		break;
	case 20:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " lb is " << value * Pound_Milligram << " mg. \n";
		break;	
	case 21:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " lb is " << value * Pound_Gram << " g. \n";
		break;
	case 22:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " lb is " << value * Pound_Kilogram << " kg. \n";
		break;
	case 23:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " fl oz is " << value * FlOunce_Milliliter << " ml. \n";
		break;
	case 24:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " fl oz is " << value * FlOunce_Liter << " L. \n";
		break;
	case 25:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " pint is " << value * Pint_Milliliter << " ml. \n";
		break;
	case 26:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " pint is " << value * Pint_Liter << " L. \n";
		break;
	case 27:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " quart is " << value * Quart_Milliliter << " ml. \n";
		break;
	case 28:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " quart is " << value * Quart_Liter << " L. \n";
		break;
	case 29:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " gallon is " << value * Gallon_Milliliter << " ml. \n";
		break;
	case 30:
		cout << "\n";
		cout << "Result: \n";
		cout << value << " gallon is " << value * Gallon_Liter << " L. \n";
		break;
	default:
		cout << "Invalid choice. \n";
		break;
	}	
}

int main () {
	int option;
	
	cout << "Unit Conversion Program \n";
	
	cout << "1. Metric to Metric Conversion \n";
	cout << "2. English to English Conversion \n";
	cout << "3. Metric to English Conversion \n";
	cout << "4. English to Metric Conversion \n";
	
	cout << "Enter your option: ";
	cin >> option;
	cout << "\n";
	
	switch (option) {
		case 1:
			metric();
			break;
		case 2: 
			english();
			break;
		case 3:
			metricToEnglish();
			break;
		case 4:
			englishToMetric();
			break;
		default:
			cout << "Invalid option. Please select a valid conversion type. \n";
			break;
	}	
	
	return 0;
}

