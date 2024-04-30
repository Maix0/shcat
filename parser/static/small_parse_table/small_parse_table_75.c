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
	v->a[7500] = sym_string;
	v->a[7501] = actions(2490);
	v->a[7502] = 2;
	v->a[7503] = aux_sym__simple_variable_name_token1;
	v->a[7504] = aux_sym__multiline_variable_name_token1;
	v->a[7505] = actions(1241);
	v->a[7506] = 3;
	v->a[7507] = sym_file_descriptor;
	v->a[7508] = sym_test_operator;
	v->a[7509] = sym__brace_start;
	v->a[7510] = actions(2488);
	v->a[7511] = 9;
	v->a[7512] = anon_sym_DASH;
	v->a[7513] = anon_sym_STAR;
	v->a[7514] = anon_sym_BANG;
	v->a[7515] = anon_sym_QMARK;
	v->a[7516] = anon_sym_DOLLAR;
	v->a[7517] = anon_sym_POUND;
	v->a[7518] = anon_sym_AT2;
	v->a[7519] = anon_sym_0;
	small_parse_table_376(v);
}

void	small_parse_table_376(t_small_parse_table_array *v)
{
	v->a[7520] = anon_sym__;
	v->a[7521] = actions(1239);
	v->a[7522] = 39;
	v->a[7523] = anon_sym_LPAREN_LPAREN;
	v->a[7524] = anon_sym_SEMI;
	v->a[7525] = anon_sym_PIPE_PIPE;
	v->a[7526] = anon_sym_AMP_AMP;
	v->a[7527] = anon_sym_PIPE;
	v->a[7528] = anon_sym_AMP;
	v->a[7529] = anon_sym_LT;
	v->a[7530] = anon_sym_GT;
	v->a[7531] = anon_sym_LT_LT;
	v->a[7532] = anon_sym_GT_GT;
	v->a[7533] = anon_sym_esac;
	v->a[7534] = anon_sym_SEMI_SEMI;
	v->a[7535] = anon_sym_SEMI_AMP;
	v->a[7536] = anon_sym_SEMI_SEMI_AMP;
	v->a[7537] = anon_sym_PIPE_AMP;
	v->a[7538] = anon_sym_AMP_GT;
	v->a[7539] = anon_sym_AMP_GT_GT;
	small_parse_table_377(v);
}

void	small_parse_table_377(t_small_parse_table_array *v)
{
	v->a[7540] = anon_sym_LT_AMP;
	v->a[7541] = anon_sym_GT_AMP;
	v->a[7542] = anon_sym_GT_PIPE;
	v->a[7543] = anon_sym_LT_AMP_DASH;
	v->a[7544] = anon_sym_GT_AMP_DASH;
	v->a[7545] = anon_sym_LT_LT_DASH;
	v->a[7546] = aux_sym_heredoc_redirect_token1;
	v->a[7547] = anon_sym_LT_LT_LT;
	v->a[7548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7549] = anon_sym_DOLLAR_LBRACK;
	v->a[7550] = sym__special_character;
	v->a[7551] = sym_raw_string;
	v->a[7552] = sym_ansi_c_string;
	v->a[7553] = aux_sym_number_token1;
	v->a[7554] = aux_sym_number_token2;
	v->a[7555] = anon_sym_DOLLAR_LBRACE;
	v->a[7556] = anon_sym_DOLLAR_LPAREN;
	v->a[7557] = anon_sym_BQUOTE;
	v->a[7558] = anon_sym_DOLLAR_BQUOTE;
	v->a[7559] = anon_sym_LT_LPAREN;
	small_parse_table_378(v);
}

void	small_parse_table_378(t_small_parse_table_array *v)
{
	v->a[7560] = anon_sym_GT_LPAREN;
	v->a[7561] = sym_word;
	v->a[7562] = 6;
	v->a[7563] = actions(3);
	v->a[7564] = 1;
	v->a[7565] = sym_comment;
	v->a[7566] = state(1429);
	v->a[7567] = 1;
	v->a[7568] = aux_sym__literal_repeat1;
	v->a[7569] = state(1534);
	v->a[7570] = 1;
	v->a[7571] = sym_concatenation;
	v->a[7572] = actions(2496);
	v->a[7573] = 5;
	v->a[7574] = sym_file_descriptor;
	v->a[7575] = sym_variable_name;
	v->a[7576] = sym_test_operator;
	v->a[7577] = sym__brace_start;
	v->a[7578] = aux_sym_heredoc_redirect_token1;
	v->a[7579] = state(1100);
	small_parse_table_379(v);
}

void	small_parse_table_379(t_small_parse_table_array *v)
{
	v->a[7580] = 9;
	v->a[7581] = sym_arithmetic_expansion;
	v->a[7582] = sym_brace_expression;
	v->a[7583] = sym_string;
	v->a[7584] = sym_translated_string;
	v->a[7585] = sym_number;
	v->a[7586] = sym_simple_expansion;
	v->a[7587] = sym_expansion;
	v->a[7588] = sym_command_substitution;
	v->a[7589] = sym_process_substitution;
	v->a[7590] = actions(2494);
	v->a[7591] = 40;
	v->a[7592] = anon_sym_LPAREN_LPAREN;
	v->a[7593] = anon_sym_SEMI;
	v->a[7594] = anon_sym_PIPE_PIPE;
	v->a[7595] = anon_sym_AMP_AMP;
	v->a[7596] = anon_sym_PIPE;
	v->a[7597] = anon_sym_AMP;
	v->a[7598] = anon_sym_LT;
	v->a[7599] = anon_sym_GT;
	small_parse_table_380(v);
}

/* EOF small_parse_table_75.c */