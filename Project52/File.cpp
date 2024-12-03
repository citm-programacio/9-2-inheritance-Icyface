#include <iostream>
#include <string>
using namespace std;

// Clase base Building
class Building {
protected:
    string name; // Nombre del edificio

public:
    // Constructor que inicializa el nombre
    Building(const string& name) : name(name) {}

    // Método para obtener el nombre del edificio
    string getName() const {
        return name;
    }
};

// Clase derivada Warehouse
class Warehouse : public Building {
private:
    int wood;   // Recursos de madera
    int rocks;  // Recursos de rocas
    int wheat;  // Recursos de trigo

public:
    // Constructor que inicializa el nombre y los recursos
    Warehouse(const string& name, int wood, int rocks, int wheat)
        : Building(name), wood(wood), rocks(rocks), wheat(wheat) {}

    // Método para imprimir los recursos
    void printResources() const {
        cout << "Warehouse: " << name << endl;
        cout << "  Wood: " << wood << endl;
        cout << "  Rocks: " << rocks << endl;
        cout << "  Wheat: " << wheat << endl;
    }
};

// Clase derivada House
class House : public Building {
private:
    int floors;      // Número de pisos
    int inhabitants; // Número de habitantes
    int servants;    // Número de sirvientes

public:
    // Constructor que inicializa el nombre, pisos, habitantes y sirvientes
    House(const string& name, int floors, int inhabitants, int servants)
        : Building(name), floors(floors), inhabitants(inhabitants), servants(servants) {}

    // Método para imprimir los detalles de la casa
    void printHouse() const {
        cout << "House: " << name << endl;
        cout << "  Floors: " << floors << endl;
        cout << "  Inhabitants: " << inhabitants << endl;
        cout << "  Servants: " << servants << endl;
    }
};

// Clase derivada Temple
class Temple : public Building {
private:
    string god;     // Nombre del dios al que está dedicado el templo
    int priests;    // Número de sacerdotes

public:
    // Constructor que inicializa el nombre, dios y número de sacerdotes
    Temple(const string& name, const string& god, int priests)
        : Building(name), god(god), priests(priests) {}

    // Método para imprimir los detalles del templo
    void printTemple() const {
        cout << "Temple: " << name << endl;
        cout << "  God: " << god << endl;
        cout << "  Priests: " << priests << endl;
    }
};

int main() {
    // Crear una instancia de cada clase
    Warehouse warehouse("Main Warehouse", 500, 300, 200);
    House house("Villa Romana", 2, 10, 3);
    Temple temple("Temple of Jupiter", "Jupiter", 5);

    // Imprimir los detalles de cada edificio
    warehouse.printResources();
    cout << endl;

    house.printHouse();
    cout << endl;

    temple.printTemple();
    cout << endl;

    return 0;
}
