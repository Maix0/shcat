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
	v->a[1900] = actions(91);
	v->a[1901] = 1;
	v->a[1902] = anon_sym_case;
	v->a[1903] = actions(93);
	v->a[1904] = 1;
	v->a[1905] = anon_sym_LPAREN;
	v->a[1906] = actions(95);
	v->a[1907] = 1;
	v->a[1908] = anon_sym_LF;
	v->a[1909] = actions(97);
	v->a[1910] = 1;
	v->a[1911] = anon_sym_LBRACE;
	v->a[1912] = actions(99);
	v->a[1913] = 1;
	v->a[1914] = anon_sym_BANG;
	v->a[1915] = actions(103);
	v->a[1916] = 1;
	v->a[1917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1918] = actions(105);
	v->a[1919] = 1;
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = anon_sym_DOLLAR;
	v->a[1921] = actions(107);
	v->a[1922] = 1;
	v->a[1923] = anon_sym_DQUOTE;
	v->a[1924] = actions(111);
	v->a[1925] = 1;
	v->a[1926] = anon_sym_DOLLAR_LBRACE;
	v->a[1927] = actions(113);
	v->a[1928] = 1;
	v->a[1929] = anon_sym_DOLLAR_LPAREN;
	v->a[1930] = actions(115);
	v->a[1931] = 1;
	v->a[1932] = anon_sym_BQUOTE;
	v->a[1933] = actions(117);
	v->a[1934] = 1;
	v->a[1935] = sym_file_descriptor;
	v->a[1936] = actions(119);
	v->a[1937] = 1;
	v->a[1938] = sym_variable_name;
	v->a[1939] = state(122);
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = 1;
	v->a[1941] = aux_sym__statements_repeat1;
	v->a[1942] = state(172);
	v->a[1943] = 1;
	v->a[1944] = sym_command_name;
	v->a[1945] = state(234);
	v->a[1946] = 1;
	v->a[1947] = sym_variable_assignment;
	v->a[1948] = state(567);
	v->a[1949] = 1;
	v->a[1950] = sym_concatenation;
	v->a[1951] = state(634);
	v->a[1952] = 1;
	v->a[1953] = sym_file_redirect;
	v->a[1954] = state(670);
	v->a[1955] = 1;
	v->a[1956] = aux_sym_command_repeat1;
	v->a[1957] = state(672);
	v->a[1958] = 1;
	v->a[1959] = aux_sym__case_item_last_repeat2;
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = state(1014);
	v->a[1961] = 1;
	v->a[1962] = sym_pipeline;
	v->a[1963] = state(1157);
	v->a[1964] = 1;
	v->a[1965] = aux_sym_redirected_statement_repeat2;
	v->a[1966] = state(1901);
	v->a[1967] = 1;
	v->a[1968] = sym__statement_not_pipeline;
	v->a[1969] = state(1902);
	v->a[1970] = 1;
	v->a[1971] = sym__statements;
	v->a[1972] = actions(87);
	v->a[1973] = 2;
	v->a[1974] = anon_sym_while;
	v->a[1975] = anon_sym_until;
	v->a[1976] = actions(109);
	v->a[1977] = 2;
	v->a[1978] = sym_raw_string;
	v->a[1979] = sym_number;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = state(348);
	v->a[1981] = 5;
	v->a[1982] = sym_arithmetic_expansion;
	v->a[1983] = sym_string;
	v->a[1984] = sym_simple_expansion;
	v->a[1985] = sym_expansion;
	v->a[1986] = sym_command_substitution;
	v->a[1987] = actions(101);
	v->a[1988] = 7;
	v->a[1989] = anon_sym_LT;
	v->a[1990] = anon_sym_GT;
	v->a[1991] = anon_sym_GT_GT;
	v->a[1992] = anon_sym_LT_AMP;
	v->a[1993] = anon_sym_GT_AMP;
	v->a[1994] = anon_sym_GT_PIPE;
	v->a[1995] = anon_sym_LT_GT;
	v->a[1996] = state(1001);
	v->a[1997] = 12;
	v->a[1998] = sym_redirected_statement;
	v->a[1999] = sym_for_statement;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
