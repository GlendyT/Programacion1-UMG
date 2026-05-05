Conteste las siguientes preguntas a mano, en letra de molde y suba sus respuestas en formato PDF

1. Se tiene un programa que busca el numero mayor en un arreglo.

Que pasaria si no se inicializa la variable "mayor"?
Por que es importante iniciar con el primer valor del arreglo?

**Respuesta:**

Si la variable `mayor` no se inicializa, contendra basura de memoria, es decir, un valor aleatorio que queda en esa posicion de memoria del sistema. Al comparar los elementos del arreglo contra ese valor impredecible, el resultado seria incorrecto: si la basura fuera un numero muy grande, ningun elemento del arreglo lo superaria y `mayor` nunca se actualizaria correctamente.

Es importante iniciar con el primer valor del arreglo (`mayor = arreglo[0]`) porque asi se garantiza que la variable parte de un valor valido y perteneciente al conjunto de datos reales. Si se iniciara con 0 u otro valor arbitrario, en un arreglo de numeros negativos nunca se actualizaria. Al partir del primer elemento, cualquier comparacion posterior es coherente con los datos ingresados.

---

2. Explique cual es la mejor forma de Realizar un reporte.

**Respuesta:**

La mejor forma de realizar un reporte es dividir el programa en funciones especializadas, tal como se muestra en los programas de empleados y estudiantes:

1. **Capturar datos**: ingresar y almacenar la informacion en estructuras (`struct`).
2. **Procesar datos**: usar funciones como `calcularSalario()` o `calcularPromedio()` que calculan los valores derivados.
3. **Mostrar listado**: una funcion `mostrarListado()` que presenta cada registro individualmente.
4. **Mostrar reporte**: una funcion `mostrarReportes()` que calcula y presenta el total general, promedio, valor maximo, valor minimo y conteos (por ejemplo, aprobados/reprobados o empleados sobre el promedio).

Cada seccion debe tener un encabezado claro para facilitar la lectura. Separar la logica en funciones hace el codigo mas ordenado, facil de corregir y reutilizable.

---

3. En un sistema se registra la edad de usuarios.

Pregunta:
Que problemas pueden ocurrir si no se valida correctamente la edad?
Mencione al menos 3 errores posibles y sus consecuencias.

**Respuesta:**

| # | Error | Consecuencia |
|---|-------|-------------|
| 1 | Ingresar una edad negativa (ej: -5) | El sistema la acepta y registra un usuario con edad invalida, causando errores en estadisticas y calculos de promedio. |
| 2 | Ingresar un numero irreal (ej: 999) | Se registraria una persona de 999 anos, corrompiendo promedios y reportes. |
| 3 | Variable no inicializada (basura de memoria) | Si la variable se usa sin leer ningun valor del usuario, la condicion evalua un numero aleatorio, dando resultados impredecibles. |

---

4. Un programador quiere repetir un proceso 10 veces, pero el ciclo se ejecuta solo 9.

Pregunta:
Que error logico pudo haber cometido?

**Respuesta:**

El error logico mas comun es usar el operador `<` en lugar de `<=` cuando se empieza a contar desde 1:

```cpp
// Incorrecto: se ejecuta solo 9 veces
for (int i = 1; i < 10; i++)

// Correcto: se ejecuta 10 veces
for (int i = 1; i <= 10; i++)
```

El programador confundio el operador de comparacion. La regla es: si se inicia desde `i = 0`, se usa `i < 10`; si se inicia desde `i = 1`, se debe usar `i <= 10`. Mezclar ambas formas produce una iteracion de menos.

---

5. Un sistema permite ingresar edades sin validacion.

Pregunta:
Que problemas pueden ocurrir?

**Respuesta:**

- **Valores negativos**: un usuario con edad `-10` podria acceder o no acceder a servicios incorrectamente segun las condiciones del programa.
- **Valores irreales**: edades como `999` distorsionan promedios, totales y estadisticas generadas en los reportes.
- **Desbordamiento de tipo**: si se ingresa un valor mayor al limite del tipo `int`, el numero se desborda y se convierte en un valor negativo o incorrecto.
- **Caracteres no numericos**: si el usuario escribe letras donde se espera un numero, `cin` falla y la variable queda con basura, haciendo que todas las condiciones posteriores sean impredecibles.
