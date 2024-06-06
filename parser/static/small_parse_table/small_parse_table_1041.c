/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1041.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5205(t_small_parse_table_array *v)
{
	v->a[104100] = aux_sym_number_token2;
	v->a[104101] = actions(5348);
	v->a[104102] = 1;
	v->a[104103] = anon_sym_DOLLAR_LBRACE;
	v->a[104104] = actions(5350);
	v->a[104105] = 1;
	v->a[104106] = anon_sym_DOLLAR_LPAREN;
	v->a[104107] = actions(5352);
	v->a[104108] = 1;
	v->a[104109] = anon_sym_BQUOTE;
	v->a[104110] = actions(5354);
	v->a[104111] = 1;
	v->a[104112] = anon_sym_DOLLAR_BQUOTE;
	v->a[104113] = actions(5360);
	v->a[104114] = 1;
	v->a[104115] = sym__brace_start;
	v->a[104116] = actions(5985);
	v->a[104117] = 1;
	v->a[104118] = sym_word;
	v->a[104119] = state(1237);
	small_parse_table_5206(v);
}

void	small_parse_table_5206(t_small_parse_table_array *v)
{
	v->a[104120] = 1;
	v->a[104121] = aux_sym__literal_repeat1;
	v->a[104122] = actions(5987);
	v->a[104123] = 2;
	v->a[104124] = sym_test_operator;
	v->a[104125] = sym_raw_string;
	v->a[104126] = state(368);
	v->a[104127] = 2;
	v->a[104128] = sym_concatenation;
	v->a[104129] = aux_sym_for_statement_repeat1;
	v->a[104130] = state(768);
	v->a[104131] = 7;
	v->a[104132] = sym_arithmetic_expansion;
	v->a[104133] = sym_brace_expression;
	v->a[104134] = sym_string;
	v->a[104135] = sym_number;
	v->a[104136] = sym_simple_expansion;
	v->a[104137] = sym_expansion;
	v->a[104138] = sym_command_substitution;
	v->a[104139] = 3;
	small_parse_table_5207(v);
}

void	small_parse_table_5207(t_small_parse_table_array *v)
{
	v->a[104140] = actions(3);
	v->a[104141] = 1;
	v->a[104142] = sym_comment;
	v->a[104143] = actions(5977);
	v->a[104144] = 2;
	v->a[104145] = sym_file_descriptor;
	v->a[104146] = aux_sym_heredoc_redirect_token1;
	v->a[104147] = actions(5979);
	v->a[104148] = 22;
	v->a[104149] = anon_sym_esac;
	v->a[104150] = anon_sym_PIPE;
	v->a[104151] = anon_sym_SEMI_SEMI;
	v->a[104152] = anon_sym_SEMI_AMP;
	v->a[104153] = anon_sym_SEMI_SEMI_AMP;
	v->a[104154] = anon_sym_PIPE_AMP;
	v->a[104155] = anon_sym_AMP_AMP;
	v->a[104156] = anon_sym_PIPE_PIPE;
	v->a[104157] = anon_sym_LT;
	v->a[104158] = anon_sym_GT;
	v->a[104159] = anon_sym_GT_GT;
	small_parse_table_5208(v);
}

void	small_parse_table_5208(t_small_parse_table_array *v)
{
	v->a[104160] = anon_sym_AMP_GT;
	v->a[104161] = anon_sym_AMP_GT_GT;
	v->a[104162] = anon_sym_LT_AMP;
	v->a[104163] = anon_sym_GT_AMP;
	v->a[104164] = anon_sym_GT_PIPE;
	v->a[104165] = anon_sym_LT_AMP_DASH;
	v->a[104166] = anon_sym_GT_AMP_DASH;
	v->a[104167] = anon_sym_LT_LT;
	v->a[104168] = anon_sym_LT_LT_DASH;
	v->a[104169] = anon_sym_AMP;
	v->a[104170] = anon_sym_SEMI;
	v->a[104171] = 17;
	v->a[104172] = actions(57);
	v->a[104173] = 1;
	v->a[104174] = sym_comment;
	v->a[104175] = actions(5334);
	v->a[104176] = 1;
	v->a[104177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104178] = actions(5336);
	v->a[104179] = 1;
	small_parse_table_5209(v);
}

void	small_parse_table_5209(t_small_parse_table_array *v)
{
	v->a[104180] = anon_sym_DOLLAR;
	v->a[104181] = actions(5338);
	v->a[104182] = 1;
	v->a[104183] = sym__special_character;
	v->a[104184] = actions(5340);
	v->a[104185] = 1;
	v->a[104186] = anon_sym_DQUOTE;
	v->a[104187] = actions(5344);
	v->a[104188] = 1;
	v->a[104189] = aux_sym_number_token1;
	v->a[104190] = actions(5346);
	v->a[104191] = 1;
	v->a[104192] = aux_sym_number_token2;
	v->a[104193] = actions(5348);
	v->a[104194] = 1;
	v->a[104195] = anon_sym_DOLLAR_LBRACE;
	v->a[104196] = actions(5350);
	v->a[104197] = 1;
	v->a[104198] = anon_sym_DOLLAR_LPAREN;
	v->a[104199] = actions(5352);
	small_parse_table_5210(v);
}

/* EOF small_parse_table_1041.c */
