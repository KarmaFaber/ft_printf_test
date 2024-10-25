#include <limits.h>
#include <stdio.h>

#define ANSI_COLOR_MAGENTA "\x1b[34m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

// Prototipo de tu función ft_printf
int	ft_printf(const char *format, ...);

int	main(void)
{
    printf(ANSI_COLOR_MAGENTA "\n--------------START-------------" ANSI_COLOR_RESET);
	// Test format %c (character)
	char c = 'A';
	printf(ANSI_COLOR_MAGENTA "\nTest '%%c':\n" ANSI_COLOR_RESET);
    //c.1:
    printf("\n");
	printf("Original: printf -> ");
	int expected_return_1 = printf("%c", c);
    printf("\n");
	ft_printf("__Own: ft_printf -> ", c);
	int own_return_1 = ft_printf("%c", c);
    printf("\n");
	printf("own_return: [%i] and expected_return [%i]\n", own_return_1,expected_return_1);
	
    if (own_return_1 == expected_return_1)
        printf(ANSI_COLOR_GREEN "c.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"c.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n---------------------------\n" ANSI_COLOR_RESET);

    // Test format %s (string)
    
    char *str1 = NULL;
    char *str2 = "Hello world!";
    printf(ANSI_COLOR_MAGENTA "Test '%%s':\n" ANSI_COLOR_RESET);
    //s.1:
    printf("\n");
    printf("Original: printf: str1 = NULL-> ");
    int expected_return_2 = printf("%s", str1);
    printf("\n");
    ft_printf("__Own: ft_printf: str1 = NULL-> ");
    int own_return_2 = ft_printf("%s", str1);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_2, expected_return_2);
    if (own_return_2 == expected_return_2)
        printf(ANSI_COLOR_GREEN "s.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"s.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    // s.2:
    printf("\n");
    printf("Original: printf:str2 = Hello world! -> ");
    int expected_return_3 = printf("%s", str2);
    printf("\n");
    ft_printf("__Own: ft_printf:str2 = Hello world! -> ");
    int own_return_3 = ft_printf("%s", str2);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_3, expected_return_3);
    if (own_return_3 == expected_return_3)
        printf(ANSI_COLOR_GREEN "s.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"s.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);



    // Test format %p (pointer)
    int x = 42;
    int *p = &x;
    printf(ANSI_COLOR_MAGENTA "Test %%p:\n" ANSI_COLOR_RESET);
    //p.1:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_4 = printf("%p", p);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_4 = ft_printf("%p", p);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_4, expected_return_4);
    if (own_return_4 == expected_return_4)
        printf(ANSI_COLOR_GREEN "p.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\np.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
        
    //p.2:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_5 = printf("%p %p", (void *)0, (void *)0);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_5 = ft_printf("%p %p", 0, 0);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_5, expected_return_5);
    if (own_return_5 == expected_return_5)
        printf(ANSI_COLOR_GREEN "p.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\np.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //p.3:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_6 = printf("%p", NULL);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_6 = ft_printf("%p", NULL);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_6, expected_return_6);
    if (own_return_6 == expected_return_6)
        printf(ANSI_COLOR_GREEN "p.3: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\np.3: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);



    // Test format %d
    printf(ANSI_COLOR_MAGENTA "Test %%d:\n" ANSI_COLOR_RESET);

    //d.1:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_7 = printf("%d", 12345);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_7 = ft_printf("%d", 12345);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_7, expected_return_7);
    if (own_return_7 == expected_return_7)
        printf(ANSI_COLOR_GREEN "d.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nd.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //d.2:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_8 = printf("%d", -1);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_8 = ft_printf("%d", -1);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_8, expected_return_8);
    if (own_return_8 == expected_return_8)
        printf(ANSI_COLOR_GREEN "d.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nd.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //d.3:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_9 = printf("%d", -99);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_9 = ft_printf("%d", -99);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_9, expected_return_9);
    if (own_return_9 == expected_return_9)
        printf(ANSI_COLOR_GREEN "d.3: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nd.3: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //d.4:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_10 = printf("%d", -107);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_10 = ft_printf("%d", -107);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_10, expected_return_10);
    if (own_return_10 == expected_return_10)
        printf(ANSI_COLOR_GREEN "d.4: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nd.4: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n---------------------------------\n" ANSI_COLOR_RESET);



    // Test format %i (int)
    printf(ANSI_COLOR_MAGENTA "Test %%i:\n" ANSI_COLOR_RESET);
    //i.1:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_11 = printf("%i", -5678);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_11 = ft_printf("%i", -5678);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_11, expected_return_11);
    if (own_return_11 == expected_return_11)
        printf(ANSI_COLOR_GREEN "i.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\ni.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    
    //i.2:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_12 = printf("%i", -5);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_12 = ft_printf("%i", -5);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_12, expected_return_12);
    if (own_return_12 == expected_return_12)
        printf(ANSI_COLOR_GREEN "i.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\ni.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //i.3:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_13 = printf("%i", -77);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_13 = ft_printf("%i", -77);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_13, expected_return_13);
    if (own_return_13 == expected_return_13)
        printf(ANSI_COLOR_GREEN "i.3: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\ni.3: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    //i.4:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_14 = printf("%i", -124);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_14 = ft_printf("%i", -124);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_14, expected_return_14);
    if (own_return_14 == expected_return_14)
        printf(ANSI_COLOR_GREEN "i.4: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\ni.4: Not today. Fix your code.\n"ANSI_COLOR_RESET);
 
    //i.5:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_15 = printf("%i", INT_MIN);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_15 = ft_printf("%i", INT_MIN);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_15, expected_return_15);
    if (own_return_15 == expected_return_15)
        printf(ANSI_COLOR_GREEN "i.5: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\ni.5: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);


    // Test format %u (unsigned int)
    printf(ANSI_COLOR_MAGENTA "Test %%u:\n" ANSI_COLOR_RESET);

    //u.1:
    printf("\n");
    unsigned int u = 4294967295;
    printf("Original: printf -> ");
    int expected_return_16 = printf("%u", u);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_16 = ft_printf("%u", u);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_16, expected_return_16);
    if (own_return_16 == expected_return_16)
        printf(ANSI_COLOR_GREEN "u.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nu.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);

     //u.2:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_17 = printf("%u", 0);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_17 = ft_printf("%u", 0);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_17, expected_return_17);
    if (own_return_17 == expected_return_17)
        printf(ANSI_COLOR_GREEN "u.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nu.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n---------------------------------\n" ANSI_COLOR_RESET);


    // Test format %x (hex)
    
    printf(ANSI_COLOR_MAGENTA "Test %%x:\n" ANSI_COLOR_RESET);
     //x.1:
    unsigned int f = 255;
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_18 = printf("%x", f);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_18 = ft_printf("%x", f);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_18, expected_return_18);
    if (own_return_18 == expected_return_18)
        printf(ANSI_COLOR_GREEN "x.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nx.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n---------------------------------\n" ANSI_COLOR_RESET);



    // Test format %X (HEX)
    printf(ANSI_COLOR_MAGENTA "Test %%X:\n" ANSI_COLOR_RESET);
    //X.1:
    unsigned int X = 255;
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_19 = printf("%X", X);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_19 = ft_printf("%X", X);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_19, expected_return_19);
    if (own_return_19 == expected_return_19)
        printf(ANSI_COLOR_GREEN "X.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nX.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);



    // Test format %
    printf(ANSI_COLOR_MAGENTA "Test '%%':\n" ANSI_COLOR_RESET);
    //%.1:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_20 = printf("%%");
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_20 = ft_printf("%%");
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_20, expected_return_20);
    if (own_return_20 == expected_return_20)
        printf(ANSI_COLOR_GREEN "%%.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\n%%.1: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);

    //%.2:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_21 = printf("%%%%");
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_21 = ft_printf("%%%%");
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_21, expected_return_21);
    if (own_return_21 == expected_return_21)
        printf(ANSI_COLOR_GREEN "%%.2: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\n%%.2: Not today. Fix your code.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "\n--------------------------------\n" ANSI_COLOR_RESET);


    // Test mixed format:
    printf(ANSI_COLOR_MAGENTA "Test mixed format:\n" ANSI_COLOR_RESET);
    //mix.1:
    printf("\n");
    printf("Original: printf -> ");
    int expected_return_22 = printf("Character: %c\nString: %s\nSigned int: %i\nUnsigned int: %u\nDecimal: %d\nPointer: %p\nHex lowercase: %x\nHex uppercase: %X\nPercent sign: %%\n", 
           'A', "Hello, world!", -123, 123, 456, (void*)0x7ffee3b2d018, 255, 255);
    printf("\n");
    ft_printf("__Own: ft_printf -> ");
    int own_return_22 = ft_printf("Character: %c\nString: %s\nSigned int: %i\nUnsigned int: %u\nDecimal: %d\nPointer: %p\nHex lowercase: %x\nHex uppercase: %X\nPercent sign: %%\n", 
           'A', "Hello, world!", -123, 123, 456, (void*)0x7ffee3b2d018, 255, 255);
    printf("\n");
    printf("own_return: [%i] and expected_return [%i]\n", own_return_22, expected_return_22);
    if (own_return_22 == expected_return_22)
        printf(ANSI_COLOR_GREEN "mix.1: Let's goooo!\n"ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED"\nmix1: Not today. Fix your code.\n"ANSI_COLOR_RESET);

    printf(ANSI_COLOR_MAGENTA "\n--------------END---------------\n\n" ANSI_COLOR_RESET);


    return (0);
}