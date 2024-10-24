#!/bin/bash

# Paso 1: Ejecutar 'make' para generar 'libftprintf.a'
echo "Compilando libft.a..."
make

# Comprobar si la compilación fue exitosa
if [ $? -ne 0 ]; then
    echo "Error durante la compilación de libft.a"
    exit 1
fi

# Paso 2: Compilar el archivo main.c con las bibliotecas 'libftprintf.a' y 'libft.a'
echo "Compilando test_printf..."
cc -Wall -Wextra -Werror -o test_printf main.c -L. -lft

# Comprobar si la compilación fue exitosa
if [ $? -ne 0 ]; then
    echo "Error durante la compilación de test_printf"
    exit 1
fi

# Paso 3: Ejecutar el ejecutable generado
echo "Ejecutando test_printf..."
./test_printf

# Comprobar si la ejecución fue exitosa
if [ $? -ne 0 ]; then
    echo "Error durante la ejecución de test_printf"
    exit 1
fi

