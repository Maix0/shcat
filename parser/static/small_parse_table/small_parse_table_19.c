/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_19.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_95(t_small_parse_table_array *v)
{
	v->a[1900] = 5;
	v->a[1901] = sym_arithmetic_expansion;
	v->a[1902] = sym_string;
	v->a[1903] = sym_simple_expansion;
	v->a[1904] = sym_expansion;
	v->a[1905] = sym_command_substitution;
	v->a[1906] = actions(55);
	v->a[1907] = 6;
	v->a[1908] = anon_sym_LT;
	v->a[1909] = anon_sym_GT;
	v->a[1910] = anon_sym_GT_GT;
	v->a[1911] = anon_sym_LT_AMP;
	v->a[1912] = anon_sym_GT_AMP;
	v->a[1913] = anon_sym_GT_PIPE;
	v->a[1914] = state(1179);
	v->a[1915] = 12;
	v->a[1916] = sym_redirected_statement;
	v->a[1917] = sym_for_statement;
	v->a[1918] = sym_while_statement;
	v->a[1919] = sym_if_statement;
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = sym_case_statement;
	v->a[1921] = sym_function_definition;
	v->a[1922] = sym_compound_statement;
	v->a[1923] = sym_subshell;
	v->a[1924] = sym_list;
	v->a[1925] = sym_negated_command;
	v->a[1926] = sym_command;
	v->a[1927] = sym__variable_assignments;
	v->a[1928] = 34;
	v->a[1929] = actions(3);
	v->a[1930] = 1;
	v->a[1931] = sym_comment;
	v->a[1932] = actions(9);
	v->a[1933] = 1;
	v->a[1934] = anon_sym_for;
	v->a[1935] = actions(13);
	v->a[1936] = 1;
	v->a[1937] = anon_sym_if;
	v->a[1938] = actions(15);
	v->a[1939] = 1;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = anon_sym_case;
	v->a[1941] = actions(17);
	v->a[1942] = 1;
	v->a[1943] = anon_sym_LPAREN;
	v->a[1944] = actions(19);
	v->a[1945] = 1;
	v->a[1946] = anon_sym_LBRACE;
	v->a[1947] = actions(45);
	v->a[1948] = 1;
	v->a[1949] = sym_word;
	v->a[1950] = actions(53);
	v->a[1951] = 1;
	v->a[1952] = anon_sym_BANG;
	v->a[1953] = actions(59);
	v->a[1954] = 1;
	v->a[1955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1956] = actions(61);
	v->a[1957] = 1;
	v->a[1958] = anon_sym_DOLLAR;
	v->a[1959] = actions(63);
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = 1;
	v->a[1961] = anon_sym_DQUOTE;
	v->a[1962] = actions(67);
	v->a[1963] = 1;
	v->a[1964] = anon_sym_DOLLAR_LBRACE;
	v->a[1965] = actions(69);
	v->a[1966] = 1;
	v->a[1967] = anon_sym_DOLLAR_LPAREN;
	v->a[1968] = actions(71);
	v->a[1969] = 1;
	v->a[1970] = anon_sym_BQUOTE;
	v->a[1971] = actions(73);
	v->a[1972] = 1;
	v->a[1973] = sym_file_descriptor;
	v->a[1974] = actions(75);
	v->a[1975] = 1;
	v->a[1976] = sym_variable_name;
	v->a[1977] = actions(87);
	v->a[1978] = 1;
	v->a[1979] = anon_sym_LF;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = state(135);
	v->a[1981] = 1;
	v->a[1982] = aux_sym__statements_repeat1;
	v->a[1983] = state(189);
	v->a[1984] = 1;
	v->a[1985] = sym_command_name;
	v->a[1986] = state(303);
	v->a[1987] = 1;
	v->a[1988] = sym_variable_assignment;
	v->a[1989] = state(650);
	v->a[1990] = 1;
	v->a[1991] = sym_concatenation;
	v->a[1992] = state(678);
	v->a[1993] = 1;
	v->a[1994] = aux_sym__case_item_last_repeat2;
	v->a[1995] = state(712);
	v->a[1996] = 1;
	v->a[1997] = sym_file_redirect;
	v->a[1998] = state(713);
	v->a[1999] = 1;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
