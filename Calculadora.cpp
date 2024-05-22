// Calculadora la cual puede llegar a calcular: 
// Sumas/Restas/Divisiones/Multiplicaciones

#include <iostream>

using namespace std; 

int main(){
	
	int suma; 
	int resta;
	int multiplicacion;
	int division;
	//Variable de resultado de cada uno
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoDivision;


cout << "--Calculadora--";

while (true){
	
	cout << "Selecciona una de las siguientes opciones: " <<endl;
	cout << "1.Suma"<<endl;
	cout << "2. Resta"<<endl;
	cout << "3. Multiplicación" <<endl; 
	cout << "4. Division" <<endl;
	cout << "5. Salir del menu"<<endl;
	
	cout << "Introduce la opcion que quieras: "; 
	
		int opcion;
		cin >> opcion; 
	
	       switch (opcion) {
            case 1:
                cout << "Introduzca el numero 1:";
                cin >> suma;
                cout << "Introduzca el numero 2:";
                cin >> suma;
                resultadoSuma = suma + suma;
                cout << "El resultado es: " << resultadoSuma << endl;
                break;
            case 2:
                cout << "Introduzca el numero 1:";
                cin >> resta;
                cout << "Introduzca el numero 2:";
                cin >> resta;
                resultadoResta = resta - resta;
                cout << "El resultado es: " << resultadoResta << endl;
                break;
            case 3:
                cout << "Introduzca el numero 1:";
                cin >> multiplicacion;
                cout << "Introduzca el numero 2:";
                cin >> multiplicacion;
                resultadoMultiplicacion = multiplicacion * multiplicacion;
                cout << "El resultado es: " << resultadoMultiplicacion << endl;
                break;
            case 4:
                cout << "Introduzca el numero 1:";
                cin >> division;
                cout << "Introduzca el numero 2:";
                cin >> division;
                if (division != 0) {
                    resultadoDivision = division / division;
                    cout << "El resultado es: " << resultadoDivision << endl;
                } else {
                    cout << "Error: no se puede dividir entre cero." << endl;
                }
                break;
            case 5:
                return 0; // Salir del programa
            default:
                cout << "Opción inválida. Vuelva a intentar." << endl;
        }
}

}


//Code By Melodias/Meli
