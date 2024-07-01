/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = anon_sym_LT_GT;
	v->a[59101] = 5;
	v->a[59102] = actions(3);
	v->a[59103] = 1;
	v->a[59104] = sym_comment;
	v->a[59105] = actions(1957);
	v->a[59106] = 1;
	v->a[59107] = sym_variable_name;
	v->a[59108] = actions(1914);
	v->a[59109] = 2;
	v->a[59110] = sym_file_descriptor;
	v->a[59111] = aux_sym_heredoc_redirect_token1;
	v->a[59112] = state(1061);
	v->a[59113] = 2;
	v->a[59114] = sym_variable_assignment;
	v->a[59115] = aux_sym__variable_assignments_repeat1;
	v->a[59116] = actions(1916);
	v->a[59117] = 16;
	v->a[59118] = anon_sym_PIPE;
	v->a[59119] = anon_sym_SEMI_SEMI;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = anon_sym_AMP_AMP;
	v->a[59121] = anon_sym_PIPE_PIPE;
	v->a[59122] = anon_sym_LT;
	v->a[59123] = anon_sym_GT;
	v->a[59124] = anon_sym_GT_GT;
	v->a[59125] = anon_sym_LT_AMP;
	v->a[59126] = anon_sym_GT_AMP;
	v->a[59127] = anon_sym_GT_PIPE;
	v->a[59128] = anon_sym_LT_GT;
	v->a[59129] = anon_sym_LT_LT;
	v->a[59130] = anon_sym_LT_LT_DASH;
	v->a[59131] = anon_sym_AMP;
	v->a[59132] = anon_sym_BQUOTE;
	v->a[59133] = anon_sym_SEMI;
	v->a[59134] = 15;
	v->a[59135] = actions(3);
	v->a[59136] = 1;
	v->a[59137] = sym_comment;
	v->a[59138] = actions(1634);
	v->a[59139] = 1;
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = anon_sym_LPAREN;
	v->a[59141] = actions(1638);
	v->a[59142] = 1;
	v->a[59143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59144] = actions(1640);
	v->a[59145] = 1;
	v->a[59146] = anon_sym_DOLLAR;
	v->a[59147] = actions(1642);
	v->a[59148] = 1;
	v->a[59149] = anon_sym_DQUOTE;
	v->a[59150] = actions(1644);
	v->a[59151] = 1;
	v->a[59152] = anon_sym_DOLLAR_LBRACE;
	v->a[59153] = actions(1646);
	v->a[59154] = 1;
	v->a[59155] = anon_sym_DOLLAR_LPAREN;
	v->a[59156] = actions(1648);
	v->a[59157] = 1;
	v->a[59158] = anon_sym_BQUOTE;
	v->a[59159] = actions(1650);
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = 1;
	v->a[59161] = sym_extglob_pattern;
	v->a[59162] = state(1139);
	v->a[59163] = 1;
	v->a[59164] = aux_sym_case_statement_repeat1;
	v->a[59165] = state(1713);
	v->a[59166] = 1;
	v->a[59167] = sym_case_item;
	v->a[59168] = state(1947);
	v->a[59169] = 1;
	v->a[59170] = sym__case_item_last;
	v->a[59171] = state(1871);
	v->a[59172] = 2;
	v->a[59173] = sym_concatenation;
	v->a[59174] = sym__extglob_blob;
	v->a[59175] = actions(1630);
	v->a[59176] = 3;
	v->a[59177] = sym_raw_string;
	v->a[59178] = sym_number;
	v->a[59179] = sym_word;
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = state(1804);
	v->a[59181] = 5;
	v->a[59182] = sym_arithmetic_expansion;
	v->a[59183] = sym_string;
	v->a[59184] = sym_simple_expansion;
	v->a[59185] = sym_expansion;
	v->a[59186] = sym_command_substitution;
	v->a[59187] = 15;
	v->a[59188] = actions(3);
	v->a[59189] = 1;
	v->a[59190] = sym_comment;
	v->a[59191] = actions(1634);
	v->a[59192] = 1;
	v->a[59193] = anon_sym_LPAREN;
	v->a[59194] = actions(1638);
	v->a[59195] = 1;
	v->a[59196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59197] = actions(1640);
	v->a[59198] = 1;
	v->a[59199] = anon_sym_DOLLAR;
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
