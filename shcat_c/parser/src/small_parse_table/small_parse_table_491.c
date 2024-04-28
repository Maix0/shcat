/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_491.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2455(t_small_parse_table_array *v)
{
	v->a[49100] = actions(5377);
	v->a[49101] = 3;
	v->a[49102] = anon_sym_SEMI;
	v->a[49103] = anon_sym_AMP;
	v->a[49104] = anon_sym_SEMI_SEMI;
	v->a[49105] = state(4697);
	v->a[49106] = 3;
	v->a[49107] = sym_file_redirect;
	v->a[49108] = sym_heredoc_redirect;
	v->a[49109] = aux_sym_redirected_statement_repeat1;
	v->a[49110] = actions(4247);
	v->a[49111] = 27;
	v->a[49112] = anon_sym_LPAREN_LPAREN;
	v->a[49113] = anon_sym_LT;
	v->a[49114] = anon_sym_GT;
	v->a[49115] = anon_sym_GT_GT;
	v->a[49116] = anon_sym_AMP_GT;
	v->a[49117] = anon_sym_AMP_GT_GT;
	v->a[49118] = anon_sym_LT_AMP;
	v->a[49119] = anon_sym_GT_AMP;
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = anon_sym_GT_PIPE;
	v->a[49121] = anon_sym_LT_AMP_DASH;
	v->a[49122] = anon_sym_GT_AMP_DASH;
	v->a[49123] = anon_sym_LT_LT_LT;
	v->a[49124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49125] = anon_sym_DOLLAR_LBRACK;
	v->a[49126] = anon_sym_DOLLAR;
	v->a[49127] = sym__special_character;
	v->a[49128] = anon_sym_DQUOTE;
	v->a[49129] = sym_raw_string;
	v->a[49130] = sym_ansi_c_string;
	v->a[49131] = aux_sym_number_token1;
	v->a[49132] = aux_sym_number_token2;
	v->a[49133] = anon_sym_DOLLAR_LBRACE;
	v->a[49134] = anon_sym_DOLLAR_LPAREN;
	v->a[49135] = anon_sym_DOLLAR_BQUOTE;
	v->a[49136] = anon_sym_LT_LPAREN;
	v->a[49137] = anon_sym_GT_LPAREN;
	v->a[49138] = sym_word;
	v->a[49139] = 12;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = actions(3);
	v->a[49141] = 1;
	v->a[49142] = sym_comment;
	v->a[49143] = actions(5103);
	v->a[49144] = 1;
	v->a[49145] = sym_variable_name;
	v->a[49146] = actions(5383);
	v->a[49147] = 1;
	v->a[49148] = aux_sym_heredoc_redirect_token1;
	v->a[49149] = state(6727);
	v->a[49150] = 1;
	v->a[49151] = sym_subscript;
	v->a[49152] = actions(4253);
	v->a[49153] = 2;
	v->a[49154] = anon_sym_PIPE;
	v->a[49155] = anon_sym_PIPE_AMP;
	v->a[49156] = actions(4692);
	v->a[49157] = 2;
	v->a[49158] = anon_sym_LT_LT;
	v->a[49159] = anon_sym_LT_LT_DASH;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = actions(5099);
	v->a[49161] = 2;
	v->a[49162] = anon_sym_PIPE_PIPE;
	v->a[49163] = anon_sym_AMP_AMP;
	v->a[49164] = state(4787);
	v->a[49165] = 2;
	v->a[49166] = sym_variable_assignment;
	v->a[49167] = aux_sym_variable_assignments_repeat1;
	v->a[49168] = actions(4261);
	v->a[49169] = 3;
	v->a[49170] = sym_file_descriptor;
	v->a[49171] = sym_test_operator;
	v->a[49172] = sym__brace_start;
	v->a[49173] = actions(5381);
	v->a[49174] = 3;
	v->a[49175] = anon_sym_SEMI;
	v->a[49176] = anon_sym_AMP;
	v->a[49177] = anon_sym_SEMI_SEMI;
	v->a[49178] = state(4986);
	v->a[49179] = 3;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = sym_file_redirect;
	v->a[49181] = sym_heredoc_redirect;
	v->a[49182] = aux_sym_redirected_statement_repeat1;
	v->a[49183] = actions(4247);
	v->a[49184] = 28;
	v->a[49185] = anon_sym_LPAREN_LPAREN;
	v->a[49186] = anon_sym_LT;
	v->a[49187] = anon_sym_GT;
	v->a[49188] = anon_sym_GT_GT;
	v->a[49189] = anon_sym_AMP_GT;
	v->a[49190] = anon_sym_AMP_GT_GT;
	v->a[49191] = anon_sym_LT_AMP;
	v->a[49192] = anon_sym_GT_AMP;
	v->a[49193] = anon_sym_GT_PIPE;
	v->a[49194] = anon_sym_LT_AMP_DASH;
	v->a[49195] = anon_sym_GT_AMP_DASH;
	v->a[49196] = anon_sym_LT_LT_LT;
	v->a[49197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49198] = anon_sym_DOLLAR_LBRACK;
	v->a[49199] = anon_sym_DOLLAR;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
