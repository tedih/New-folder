#include "student.cpp"
#include <iostream>

int main() {
    Student s1;
    s1.lexoEmri("John Doe");
    s1.lexoId("12345");
    s1.lexoNotaProvimiLenda(80, 1);
    s1.lexoNotaProvimiLenda(90, 2);
    s1.lexoNotaProvimiLenda(70, 3);
    s1.printStudent();
    std::cout << "Mesatarja: " << s1.afishoMesatare() << std::endl;

    Student s2("Lenda1", "Lenda2", "Lenda3", "Lenda4", "Lenda5", "Lenda6");
    s2.lexoEmri("Jane Doe");
    s2.lexoId("67890");
    s2.lexoNotaProvimiLenda(75, 1);
    s2.lexoNotaProvimiLenda(85, 2);
    s2.lexoNotaProvimiLenda(95, 3);
    s2.printStudent();
    std::cout << "Mesatarja: " << s2.afishoMesatare() << std::endl;

    return 0;
}