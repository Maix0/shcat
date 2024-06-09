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
	v->a[1900] = anon_sym_AMP_GT_GT;
	v->a[1901] = anon_sym_LT_AMP;
	v->a[1902] = anon_sym_GT_AMP;
	v->a[1903] = anon_sym_GT_PIPE;
	v->a[1904] = state(1140);
	v->a[1905] = 12;
	v->a[1906] = sym_redirected_statement;
	v->a[1907] = sym_for_statement;
	v->a[1908] = sym_while_statement;
	v->a[1909] = sym_if_statement;
	v->a[1910] = sym_case_statement;
	v->a[1911] = sym_function_definition;
	v->a[1912] = sym_compound_statement;
	v->a[1913] = sym_subshell;
	v->a[1914] = sym_list;
	v->a[1915] = sym_negated_command;
	v->a[1916] = sym_command;
	v->a[1917] = sym_variable_assignments;
	v->a[1918] = 36;
	v->a[1919] = actions(3);
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = 1;
	v->a[1921] = sym_comment;
	v->a[1922] = actions(95);
	v->a[1923] = 1;
	v->a[1924] = sym_word;
	v->a[1925] = actions(97);
	v->a[1926] = 1;
	v->a[1927] = anon_sym_for;
	v->a[1928] = actions(101);
	v->a[1929] = 1;
	v->a[1930] = anon_sym_if;
	v->a[1931] = actions(103);
	v->a[1932] = 1;
	v->a[1933] = anon_sym_case;
	v->a[1934] = actions(105);
	v->a[1935] = 1;
	v->a[1936] = anon_sym_LPAREN;
	v->a[1937] = actions(109);
	v->a[1938] = 1;
	v->a[1939] = anon_sym_LBRACE;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = actions(111);
	v->a[1941] = 1;
	v->a[1942] = anon_sym_BANG;
	v->a[1943] = actions(117);
	v->a[1944] = 1;
	v->a[1945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1946] = actions(119);
	v->a[1947] = 1;
	v->a[1948] = anon_sym_DOLLAR;
	v->a[1949] = actions(121);
	v->a[1950] = 1;
	v->a[1951] = anon_sym_DQUOTE;
	v->a[1952] = actions(123);
	v->a[1953] = 1;
	v->a[1954] = sym_raw_string;
	v->a[1955] = actions(125);
	v->a[1956] = 1;
	v->a[1957] = aux_sym_number_token1;
	v->a[1958] = actions(127);
	v->a[1959] = 1;
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = aux_sym_number_token2;
	v->a[1961] = actions(129);
	v->a[1962] = 1;
	v->a[1963] = anon_sym_DOLLAR_LBRACE;
	v->a[1964] = actions(131);
	v->a[1965] = 1;
	v->a[1966] = anon_sym_DOLLAR_LPAREN;
	v->a[1967] = actions(133);
	v->a[1968] = 1;
	v->a[1969] = anon_sym_BQUOTE;
	v->a[1970] = actions(135);
	v->a[1971] = 1;
	v->a[1972] = sym_file_descriptor;
	v->a[1973] = actions(137);
	v->a[1974] = 1;
	v->a[1975] = sym_variable_name;
	v->a[1976] = actions(141);
	v->a[1977] = 1;
	v->a[1978] = anon_sym_LF;
	v->a[1979] = state(139);
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = 1;
	v->a[1981] = aux_sym__statements_repeat1;
	v->a[1982] = state(173);
	v->a[1983] = 1;
	v->a[1984] = sym_command_name;
	v->a[1985] = state(269);
	v->a[1986] = 1;
	v->a[1987] = sym_variable_assignment;
	v->a[1988] = state(663);
	v->a[1989] = 1;
	v->a[1990] = aux_sym_command_repeat1;
	v->a[1991] = state(665);
	v->a[1992] = 1;
	v->a[1993] = sym_concatenation;
	v->a[1994] = state(689);
	v->a[1995] = 1;
	v->a[1996] = aux_sym__case_item_last_repeat2;
	v->a[1997] = state(749);
	v->a[1998] = 1;
	v->a[1999] = sym_file_redirect;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
