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
	v->a[1900] = 3;
	v->a[1901] = sym_variable_assignment;
	v->a[1902] = sym_concatenation;
	v->a[1903] = aux_sym_declaration_command_repeat1;
	v->a[1904] = state(693);
	v->a[1905] = 7;
	v->a[1906] = sym_arithmetic_expansion;
	v->a[1907] = sym_brace_expression;
	v->a[1908] = sym_string;
	v->a[1909] = sym_number;
	v->a[1910] = sym_simple_expansion;
	v->a[1911] = sym_expansion;
	v->a[1912] = sym_command_substitution;
	v->a[1913] = actions(764);
	v->a[1914] = 19;
	v->a[1915] = anon_sym_PIPE;
	v->a[1916] = anon_sym_SEMI_SEMI;
	v->a[1917] = anon_sym_PIPE_AMP;
	v->a[1918] = anon_sym_AMP_AMP;
	v->a[1919] = anon_sym_PIPE_PIPE;
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = anon_sym_LT;
	v->a[1921] = anon_sym_GT;
	v->a[1922] = anon_sym_GT_GT;
	v->a[1923] = anon_sym_AMP_GT;
	v->a[1924] = anon_sym_AMP_GT_GT;
	v->a[1925] = anon_sym_LT_AMP;
	v->a[1926] = anon_sym_GT_AMP;
	v->a[1927] = anon_sym_GT_PIPE;
	v->a[1928] = anon_sym_LT_AMP_DASH;
	v->a[1929] = anon_sym_GT_AMP_DASH;
	v->a[1930] = anon_sym_LT_LT;
	v->a[1931] = anon_sym_LT_LT_DASH;
	v->a[1932] = anon_sym_AMP;
	v->a[1933] = anon_sym_SEMI;
	v->a[1934] = 23;
	v->a[1935] = actions(3);
	v->a[1936] = 1;
	v->a[1937] = sym_comment;
	v->a[1938] = actions(1146);
	v->a[1939] = 1;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = anon_sym_LPAREN;
	v->a[1941] = actions(1148);
	v->a[1942] = 1;
	v->a[1943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1944] = actions(1150);
	v->a[1945] = 1;
	v->a[1946] = anon_sym_DOLLAR;
	v->a[1947] = actions(1152);
	v->a[1948] = 1;
	v->a[1949] = sym__special_character;
	v->a[1950] = actions(1154);
	v->a[1951] = 1;
	v->a[1952] = anon_sym_DQUOTE;
	v->a[1953] = actions(1156);
	v->a[1954] = 1;
	v->a[1955] = aux_sym_number_token1;
	v->a[1956] = actions(1158);
	v->a[1957] = 1;
	v->a[1958] = aux_sym_number_token2;
	v->a[1959] = actions(1160);
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = 1;
	v->a[1961] = anon_sym_DOLLAR_LBRACE;
	v->a[1962] = actions(1162);
	v->a[1963] = 1;
	v->a[1964] = anon_sym_DOLLAR_LPAREN;
	v->a[1965] = actions(1164);
	v->a[1966] = 1;
	v->a[1967] = anon_sym_BQUOTE;
	v->a[1968] = actions(1166);
	v->a[1969] = 1;
	v->a[1970] = anon_sym_DOLLAR_BQUOTE;
	v->a[1971] = actions(1168);
	v->a[1972] = 1;
	v->a[1973] = sym_test_operator;
	v->a[1974] = actions(1170);
	v->a[1975] = 1;
	v->a[1976] = sym__bare_dollar;
	v->a[1977] = actions(1172);
	v->a[1978] = 1;
	v->a[1979] = sym__brace_start;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = state(371);
	v->a[1981] = 1;
	v->a[1982] = aux_sym_command_repeat2;
	v->a[1983] = state(1233);
	v->a[1984] = 1;
	v->a[1985] = aux_sym__literal_repeat1;
	v->a[1986] = state(1281);
	v->a[1987] = 1;
	v->a[1988] = sym_concatenation;
	v->a[1989] = state(2185);
	v->a[1990] = 1;
	v->a[1991] = sym_subshell;
	v->a[1992] = actions(1144);
	v->a[1993] = 2;
	v->a[1994] = sym_raw_string;
	v->a[1995] = sym_word;
	v->a[1996] = actions(695);
	v->a[1997] = 3;
	v->a[1998] = sym_file_descriptor;
	v->a[1999] = ts_builtin_sym_end;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
