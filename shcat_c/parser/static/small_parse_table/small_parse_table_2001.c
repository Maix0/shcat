/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2001.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10005(t_small_parse_table_array *v)
{
	v->a[200100] = 20;
	v->a[200101] = actions(71);
	v->a[200102] = 1;
	v->a[200103] = sym_comment;
	v->a[200104] = actions(3612);
	v->a[200105] = 1;
	v->a[200106] = anon_sym_DOLLAR;
	v->a[200107] = actions(3616);
	v->a[200108] = 1;
	v->a[200109] = aux_sym_number_token1;
	v->a[200110] = actions(3618);
	v->a[200111] = 1;
	v->a[200112] = aux_sym_number_token2;
	v->a[200113] = actions(3622);
	v->a[200114] = 1;
	v->a[200115] = anon_sym_DOLLAR_LPAREN;
	v->a[200116] = actions(3632);
	v->a[200117] = 1;
	v->a[200118] = sym__brace_start;
	v->a[200119] = actions(4131);
	small_parse_table_10006(v);
}

void	small_parse_table_10006(t_small_parse_table_array *v)
{
	v->a[200120] = 1;
	v->a[200121] = sym_word;
	v->a[200122] = actions(4135);
	v->a[200123] = 1;
	v->a[200124] = sym_test_operator;
	v->a[200125] = actions(8850);
	v->a[200126] = 1;
	v->a[200127] = anon_sym_DOLLAR_LBRACK;
	v->a[200128] = actions(8854);
	v->a[200129] = 1;
	v->a[200130] = anon_sym_DQUOTE;
	v->a[200131] = actions(8858);
	v->a[200132] = 1;
	v->a[200133] = anon_sym_DOLLAR_LBRACE;
	v->a[200134] = actions(8860);
	v->a[200135] = 1;
	v->a[200136] = anon_sym_BQUOTE;
	v->a[200137] = actions(8862);
	v->a[200138] = 1;
	v->a[200139] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10007(v);
}

void	small_parse_table_10007(t_small_parse_table_array *v)
{
	v->a[200140] = actions(9086);
	v->a[200141] = 1;
	v->a[200142] = sym__special_character;
	v->a[200143] = state(2270);
	v->a[200144] = 1;
	v->a[200145] = aux_sym__literal_repeat1;
	v->a[200146] = actions(8848);
	v->a[200147] = 2;
	v->a[200148] = anon_sym_LPAREN_LPAREN;
	v->a[200149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200150] = actions(8864);
	v->a[200151] = 2;
	v->a[200152] = anon_sym_LT_LPAREN;
	v->a[200153] = anon_sym_GT_LPAREN;
	v->a[200154] = actions(9088);
	v->a[200155] = 2;
	v->a[200156] = sym_raw_string;
	v->a[200157] = sym_ansi_c_string;
	v->a[200158] = state(791);
	v->a[200159] = 2;
	small_parse_table_10008(v);
}

void	small_parse_table_10008(t_small_parse_table_array *v)
{
	v->a[200160] = sym_concatenation;
	v->a[200161] = aux_sym_for_statement_repeat1;
	v->a[200162] = state(1968);
	v->a[200163] = 9;
	v->a[200164] = sym_arithmetic_expansion;
	v->a[200165] = sym_brace_expression;
	v->a[200166] = sym_string;
	v->a[200167] = sym_translated_string;
	v->a[200168] = sym_number;
	v->a[200169] = sym_simple_expansion;
	v->a[200170] = sym_expansion;
	v->a[200171] = sym_command_substitution;
	v->a[200172] = sym_process_substitution;
	v->a[200173] = 20;
	v->a[200174] = actions(71);
	v->a[200175] = 1;
	v->a[200176] = sym_comment;
	v->a[200177] = actions(9114);
	v->a[200178] = 1;
	v->a[200179] = sym_word;
	small_parse_table_10009(v);
}

void	small_parse_table_10009(t_small_parse_table_array *v)
{
	v->a[200180] = actions(9118);
	v->a[200181] = 1;
	v->a[200182] = anon_sym_DOLLAR_LBRACK;
	v->a[200183] = actions(9120);
	v->a[200184] = 1;
	v->a[200185] = anon_sym_DOLLAR;
	v->a[200186] = actions(9122);
	v->a[200187] = 1;
	v->a[200188] = sym__special_character;
	v->a[200189] = actions(9124);
	v->a[200190] = 1;
	v->a[200191] = anon_sym_DQUOTE;
	v->a[200192] = actions(9128);
	v->a[200193] = 1;
	v->a[200194] = aux_sym_number_token1;
	v->a[200195] = actions(9130);
	v->a[200196] = 1;
	v->a[200197] = aux_sym_number_token2;
	v->a[200198] = actions(9132);
	v->a[200199] = 1;
	small_parse_table_10010(v);
}

/* EOF small_parse_table_2001.c */
