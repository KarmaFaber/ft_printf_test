#include <stdio.h>
#include <limits.h>

#define ANSI_COLOR_MAGENTA     "\x1b[35m"
#define ANSI_COLOR_RESET       "\x1b[0m"

// Prototipo de tu función ft_printf
int ft_printf(const char *format, ...);

int main(void)
{
      

    // Prueba del formato 'c' (carácter)
    char c = 'A';
    printf(ANSI_COLOR_MAGENTA "\nPrueba 'c':\n"ANSI_COLOR_RESET);
    printf("Original: printf -> ");
    int expected_return_1=printf("%c\n", c);
    ft_printf("Own: ft_printf -> ", c);
    int own_return_1=ft_printf("%c\n", c);
    printf("own_return: [%i] and expected_return [%i]\n\n", own_return_1, expected_return_1);



   // Prueba del formato 's' (cadena)
    char *str1 = NULL;
    char *str2 = "Hola mundo";
    printf(ANSI_COLOR_MAGENTA "Prueba 's':\n"ANSI_COLOR_RESET);
    printf("Original: printf_: str1= NULL -> [%s]\n", str1);
    ft_printf("Personal: ft_printf_:  str1= NULL-> [%s]\n", str1);

    printf("Original: printf_:str2 = Hola mundo -> [%s]\n", str2);
    ft_printf("Personal: ft_printf_:str2 = Hola mundo -> [%s]\n\n", str2);
   

    // Prueba del formato 'p' (puntero)
    int x = 42;
    int *p = &x;
    printf(ANSI_COLOR_MAGENTA "Prueba 'p':\n"ANSI_COLOR_RESET);
    printf("Original:   printf -> [%p]\n", p);
    ft_printf("Personal: ft_printf -> [%p]\n\n", p);

    printf("original 0: %p %p \n", (void *)0, (void *)0);
    ft_printf("Personal 0: %p %p \n\n", 0, 0);

    printf("original NULL: %p \n", NULL);
    ft_printf("Personal NULL: %p \n\n", NULL);
   

    // Prueba del formato 'd' (enteros con signo)
   int d = 1234;
   printf(ANSI_COLOR_MAGENTA "Prueba 'd':\n"ANSI_COLOR_RESET);

   int a= ft_printf("%d", 1234);
   int b = printf("%d", 1234);
   printf("\nown_return: [%i] y expected_return [%i]:\n", a, b);
   printf("Original: 1234  printf -> [%d]\n", d);
   ft_printf("Personal: 1234 ft_printf -> [%d]\n\n", d);

   int i= ft_printf("%d", -1);
   int j = printf("%d", -1);

   printf("\ni_own return: [%i] y j_expected return [%i]:\n", i, j);
   printf("Original: -1  printf -> [%d]\n", -1);
   ft_printf("Personal: -1 ft_printf -> [%d]\n\n", -1);

   printf("Original: -9  printf -> [%d]\n", -9);
   ft_printf("Personal: -9 ft_printf -> [%d]\n\n", -9);

   int x_x= ft_printf("%d", -12);
   int y = printf("%d", -12);

   printf("\nxx_own return: [%i] y y_expected return [%i]:\n", x_x, y);
   printf("Original: -12  printf -> [%d]\n", -12);
   ft_printf("Personal: -12 ft_printf -> [%d]\n\n", -12);

   printf("Original: -99  printf -> [%d]\n", -99);
   ft_printf("Personal: -99 ft_printf -> [%d]\n\n", -99);


   int m = ft_printf("%d", -101);
   int n = printf("%d", -101);

   printf("\nm_own return: [%i] y n_expected return [%i]:\n", m, n);
   printf("Original: -101  printf -> [%d]\n", -101);
   ft_printf("Personal: -101 ft_printf -> [%d]\n\n", -101);



    // Prueba del formato 'i' (enteros con signo)
    int i_i = -5678;
    printf(ANSI_COLOR_MAGENTA "Prueba 'i':\n"ANSI_COLOR_RESET);
    printf("Original:   printf -> [%i]\n", i_i);
    ft_printf("Personal: ft_printf -> [%i]\n\n", i_i);

       printf("Original: -1  printf -> [%i]\n", -1);
   ft_printf("Personal: -1 ft_printf -> [%i]\n", -1);

   printf("Original: -9  printf -> [%i]\n", -9);
   ft_printf("Personal: -9 ft_printf -> [%i]\n", -9);

   printf("Original: -12  printf -> [%i]\n", -12);
   ft_printf("Personal: -12 ft_printf -> [%i]\n", -12);

   printf("Original: -99  printf -> [%i]\n", -99);
   ft_printf("Personal: -99 ft_printf -> [%i]\n", -99);

   printf("Original: -101  printf -> [%i]\n", -101);
   ft_printf("Personal: -101 ft_printf -> [%i]\n", -101);

   printf("Original: INT_MIN  printf -> [%i]\n", INT_MIN);
   ft_printf("Personal: INT_MIN ft_printf -> [%i]\n\n", INT_MIN);



    // Prueba del formato 'u' (enteros sin signo)
    unsigned int u = 4294967295;
    printf(ANSI_COLOR_MAGENTA "Prueba 'u':\n"ANSI_COLOR_RESET);
    printf("Original:   printf -> [%u]\n", u);
    ft_printf("Personal: ft_printf -> [%u]\n\n", u);

    // Prueba del formato 'x' (hexadecimal en minúsculas)
    unsigned int f = 255;
    printf(ANSI_COLOR_MAGENTA"Prueba 'x':\n"ANSI_COLOR_RESET);
    printf("Original:   printf -> [%x]\n", f);
    ft_printf("Personal: ft_printf -> [%x]\n\n", f);

    // Prueba del formato 'X' (hexadecimal en mayúsculas)
    unsigned int X = 255;
    printf(ANSI_COLOR_MAGENTA "Prueba 'X':\n"ANSI_COLOR_RESET);
    printf("Original:   printf -> [%X]\n", X);
    ft_printf("Personal: ft_printf -> [%X]\n\n", X);

    // Prueba del formato '%' (literal '%')
    printf(ANSI_COLOR_MAGENTA "Prueba '%%':\n"ANSI_COLOR_RESET);
    printf("Original: printf -> [%%]\n");
    ft_printf("Personal: ft_printf -> [%%]\n\n");

    printf("Original: printf -> [%%%%]\n");
    ft_printf("Personal: ft_printf -> [%%%%]\n\n");


    return 0;
}