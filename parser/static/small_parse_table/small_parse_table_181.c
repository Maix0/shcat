/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_181.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_905(t_small_parse_table_array *v)
{
	v->a[18100] = sym_command_name;
	v->a[18101] = state(584);
	v->a[18102] = 1;
	v->a[18103] = sym_concatenation;
	v->a[18104] = state(620);
	v->a[18105] = 1;
	v->a[18106] = sym_file_redirect;
	v->a[18107] = state(639);
	v->a[18108] = 1;
	v->a[18109] = aux_sym_command_repeat1;
	v->a[18110] = state(1132);
	v->a[18111] = 1;
	v->a[18112] = sym_variable_assignment;
	v->a[18113] = state(1164);
	v->a[18114] = 1;
	v->a[18115] = aux_sym_redirected_statement_repeat2;
	v->a[18116] = actions(11);
	v->a[18117] = 2;
	v->a[18118] = anon_sym_while;
	v->a[18119] = anon_sym_until;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = actions(217);
	v->a[18121] = 3;
	v->a[18122] = sym_raw_string;
	v->a[18123] = sym_number;
	v->a[18124] = sym_word;
	v->a[18125] = state(347);
	v->a[18126] = 5;
	v->a[18127] = sym_arithmetic_expansion;
	v->a[18128] = sym_string;
	v->a[18129] = sym_simple_expansion;
	v->a[18130] = sym_expansion;
	v->a[18131] = sym_command_substitution;
	v->a[18132] = actions(215);
	v->a[18133] = 7;
	v->a[18134] = anon_sym_LT;
	v->a[18135] = anon_sym_GT;
	v->a[18136] = anon_sym_GT_GT;
	v->a[18137] = anon_sym_LT_AMP;
	v->a[18138] = anon_sym_GT_AMP;
	v->a[18139] = anon_sym_GT_PIPE;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = anon_sym_LT_GT;
	v->a[18141] = state(1128);
	v->a[18142] = 7;
	v->a[18143] = sym_for_statement;
	v->a[18144] = sym_while_statement;
	v->a[18145] = sym_if_statement;
	v->a[18146] = sym_compound_statement;
	v->a[18147] = sym_subshell;
	v->a[18148] = sym_command;
	v->a[18149] = sym__variable_assignments;
	v->a[18150] = 6;
	v->a[18151] = actions(3);
	v->a[18152] = 1;
	v->a[18153] = sym_comment;
	v->a[18154] = actions(369);
	v->a[18155] = 1;
	v->a[18156] = sym_variable_name;
	v->a[18157] = actions(367);
	v->a[18158] = 2;
	v->a[18159] = aux_sym__simple_variable_name_token1;
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = aux_sym__multiline_variable_name_token1;
	v->a[18161] = actions(361);
	v->a[18162] = 3;
	v->a[18163] = sym_file_descriptor;
	v->a[18164] = sym__bare_dollar;
	v->a[18165] = ts_builtin_sym_end;
	v->a[18166] = actions(365);
	v->a[18167] = 9;
	v->a[18168] = anon_sym_BANG;
	v->a[18169] = anon_sym_DASH;
	v->a[18170] = anon_sym_STAR;
	v->a[18171] = anon_sym_QMARK;
	v->a[18172] = anon_sym_DOLLAR;
	v->a[18173] = anon_sym_POUND;
	v->a[18174] = anon_sym_AT;
	v->a[18175] = anon_sym_0;
	v->a[18176] = anon_sym__;
	v->a[18177] = actions(363);
	v->a[18178] = 25;
	v->a[18179] = anon_sym_LPAREN;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = anon_sym_PIPE;
	v->a[18181] = anon_sym_SEMI_SEMI;
	v->a[18182] = anon_sym_AMP_AMP;
	v->a[18183] = anon_sym_PIPE_PIPE;
	v->a[18184] = anon_sym_LT;
	v->a[18185] = anon_sym_GT;
	v->a[18186] = anon_sym_GT_GT;
	v->a[18187] = anon_sym_LT_AMP;
	v->a[18188] = anon_sym_GT_AMP;
	v->a[18189] = anon_sym_GT_PIPE;
	v->a[18190] = anon_sym_LT_GT;
	v->a[18191] = anon_sym_LT_LT;
	v->a[18192] = anon_sym_LT_LT_DASH;
	v->a[18193] = aux_sym_heredoc_redirect_token1;
	v->a[18194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18195] = anon_sym_AMP;
	v->a[18196] = anon_sym_DQUOTE;
	v->a[18197] = sym_raw_string;
	v->a[18198] = sym_number;
	v->a[18199] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
