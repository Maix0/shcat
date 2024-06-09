/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_531.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2655(t_small_parse_table_array *v)
{
	v->a[53100] = 1;
	v->a[53101] = sym_comment;
	v->a[53102] = actions(1251);
	v->a[53103] = 3;
	v->a[53104] = sym_file_descriptor;
	v->a[53105] = sym__concat;
	v->a[53106] = sym__bare_dollar;
	v->a[53107] = actions(1253);
	v->a[53108] = 27;
	v->a[53109] = anon_sym_LPAREN;
	v->a[53110] = anon_sym_PIPE;
	v->a[53111] = anon_sym_AMP_AMP;
	v->a[53112] = anon_sym_PIPE_PIPE;
	v->a[53113] = anon_sym_LT;
	v->a[53114] = anon_sym_GT;
	v->a[53115] = anon_sym_GT_GT;
	v->a[53116] = anon_sym_AMP_GT;
	v->a[53117] = anon_sym_AMP_GT_GT;
	v->a[53118] = anon_sym_LT_AMP;
	v->a[53119] = anon_sym_GT_AMP;
	small_parse_table_2656(v);
}

void	small_parse_table_2656(t_small_parse_table_array *v)
{
	v->a[53120] = anon_sym_GT_PIPE;
	v->a[53121] = anon_sym_LT_AMP_DASH;
	v->a[53122] = anon_sym_GT_AMP_DASH;
	v->a[53123] = anon_sym_LT_LT;
	v->a[53124] = anon_sym_LT_LT_DASH;
	v->a[53125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53126] = aux_sym_concatenation_token1;
	v->a[53127] = anon_sym_DOLLAR;
	v->a[53128] = anon_sym_DQUOTE;
	v->a[53129] = sym_raw_string;
	v->a[53130] = aux_sym_number_token1;
	v->a[53131] = aux_sym_number_token2;
	v->a[53132] = anon_sym_DOLLAR_LBRACE;
	v->a[53133] = anon_sym_DOLLAR_LPAREN;
	v->a[53134] = anon_sym_BQUOTE;
	v->a[53135] = sym_word;
	v->a[53136] = 14;
	v->a[53137] = actions(3);
	v->a[53138] = 1;
	v->a[53139] = sym_comment;
	small_parse_table_2657(v);
}

void	small_parse_table_2657(t_small_parse_table_array *v)
{
	v->a[53140] = actions(1951);
	v->a[53141] = 1;
	v->a[53142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53143] = actions(1954);
	v->a[53144] = 1;
	v->a[53145] = anon_sym_DOLLAR;
	v->a[53146] = actions(1957);
	v->a[53147] = 1;
	v->a[53148] = anon_sym_DQUOTE;
	v->a[53149] = actions(1960);
	v->a[53150] = 1;
	v->a[53151] = aux_sym_number_token1;
	v->a[53152] = actions(1963);
	v->a[53153] = 1;
	v->a[53154] = aux_sym_number_token2;
	v->a[53155] = actions(1966);
	v->a[53156] = 1;
	v->a[53157] = anon_sym_DOLLAR_LBRACE;
	v->a[53158] = actions(1969);
	v->a[53159] = 1;
	small_parse_table_2658(v);
}

void	small_parse_table_2658(t_small_parse_table_array *v)
{
	v->a[53160] = anon_sym_DOLLAR_LPAREN;
	v->a[53161] = actions(1972);
	v->a[53162] = 1;
	v->a[53163] = anon_sym_BQUOTE;
	v->a[53164] = actions(662);
	v->a[53165] = 2;
	v->a[53166] = sym_file_descriptor;
	v->a[53167] = sym_variable_name;
	v->a[53168] = actions(1948);
	v->a[53169] = 2;
	v->a[53170] = sym_raw_string;
	v->a[53171] = sym_word;
	v->a[53172] = state(795);
	v->a[53173] = 2;
	v->a[53174] = sym_concatenation;
	v->a[53175] = aux_sym_for_statement_repeat1;
	v->a[53176] = state(985);
	v->a[53177] = 6;
	v->a[53178] = sym_arithmetic_expansion;
	v->a[53179] = sym_string;
	small_parse_table_2659(v);
}

void	small_parse_table_2659(t_small_parse_table_array *v)
{
	v->a[53180] = sym_number;
	v->a[53181] = sym_simple_expansion;
	v->a[53182] = sym_expansion;
	v->a[53183] = sym_command_substitution;
	v->a[53184] = actions(636);
	v->a[53185] = 10;
	v->a[53186] = anon_sym_LT;
	v->a[53187] = anon_sym_GT;
	v->a[53188] = anon_sym_GT_GT;
	v->a[53189] = anon_sym_AMP_GT;
	v->a[53190] = anon_sym_AMP_GT_GT;
	v->a[53191] = anon_sym_LT_AMP;
	v->a[53192] = anon_sym_GT_AMP;
	v->a[53193] = anon_sym_GT_PIPE;
	v->a[53194] = anon_sym_LT_AMP_DASH;
	v->a[53195] = anon_sym_GT_AMP_DASH;
	v->a[53196] = 3;
	v->a[53197] = actions(3);
	v->a[53198] = 1;
	v->a[53199] = sym_comment;
	small_parse_table_2660(v);
}

/* EOF small_parse_table_531.c */
