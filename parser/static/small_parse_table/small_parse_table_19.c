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
	v->a[1900] = sym_file_redirect;
	v->a[1901] = state(767);
	v->a[1902] = 1;
	v->a[1903] = aux_sym__case_item_last_repeat2;
	v->a[1904] = state(810);
	v->a[1905] = 1;
	v->a[1906] = aux_sym_command_repeat1;
	v->a[1907] = state(1321);
	v->a[1908] = 1;
	v->a[1909] = sym_pipeline;
	v->a[1910] = state(1432);
	v->a[1911] = 1;
	v->a[1912] = aux_sym_redirected_statement_repeat2;
	v->a[1913] = state(2254);
	v->a[1914] = 1;
	v->a[1915] = sym__statement_not_pipeline;
	v->a[1916] = state(2264);
	v->a[1917] = 1;
	v->a[1918] = sym__statements;
	v->a[1919] = actions(93);
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = 2;
	v->a[1921] = anon_sym_while;
	v->a[1922] = anon_sym_until;
	v->a[1923] = actions(107);
	v->a[1924] = 2;
	v->a[1925] = anon_sym_LT_AMP_DASH;
	v->a[1926] = anon_sym_GT_AMP_DASH;
	v->a[1927] = actions(115);
	v->a[1928] = 2;
	v->a[1929] = sym_raw_string;
	v->a[1930] = sym_number;
	v->a[1931] = state(282);
	v->a[1932] = 5;
	v->a[1933] = sym_arithmetic_expansion;
	v->a[1934] = sym_string;
	v->a[1935] = sym_simple_expansion;
	v->a[1936] = sym_expansion;
	v->a[1937] = sym_command_substitution;
	v->a[1938] = actions(105);
	v->a[1939] = 8;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = anon_sym_LT;
	v->a[1941] = anon_sym_GT;
	v->a[1942] = anon_sym_GT_GT;
	v->a[1943] = anon_sym_AMP_GT;
	v->a[1944] = anon_sym_AMP_GT_GT;
	v->a[1945] = anon_sym_LT_AMP;
	v->a[1946] = anon_sym_GT_AMP;
	v->a[1947] = anon_sym_GT_PIPE;
	v->a[1948] = state(1296);
	v->a[1949] = 12;
	v->a[1950] = sym_redirected_statement;
	v->a[1951] = sym_for_statement;
	v->a[1952] = sym_while_statement;
	v->a[1953] = sym_if_statement;
	v->a[1954] = sym_case_statement;
	v->a[1955] = sym_function_definition;
	v->a[1956] = sym_compound_statement;
	v->a[1957] = sym_subshell;
	v->a[1958] = sym_list;
	v->a[1959] = sym_negated_command;
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = sym_command;
	v->a[1961] = sym_variable_assignments;
	v->a[1962] = 34;
	v->a[1963] = actions(3);
	v->a[1964] = 1;
	v->a[1965] = sym_comment;
	v->a[1966] = actions(87);
	v->a[1967] = 1;
	v->a[1968] = anon_sym_LF;
	v->a[1969] = actions(89);
	v->a[1970] = 1;
	v->a[1971] = sym_word;
	v->a[1972] = actions(91);
	v->a[1973] = 1;
	v->a[1974] = anon_sym_for;
	v->a[1975] = actions(95);
	v->a[1976] = 1;
	v->a[1977] = anon_sym_if;
	v->a[1978] = actions(97);
	v->a[1979] = 1;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = anon_sym_case;
	v->a[1981] = actions(99);
	v->a[1982] = 1;
	v->a[1983] = anon_sym_LPAREN;
	v->a[1984] = actions(101);
	v->a[1985] = 1;
	v->a[1986] = anon_sym_LBRACE;
	v->a[1987] = actions(103);
	v->a[1988] = 1;
	v->a[1989] = anon_sym_BANG;
	v->a[1990] = actions(109);
	v->a[1991] = 1;
	v->a[1992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1993] = actions(111);
	v->a[1994] = 1;
	v->a[1995] = anon_sym_DOLLAR;
	v->a[1996] = actions(113);
	v->a[1997] = 1;
	v->a[1998] = anon_sym_DQUOTE;
	v->a[1999] = actions(117);
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
