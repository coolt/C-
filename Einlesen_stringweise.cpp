// Will man mehrer Wörter einlesen,
// braucht es nach cin mehrere Variablen
// Der Datentyp muss mit dem eingelesenen Datentyp übereinstimmen

#include <cstdio>
#include <iostream> 
#include <string>

int main() {

    // Deklaration
    std::string name;
    int alter;

    // Ausgabe auf Konsole
    std::cout << "Name und Alter eingeben\n";
    
    // 2 Input einlesen (in 2 variablen
    std::cin >> name >> alter;
    
    // Ausgabe des Eingelesenen
    std::cout << name << " " << alter << "\n";    

   
    return 0;
}
