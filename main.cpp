#include <iostream>
#include <ctime>

int main() {
    time_t timetoday;
    time (&timetoday);
	//Hochkomplizierte Funktionalität
    std::cout << "Hello Mama!";
    std::cout << "Calendar date and time as per todays is : "<< asctime(localtime(&timetoday));
    std::cout << "Thanh was here";
    std::cout << "Olaf too";
    return 0;
}
