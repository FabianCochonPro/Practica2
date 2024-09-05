#include <string>
using namespace std;
class Invoice
{
public:
	Invoice(std::string partNumber, std::string partDescription, int iquantify, int iprice)
	   :number{partNumber} ,description{ partDescription }
	   
	{
		if (iquantify>0)
		{
			quantify = iquantify;
		}
		if (price >0)
		{
			price = iprice;
		}

	}
	string getpNumber() const
	{
		return number;
	}
	string getDescription() const
	{
		return description;
	}
	int getpNumber() const
	{
		return number;
	}
	int getpNumber() const
	{
		return number;
	}
private:
	string number;
	string description;
	int quantify;
	int price;
	double tax = 0.20 ;
	double discount = 0 ;
	
};
