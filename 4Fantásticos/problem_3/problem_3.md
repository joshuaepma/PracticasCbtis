# Hiro Hamada

### Descripción
Hiro y Tadachi están jugando con cubos. Ambos tienen su propia pila de cubos. Las pilas consisten en N columnas (donde N es un número impar). El número de cubos en la i-ésima columna de la pila de Hiro está etiquetada con $$m_i$$ y la pila de Tadachi con $$s_i$$.

Ellos han decidido crear dos pilas independientes e iguales construidas de tal forma que sus columnas sean estrictamente descendentes al inicio y posteriormente estrictamente ascendente (vea la imagen de abajo) y las alturas de las columnas adyacentes difieran exactamente en uno (vea nuevamente la imagen).

Las pilas pueden ser modificadas removiendo un cubo de la pila de alguna de las columnas (el cubo no se volverá a utilizar) o tomando un cubo de la caja de cubos y poniéndolo encima de alguna columna (hay un número infinito de cubos en la caja). Remover o agregar un cubo cuenta como un movimiento.

Tu tarea es determinar el número mínimo de movimientos para que Hiro y Tadachi puedan reordenar sus pilas de acuerdo a lo descrito.

### Entrada
La primera línea de entrada contiene un número impar N. Donde N (1 ≤ N ≤ 300 000) representa el número de columnas en ambas pilas.

La segunda línea de entrada contiene N enteros $$m_i$$ (0 ≤ $$m_i$$ ≤ $$10^12$$), que representa las alturas de las columnas en las pilas de Hiro.

La tercer línea de entrada contiene N enteros $$s_i$$ (0 ≤ $$s_i$$ ≤ $$10^12$$), que representa las alturas de las columnas en las pilas de Tadachi .

### Salida
La primera y única línea de salida debe contener el número mínimo de movimientos para cumplir lo descrito arriba.


### Ejemplos

-------------
Entrada | Salida
=============
3  | 3
1 2 3 
3 2 2
-------------

-------------
Entrada | Salida
=============
5  | 10
2 3 0 1 4 
3 3 2 3 1
-------------