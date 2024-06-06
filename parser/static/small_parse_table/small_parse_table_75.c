/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_75.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_375(t_small_parse_table_array *v)
{
	v->a[7500] = anon_sym_DOLLAR_LPAREN;
	v->a[7501] = anon_sym_BQUOTE;
	v->a[7502] = anon_sym_DOLLAR_BQUOTE;
	v->a[7503] = sym_word;
	v->a[7504] = anon_sym_SEMI;
	v->a[7505] = 6;
	v->a[7506] = actions(3);
	v->a[7507] = 1;
	v->a[7508] = sym_comment;
	v->a[7509] = actions(1806);
	v->a[7510] = 1;
	v->a[7511] = sym_variable_name;
	v->a[7512] = actions(1804);
	v->a[7513] = 2;
	v->a[7514] = aux_sym__simple_variable_name_token1;
	v->a[7515] = aux_sym__multiline_variable_name_token1;
	v->a[7516] = actions(828);
	v->a[7517] = 3;
	v->a[7518] = sym_file_descriptor;
	v->a[7519] = sym_test_operator;
	small_parse_table_376(v);
}

void	small_parse_table_376(t_small_parse_table_array *v)
{
	v->a[7520] = sym__brace_start;
	v->a[7521] = actions(1802);
	v->a[7522] = 9;
	v->a[7523] = anon_sym_BANG;
	v->a[7524] = anon_sym_DASH;
	v->a[7525] = anon_sym_STAR;
	v->a[7526] = anon_sym_QMARK;
	v->a[7527] = anon_sym_DOLLAR;
	v->a[7528] = anon_sym_POUND;
	v->a[7529] = anon_sym_AT;
	v->a[7530] = anon_sym_0;
	v->a[7531] = anon_sym__;
	v->a[7532] = actions(826);
	v->a[7533] = 32;
	v->a[7534] = anon_sym_PIPE;
	v->a[7535] = anon_sym_RPAREN;
	v->a[7536] = anon_sym_SEMI_SEMI;
	v->a[7537] = anon_sym_PIPE_AMP;
	v->a[7538] = anon_sym_AMP_AMP;
	v->a[7539] = anon_sym_PIPE_PIPE;
	small_parse_table_377(v);
}

void	small_parse_table_377(t_small_parse_table_array *v)
{
	v->a[7540] = anon_sym_LT;
	v->a[7541] = anon_sym_GT;
	v->a[7542] = anon_sym_GT_GT;
	v->a[7543] = anon_sym_AMP_GT;
	v->a[7544] = anon_sym_AMP_GT_GT;
	v->a[7545] = anon_sym_LT_AMP;
	v->a[7546] = anon_sym_GT_AMP;
	v->a[7547] = anon_sym_GT_PIPE;
	v->a[7548] = anon_sym_LT_AMP_DASH;
	v->a[7549] = anon_sym_GT_AMP_DASH;
	v->a[7550] = anon_sym_LT_LT;
	v->a[7551] = anon_sym_LT_LT_DASH;
	v->a[7552] = aux_sym_heredoc_redirect_token1;
	v->a[7553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7554] = anon_sym_AMP;
	v->a[7555] = sym__special_character;
	v->a[7556] = anon_sym_DQUOTE;
	v->a[7557] = sym_raw_string;
	v->a[7558] = aux_sym_number_token1;
	v->a[7559] = aux_sym_number_token2;
	small_parse_table_378(v);
}

void	small_parse_table_378(t_small_parse_table_array *v)
{
	v->a[7560] = anon_sym_DOLLAR_LBRACE;
	v->a[7561] = anon_sym_DOLLAR_LPAREN;
	v->a[7562] = anon_sym_BQUOTE;
	v->a[7563] = anon_sym_DOLLAR_BQUOTE;
	v->a[7564] = sym_word;
	v->a[7565] = anon_sym_SEMI;
	v->a[7566] = 6;
	v->a[7567] = actions(3);
	v->a[7568] = 1;
	v->a[7569] = sym_comment;
	v->a[7570] = state(1091);
	v->a[7571] = 1;
	v->a[7572] = aux_sym__literal_repeat1;
	v->a[7573] = state(1221);
	v->a[7574] = 1;
	v->a[7575] = sym_concatenation;
	v->a[7576] = actions(1530);
	v->a[7577] = 5;
	v->a[7578] = sym_file_descriptor;
	v->a[7579] = sym_variable_name;
	small_parse_table_379(v);
}

void	small_parse_table_379(t_small_parse_table_array *v)
{
	v->a[7580] = sym_test_operator;
	v->a[7581] = sym__brace_start;
	v->a[7582] = aux_sym_heredoc_redirect_token1;
	v->a[7583] = state(644);
	v->a[7584] = 7;
	v->a[7585] = sym_arithmetic_expansion;
	v->a[7586] = sym_brace_expression;
	v->a[7587] = sym_string;
	v->a[7588] = sym_number;
	v->a[7589] = sym_simple_expansion;
	v->a[7590] = sym_expansion;
	v->a[7591] = sym_command_substitution;
	v->a[7592] = actions(1528);
	v->a[7593] = 33;
	v->a[7594] = anon_sym_PIPE;
	v->a[7595] = anon_sym_SEMI_SEMI;
	v->a[7596] = anon_sym_SEMI_AMP;
	v->a[7597] = anon_sym_SEMI_SEMI_AMP;
	v->a[7598] = anon_sym_PIPE_AMP;
	v->a[7599] = anon_sym_AMP_AMP;
	small_parse_table_380(v);
}

/* EOF small_parse_table_75.c */
