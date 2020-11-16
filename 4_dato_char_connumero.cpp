/*Tipos de datos b�sicos de C++. Este programa nos muestra el uso de una variable de tipo char ya que 
tambi�n podemos poner no solo letras sino tambi�n n�meros, cualquier caracter que encontremos en nuestro teclado.
*/

#include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y colocamos el valor de manejo de caracteres
	
	char letra = '7', letra2 = '�'; //Definimos la constante y colocamos una constante de prueba locale con acento para la librer�a
	
	cout<<letra<<endl; //Imprimiendo la constante
	cout<<letra2<<endl; //Imprimimos la contante de prueba con acento
	
	return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
