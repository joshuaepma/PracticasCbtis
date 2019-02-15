Ayudando a Peter Parker
Introducción
Para financiarse, Peter Parker ha desarrollado su propio video juego del Hombre Araña. El juego tiene N niveles y completar cada uno de ellos representa un determinado número de puntos, mismos que se van sumando para obtener la puntuación final del jugador con la finalidad de mostrar una lista de todos los jugadores ordenada desendentemente. Peter ha ordenado sus niveles por dificultad desde el más fácil al más difícil, pero él tuvo un error e hizo que algunos niveles más difíciles valieran menos que otros más fáciles. Para sobreponerse de este problema, Peter decidió reducir el número de puntos para determinados niveles con el objetivo de realizar la secuencia de puntos estríctamente creciente (de tal manera que en los niveles más fáciles valgan menos puntos que los niveles más difíciles). Ayuda a Peter a corregir su video juego de tal forma que el número total de puntos reducidos sea el mínimo. La puntuación final tiene que ser positiva. Puedes asumir que una solución existe para cada caso de prueba.

Problema
Minimizar las modificaciones a una secuencia de números dada para convertirla a una secuencia estrictamente creciente

Entrada
La primera línea de entrada contiene un entero positivo $$N$$ ($$1 \leq N \leq 100$$), que representa el número de niveles del video juego.
Las próximas $$N$$ líneas contienen números enteros positivos menores a 20,000, que son los números de puntos que Peter asoció a cada nivel, ordenados desde el primer nivel, hasta el último.

Salida
La primera y única línea de salida debe contener un número, el mínimo total de puntos que Spidy, digo Peter tiene que substraer para satisfacer sus requerimientos dada la tarea expresada anteriormente.

Problemas
Entrada | Salida
3 | 3
5
5

5
Entrada | Salida
4 | 6
5
3
7

5