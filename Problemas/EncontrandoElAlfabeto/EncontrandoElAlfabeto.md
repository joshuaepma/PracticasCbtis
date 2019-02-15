Encontrando al Alfabeto
Introducción
Indiana Jones se encontró una lista de palabras escrita en un alfabeto desconocido. Sin embargo, él sabe que estas palabras están orden alfabético y es de vital interés para su próxima expedición encontrar el orden de prelación del alfabeto en cuestión. No obstante, puede ser una lista señuelo, por lo tanto, tiene que poder identificar si no existe un ordenamiento alfabético, o bien si se puede encontrar más de una manera de ordenar el alfabeto.

Problema
Dada una lista de palabras cuyas letras posiblemente están ordenadas de acuerdo a un alfabeto, escribir un programa que (1) encuentre el único ordenamiento alfabetico de las letras usadas, (2) determine que dicho ordenamiento no existe, o bien, (3) indique que es posible encontrar más de una solución.

Entrada
La primera línea de entrada contiene un entero positivo N ($$N \leq 100$$), que representará el número de palabras.
Las siguientes N líneas contendrán la lista de palabras encontradas, una palabra por cada línea, cada palabra consiste a lo mucho de 10 letras minúsculas.

Salida
La primera y única línea de salida deberá contener todas las letras en orden alfabético. Si no existiera dicho orden, la salida deberá ser "!" (un signo de admiración). Si existen más de una solución, la salida será '?' (un signo de interrogación)

Entrada | Salida
5 | luka
ula
uka
klua
kula

al
Entrada | Salida
4 | !
jaja
baba
baja

beba