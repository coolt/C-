// kompilieren 1.Variante     $ make <datei>     
// programm aufrufen          $ ./<datei>


#include <iostream> 
#include <vector>          

int main() {

    std::vector <int> messungen = { 12, 10, 11, 12, 10 };
    //std::vector <std::string> klasse_1b = { "eva", "tim", "lin", "noe" };
    
    
    // Ausgabe
    std::cout << messungen[1]<< "\n";
    // " " << klasse_1b[3]   
    return 0;
}
