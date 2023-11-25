# Trabajo final
## Integrantes
- Nicolas Miguel Guerrero Icochea
- Samuel Esteban Cano Chocce
- Eduardo Elias Puglisevich Vergara
## Indice
- [Trabajo final](#Trabajo final)
	- [Integrantes](#Integrantes)
	- [Indice](#Indice)
	- [Descripcion](#Descripcion)
 	- [Features](#Features) 
	- [Requerimientos](#Requerimientos)
 	- [Uso](#Uso)
## Descripcion
Trabajo final del curso de teoria de compiladores donde se desarrolla una shell funcional que permite acceder a comandos del sistema a través de un lenguaje propiamente creado. Además de ello, la shell también soporta el uso de estructuras condicionales y bucles. 

## Features

El programa cuenta con los siguientes comandos:

- cd: Permite acceder a distintos directorios en el sistema operativo.
- rm: Elimina el archivo indicado como parametro.
- echo: Muestra el mensaje brindado como parametro.
- mkdir: Crea un directorio con el nombre dado.
- ls: Muestra todos los archivos del directorio actual.
- cp: Copia el archivo dado en el directorio dado como parametro.
- pwd: Imprime en pantalla el directorio actual.

Además, se trató de implementar el bucle for y el condificional if:
- if: consiste en un statement condicional en el contexto de shells de sistemas Linux.
- for: statement que consiste en un bucle for de los sistemas Linux. 

## Requerimientos
Para ejecutar el programa, es necesario tener instalado antlr4 versión 4.13.1.

## Uso
Para compilar el proyecto por primera vez con CLANG se ejecuta el siguiente comando. Por favor, verifique haber primero ejecutado el scrip setup.sh, así como verificar que sus rutas sean las correctas:

	clang++ -std=c++17  -I $ANTLR4I -L $ANTLR4L -lantlr4-runtime  *.cpp

Luego, para ejecutarlo simplemente hay que usar el siguiente comando:

	./a.out

