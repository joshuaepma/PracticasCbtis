La mayor ruta ascendente
Introducción
Speedy González se ha dado cuenta que ha perdido condición física y quiere recuperarla haciendo recorridos por las montañas de la reserva ecólogica El Cielo.

Speedy ha diseñado varias rutas que pueden ser descritas como una secuencia de N números que representan la altura de su altímetro tomada a intervalos regulares.

Speedy sabe que un segmento de la ruta va en ascenso si éste tiene una secuencia de valores estrictamente creciente. Él quiere clasificar las rutas de acuerdo al mayor ascenso que ésta posea (la mayor diferencia de altura que posea un segmento ascendente de la ruta). Por ejemplo, suponiendo que una ruta tiene la siguiente secuencia: 12 3 5 7 10 6 1 11, speedy identifica que existen dos secuencias de ascenso, la primera formada por 3,5,7 y 10, y la segunda formada por 1 y 11. La diferencia de 3 (inicio del primer ascenso) y 10 (fin del primer ascenso) es igual a 7, mientras que el segundo ascenso, que tiene como inicio 1 y fin 11, tiene una diferencia de 10. Por lo tanto, el segundo segmento (10) posee el mayor ascenso, que es precisamente la distancia que Speedy requiere utilizar para la clasificación.

problema
Ayuda a Speedy a clasificar sus rutas desarrollando un programa que regrese el mayor de los segmentos ascendentes.

Problema
Dada una secuencia de números, regresar la secuencia ascendente cuya diferencia entre el inicio y el final de la misma sea la mayor

Entrada
La primera línea de entradad contiene un entero positivo N ($$1\leq N \leq 1000$$), que se refiere al número de puntos de medición de la ruta.
La segunda línea de entrada contiene N enteros positivos $$P_i$$ ($$1\leq P_i \leq 1000$$), que son las alturas tomadas
en el punto de medición de la ruta.

Salida
La primera y única línea de salida deberá contener el mayor de los segmentos ascendentes de la ruta.

Ejemplos
Entrada | Salida
5 | 5

1 2 1 4 6
Entrada | Salida
8 | 8

12 20 1 3 4 4 11 1