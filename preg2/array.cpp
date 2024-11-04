#include <iostream>
using namespace std;

class Array {
private:
    size_t size;
    int* ptr;

public:
    // Constructor por defecto con tamaño dado
    explicit Array(int n = 10) : size(n), ptr(new int[n]()) {}

    // Constructor de copia
    Array(const Array& other) : size(other.size), ptr(new int[other.size]) {
        for (size_t i = 0; i < size; ++i) {
            ptr[i] = other.ptr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] ptr;
    }

    // Método para obtener el tamaño
    size_t getSize() const {
        return size;
    }

    // Sobrecarga del operador de asignación
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] ptr;
            size = other.size;
            ptr = new int[size];
            for (size_t i = 0; i < size; ++i) {
                ptr[i] = other.ptr[i];
            }
        }
        return *this;
    }

    // Sobrecarga del operador de igualdad
    bool operator==(const Array& other) const {
        if (size != other.size) {
            return false;
        }
        for (size_t i = 0; i < size; ++i) {
            if (ptr[i] != other.ptr[i]) {
                return false;
            }
        }
        return true;
    }

    // Sobrecarga del operador de desigualdad
    bool operator!=(const Array& other) const {
        return !(*this == other);
    }

    // Sobrecarga del operador += (para sumar otro Array)
    Array& operator+=(const Array& other) {
        if (size == other.size) {
            for (size_t i = 0; i < size; ++i) {
                ptr[i] += other.ptr[i];
            }
        }
        return *this;
    }

    // Sobrecarga del operador [] para acceso de escritura
    int& operator[](int index) {
        return ptr[index];
    }

    // Sobrecarga del operador [] para acceso de solo lectura
    const int& operator[](int index) const {
        return ptr[index];
    }

    // Sobrecarga del operador << para salida
    friend ostream& operator<<(ostream& os, const Array& array) {
        for (size_t i = 0; i < array.size; ++i) {
            os << array.ptr[i] << " ";
        }
        return os;
    }

    // Sobrecarga del operador >> para entrada
    friend istream& operator>>(istream& is, Array& array) {
        for (size_t i = 0; i < array.size; ++i) {
            is >> array.ptr[i];
        }
        return is;
    }
};

int main() {
    Array arr1(5);
    Array arr2(5);

    // Leer valores para arr1 y arr2
    cout << "Ingrese valores para arr1: ";
    cin >> arr1;
    cout << "Ingrese valores para arr2: ";
    cin >> arr2;

    // Imprimir ambos arrays
    cout << "arr1: " << arr1 << endl;
    cout << "arr2: " << arr2 << endl;

    // Comparar los arrays
    if (arr1 == arr2) {
        cout << "arr1 y arr2 son iguales" << endl;
    } else {
        cout << "arr1 y arr2 son diferentes" << endl;
    }

    // Sumar arr2 a arr1
    arr1 += arr2;
    cout << "arr1 después de += arr2: " << arr1 << endl;

    return 0;
}
