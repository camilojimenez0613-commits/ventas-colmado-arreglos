[README (2).md](https://github.com/user-attachments/files/35223281/README.2.md)
# Ventas del Colmado "Don Pepe"

Programa en C++ que registra las ventas diarias de un colmado de lunes a domingo, las guarda en un arreglo unidimensional y muestra un resumen claro: total semanal, promedio diario, mayor y menor venta, y los días que superaron el promedio.

**Estudiante:** Camilo Salas Jimenez

**Asignatura:** Lógica de Programación

**Docente:** Gamalier Reyes del Carmen

## Características

- Arreglo de `double` para las ventas y arreglo de `string` para los nombres de los días.
- Tamaño definido con la constante `const int DIAS = 7;`.
- Ciclos `for` para llenar y recorrer los arreglos.
- Validación: no se aceptan ventas negativas (se vuelve a pedir el dato).
- Sin vectores, matrices ni variables globales (excepto `DIAS`).

## Cómo compilar y ejecutar

**Con Visual Studio:** crear un proyecto de consola en C++, pegar el contenido de `main.cpp` y presionar `Ctrl + F5`.

**Con g++ (terminal):**

```bash
g++ main.cpp -o ventas
./ventas        # En Windows: ventas.exe
```

## Ejemplo de ejecución

```text
===== REGISTRO DE VENTAS - COLMADO DON PEPE =====
Ventas del Lunes: RD$ 3500
Ventas del Martes: RD$ 2800
Ventas del Miercoles: RD$ -5
  Error: la venta no puede ser negativa.
Ventas del Miercoles: RD$ 3000
Ventas del Jueves: RD$ 4000
Ventas del Viernes: RD$ 5500
Ventas del Sabado: RD$ 7200
Ventas del Domingo: RD$ 2450

===== VENTAS DEL COLMADO DON PEPE =====
Lunes: RD$ 3500.00
Martes: RD$ 2800.00
Miercoles: RD$ 3000.00
Jueves: RD$ 4000.00
Viernes: RD$ 5500.00
Sabado: RD$ 7200.00
Domingo: RD$ 2450.00
---------------------------------------
Total semanal: RD$ 28450.00
Promedio diario: RD$ 4064.29
Mayor venta: Sabado (RD$ 7200.00)
Menor venta: Domingo (RD$ 2450.00)
Dias sobre el promedio: 2 -> Viernes, Sabado
```
