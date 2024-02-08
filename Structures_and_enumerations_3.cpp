
#include <iostream>
struct adress {
	std::string city;
	std::string street;
	int number_houme;
	int number_apartament;
	int index;
};
void show_adress(adress adress1) {
	std::cout << "\nCity: " << adress1.city;
	std::cout << "\nStreet: " << adress1.street;
	std::cout << "\nNumber houme: " << adress1.number_houme;
	std::cout << "\nNumder apartament: " << adress1.number_apartament;
	std::cout << "\nIndex: " << adress1.index << std::endl;
}
int main() {
	adress adress1, adress2;
	adress1 = { "Москва", "Арбат", 12, 8, 123456 };

	adress2.city = "Ижевск";
	adress2.street = "Пушкина";
	adress2.number_houme = 59;
	adress2.number_apartament = 143;
	adress2.index = 953769;

	show_adress(adress1);
	show_adress(adress2);



}