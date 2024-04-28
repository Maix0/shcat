/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1065.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5325(t_small_parse_table_array *v)
{
	v->a[106500] = sym_concatenation;
	v->a[106501] = state(2461);
	v->a[106502] = 9;
	v->a[106503] = sym_arithmetic_expansion;
	v->a[106504] = sym_brace_expression;
	v->a[106505] = sym_string;
	v->a[106506] = sym_translated_string;
	v->a[106507] = sym_number;
	v->a[106508] = sym_simple_expansion;
	v->a[106509] = sym_expansion;
	v->a[106510] = sym_command_substitution;
	v->a[106511] = sym_process_substitution;
	v->a[106512] = 3;
	v->a[106513] = actions(3);
	v->a[106514] = 1;
	v->a[106515] = sym_comment;
	v->a[106516] = actions(1358);
	v->a[106517] = 6;
	v->a[106518] = sym_file_descriptor;
	v->a[106519] = sym__concat;
	small_parse_table_5326(v);
}

void	small_parse_table_5326(t_small_parse_table_array *v)
{
	v->a[106520] = sym_test_operator;
	v->a[106521] = sym__brace_start;
	v->a[106522] = ts_builtin_sym_end;
	v->a[106523] = aux_sym_heredoc_redirect_token1;
	v->a[106524] = actions(1356);
	v->a[106525] = 37;
	v->a[106526] = anon_sym_LPAREN_LPAREN;
	v->a[106527] = anon_sym_SEMI;
	v->a[106528] = anon_sym_PIPE_PIPE;
	v->a[106529] = anon_sym_AMP_AMP;
	v->a[106530] = anon_sym_PIPE;
	v->a[106531] = anon_sym_AMP;
	v->a[106532] = anon_sym_LT;
	v->a[106533] = anon_sym_GT;
	v->a[106534] = anon_sym_LT_LT;
	v->a[106535] = anon_sym_GT_GT;
	v->a[106536] = anon_sym_SEMI_SEMI;
	v->a[106537] = anon_sym_PIPE_AMP;
	v->a[106538] = anon_sym_AMP_GT;
	v->a[106539] = anon_sym_AMP_GT_GT;
	small_parse_table_5327(v);
}

void	small_parse_table_5327(t_small_parse_table_array *v)
{
	v->a[106540] = anon_sym_LT_AMP;
	v->a[106541] = anon_sym_GT_AMP;
	v->a[106542] = anon_sym_GT_PIPE;
	v->a[106543] = anon_sym_LT_AMP_DASH;
	v->a[106544] = anon_sym_GT_AMP_DASH;
	v->a[106545] = anon_sym_LT_LT_DASH;
	v->a[106546] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106547] = anon_sym_DOLLAR_LBRACK;
	v->a[106548] = aux_sym_concatenation_token1;
	v->a[106549] = anon_sym_DOLLAR;
	v->a[106550] = sym__special_character;
	v->a[106551] = anon_sym_DQUOTE;
	v->a[106552] = sym_raw_string;
	v->a[106553] = sym_ansi_c_string;
	v->a[106554] = aux_sym_number_token1;
	v->a[106555] = aux_sym_number_token2;
	v->a[106556] = anon_sym_DOLLAR_LBRACE;
	v->a[106557] = anon_sym_DOLLAR_LPAREN;
	v->a[106558] = anon_sym_BQUOTE;
	v->a[106559] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5328(v);
}

void	small_parse_table_5328(t_small_parse_table_array *v)
{
	v->a[106560] = anon_sym_LT_LPAREN;
	v->a[106561] = anon_sym_GT_LPAREN;
	v->a[106562] = sym_word;
	v->a[106563] = 26;
	v->a[106564] = actions(71);
	v->a[106565] = 1;
	v->a[106566] = sym_comment;
	v->a[106567] = actions(187);
	v->a[106568] = 1;
	v->a[106569] = anon_sym_TILDE;
	v->a[106570] = actions(350);
	v->a[106571] = 1;
	v->a[106572] = sym_word;
	v->a[106573] = actions(359);
	v->a[106574] = 1;
	v->a[106575] = anon_sym_LPAREN;
	v->a[106576] = actions(361);
	v->a[106577] = 1;
	v->a[106578] = anon_sym_BANG;
	v->a[106579] = actions(363);
	small_parse_table_5329(v);
}

void	small_parse_table_5329(t_small_parse_table_array *v)
{
	v->a[106580] = 1;
	v->a[106581] = anon_sym_DOLLAR_LBRACK;
	v->a[106582] = actions(367);
	v->a[106583] = 1;
	v->a[106584] = anon_sym_DOLLAR;
	v->a[106585] = actions(371);
	v->a[106586] = 1;
	v->a[106587] = anon_sym_DQUOTE;
	v->a[106588] = actions(375);
	v->a[106589] = 1;
	v->a[106590] = aux_sym_number_token1;
	v->a[106591] = actions(377);
	v->a[106592] = 1;
	v->a[106593] = aux_sym_number_token2;
	v->a[106594] = actions(379);
	v->a[106595] = 1;
	v->a[106596] = anon_sym_DOLLAR_LBRACE;
	v->a[106597] = actions(381);
	v->a[106598] = 1;
	v->a[106599] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5330(v);
}

/* EOF small_parse_table_1065.c */
