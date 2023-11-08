#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
/*int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}*/

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int ret;

	ht = hash_table_create(30);
	ret = hash_table_set(ht, "USA", "Washington");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "France", "Paris");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "UK", "London");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Spain", "Madrid");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Germany", "Berlin");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "China", "Beijing");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Russia", "Moscow");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Bahrain", "Manama");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Canada", "Ottawa");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Brazil", "Brasilia");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Sweden", "Stockholm");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Iceland", "Reykjavik");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Japan", "Tokyo");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Australia", "Canberra");
	printf("%d\n", ret);
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
