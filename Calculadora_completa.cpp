#include <iostream>
using namespace std;

class Calculadora{
    private:
        double resultado;
    public:
        double sumar(double a, double b){
            resultado = a + b;
            return resultado;
        }
        double restar(double a, double b){
            resultado = a - b;
            return resultado;
        }
        double multiplicar(double a, double b){
            resultado = a * b;
            return resultado;
        }
        double dividir(double a, double b){
            resultado = a / b;
            return resultado;
        }
        double potencia(double base, int exponente){
            resultado = 1;
            for(int i = 1;i <= exponente; i++){
                resultado = resultado * base;
            }
            return resultado;
        }
        double porcentaje(double a, double porcentaje){
            resultado = (2 / porcentaje) * 100;
            return resultado;
        }
        double cambioSigno(double a){
            resultado = -a;
            return resultado;
        }
        int menu(){
            int select;
            cout << "\nPlease choose an option:\n";
            cout << "[1] - Addition ➕\n";
            cout << "[2] - Subtraction ➖\n";
            cout << "[3] - Multiplication ✖️\n";
            cout << "[4] - Division ➗\n";
            cout << "[5] - Power 🔼\n";
            cout << "[6] - Percentage %\n";
            cout << "[7] - Sign Change ±\n";
            cout << "[0] - Exit ✖️\n";
            cout << "Enter the number corresponding to your choice: ";
            cin >> select;
            return select;
        }
};

int main() {
    int num = 1;
    double a, b;
    Calculadora new1;

    cout << "\n=====================================\n";
    cout << "*  Welcome to the yeray calculator  *\n";
    cout << "=====================================\n\n";
    while(num != 0){
        num = new1.menu();
        if(num == 1){       //Addition
            cout << "You have selected 'Addition ➕'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << a << " + " << b << " = " << new1.sumar(a, b) << "\n";
        }else if (num == 2){        //Subtraction
            cout << "You have selected 'Subtraction ➖'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << a << " - " << b << " = " << new1.restar(a, b) << "\n";
        }else if (num == 3){        //Multiplication
            cout << "You have selected 'Multiplication ✖️'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << a << " x " << b << " = " << new1.multiplicar(a, b) << "\n";
        }else if (num == 4){        //Division
            cout << "You have selected 'Division ➗'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter divisor number: ";
            cin >> b;
            cout << a << " / " << b << " = " << new1.dividir(a, b) << "\n";
        }else if (num == 5){        //Power
            cout << "You have selected 'Power 🔼'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter the power number: ";
            cin >> b;
            cout << a << " ^ " << b << " = " << new1.potencia(a, b) << "\n";
        }else if (num == 6){        //Percentage
            cout << "You have selected 'Percentage %'\n";
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter the percentage: ";
            cin >> b;
            cout << a << " % " << b << " = " << new1.porcentaje(a, b) << "\n";
        }else if (num == 7){        //Sign Change
            cout << "You have selected 'Sign Change ±'\n";
            cout << "Enter number: ";
            cin >> a;
            cout << a << " != " << new1.cambioSigno(a) << "\n";
        }
    }
}