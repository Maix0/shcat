/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1121.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5605(t_small_parse_table_array *v)
{
	v->a[112100] = actions(6432);
	v->a[112101] = 1;
	v->a[112102] = sym_word;
	v->a[112103] = actions(6434);
	v->a[112104] = 1;
	v->a[112105] = anon_sym_DOLLAR;
	v->a[112106] = actions(6436);
	v->a[112107] = 1;
	v->a[112108] = sym__special_character;
	v->a[112109] = actions(6440);
	v->a[112110] = 1;
	v->a[112111] = sym__comment_word;
	v->a[112112] = actions(6438);
	v->a[112113] = 3;
	v->a[112114] = sym_test_operator;
	v->a[112115] = sym__bare_dollar;
	v->a[112116] = sym_raw_string;
	v->a[112117] = state(1201);
	v->a[112118] = 7;
	v->a[112119] = sym_arithmetic_expansion;
	small_parse_table_5606(v);
}

void	small_parse_table_5606(t_small_parse_table_array *v)
{
	v->a[112120] = sym_brace_expression;
	v->a[112121] = sym_string;
	v->a[112122] = sym_number;
	v->a[112123] = sym_simple_expansion;
	v->a[112124] = sym_expansion;
	v->a[112125] = sym_command_substitution;
	v->a[112126] = 3;
	v->a[112127] = actions(3);
	v->a[112128] = 1;
	v->a[112129] = sym_comment;
	v->a[112130] = actions(1182);
	v->a[112131] = 2;
	v->a[112132] = sym_file_descriptor;
	v->a[112133] = aux_sym_heredoc_redirect_token1;
	v->a[112134] = actions(1180);
	v->a[112135] = 21;
	v->a[112136] = anon_sym_PIPE;
	v->a[112137] = anon_sym_SEMI_SEMI;
	v->a[112138] = anon_sym_SEMI_AMP;
	v->a[112139] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_5607(v);
}

void	small_parse_table_5607(t_small_parse_table_array *v)
{
	v->a[112140] = anon_sym_PIPE_AMP;
	v->a[112141] = anon_sym_AMP_AMP;
	v->a[112142] = anon_sym_PIPE_PIPE;
	v->a[112143] = anon_sym_LT;
	v->a[112144] = anon_sym_GT;
	v->a[112145] = anon_sym_GT_GT;
	v->a[112146] = anon_sym_AMP_GT;
	v->a[112147] = anon_sym_AMP_GT_GT;
	v->a[112148] = anon_sym_LT_AMP;
	v->a[112149] = anon_sym_GT_AMP;
	v->a[112150] = anon_sym_GT_PIPE;
	v->a[112151] = anon_sym_LT_AMP_DASH;
	v->a[112152] = anon_sym_GT_AMP_DASH;
	v->a[112153] = anon_sym_LT_LT;
	v->a[112154] = anon_sym_LT_LT_DASH;
	v->a[112155] = anon_sym_AMP;
	v->a[112156] = anon_sym_SEMI;
	v->a[112157] = 16;
	v->a[112158] = actions(3);
	v->a[112159] = 1;
	small_parse_table_5608(v);
}

void	small_parse_table_5608(t_small_parse_table_array *v)
{
	v->a[112160] = sym_comment;
	v->a[112161] = actions(5722);
	v->a[112162] = 1;
	v->a[112163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112164] = actions(5728);
	v->a[112165] = 1;
	v->a[112166] = anon_sym_DQUOTE;
	v->a[112167] = actions(5732);
	v->a[112168] = 1;
	v->a[112169] = aux_sym_number_token1;
	v->a[112170] = actions(5734);
	v->a[112171] = 1;
	v->a[112172] = aux_sym_number_token2;
	v->a[112173] = actions(5736);
	v->a[112174] = 1;
	v->a[112175] = anon_sym_DOLLAR_LBRACE;
	v->a[112176] = actions(5738);
	v->a[112177] = 1;
	v->a[112178] = anon_sym_DOLLAR_LPAREN;
	v->a[112179] = actions(5740);
	small_parse_table_5609(v);
}

void	small_parse_table_5609(t_small_parse_table_array *v)
{
	v->a[112180] = 1;
	v->a[112181] = anon_sym_BQUOTE;
	v->a[112182] = actions(5742);
	v->a[112183] = 1;
	v->a[112184] = anon_sym_DOLLAR_BQUOTE;
	v->a[112185] = actions(5748);
	v->a[112186] = 1;
	v->a[112187] = sym__brace_start;
	v->a[112188] = actions(6422);
	v->a[112189] = 1;
	v->a[112190] = sym_word;
	v->a[112191] = actions(6426);
	v->a[112192] = 1;
	v->a[112193] = sym__special_character;
	v->a[112194] = actions(6430);
	v->a[112195] = 1;
	v->a[112196] = sym__comment_word;
	v->a[112197] = actions(6442);
	v->a[112198] = 1;
	v->a[112199] = anon_sym_DOLLAR;
	small_parse_table_5610(v);
}

/* EOF small_parse_table_1121.c */
