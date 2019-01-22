# Hackeando a Donald Trump

Un hacker de Tamaulipas es un genio y tiene una lista de palabras que esconden la contraseña de la bóveda de Donald Trump. Sabe que todos las contraseñas son impares y asume que la contraseña correcta será aquella que tenga una entrada al derecho y al revés en la lista. Por ejemplo la palabra "cinvestav" sería la contraseña correcta si también aparece la palabra vatsevnic en la lista. ayuda al hacker a encontrar qué palabra es la correcta y despliega el carácter que se encuentra a la mitad. En este caso sería "e".

## Entrada
La primera línea contendrá el número de N palabras, donde 1 <= N <= 100 . Mientras que las líneas posteriores, tendrán la lista de palabras que esconden la contraseña.

Las palabras serán números impares mayores de 2 y menores de 14.

## Salida:
La primera y única línea contendrá la longitud de la contraseña correcta y la letra que se encuentra a la mitad.

Las soluciones serán únicas.

## Ejemplos

- Ejemplo 1
    + Entrada:
        4
        las
        god
        psala
        sal

    + Salida
        3 a

    + Explicación: La contraseña en este ejemplo es "sal", puesto también se encuentra "las" en la lista. Su longitud es 3 y el carácter que está en medio de la palabra es "a"

- Ejemplo 2
    + Entrada: 
        4
        solos
        ptq
        tttrp
        tulipan

    + Salida:
        5 l
 
    + Explicación: solos es un palíndrome, por lo tanto se lee igual de izquierda a derecha, como de derecha a izquierda, por lo tanto la solución 5, su longitud, y la letra "l", que se encuentra a la mitad de la palabra.
    