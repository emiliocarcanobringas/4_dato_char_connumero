/*Tipos de datos básicos de C++. Este programa nos muestra el uso de una variable de tipo char ya que 
también podemos poner no solo letras sino también números, cualquier caracter que encontremos en nuestro teclado.
*/

#include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y colocamos el valor de manejo de caracteres
	
	char letra = '7', letra2 = 'ú'; //Definimos la constante y colocamos una constante de prueba locale con acento para la librería
	
	cout<<letra<<endl; //Imprimiendo la constante
	cout<<letra2<<endl; //Imprimimos la contante de prueba con acento
	
	return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
