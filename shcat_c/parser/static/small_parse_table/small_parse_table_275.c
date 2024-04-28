/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_275.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1375(t_small_parse_table_array *v)
{
	v->a[27500] = actions(4090);
	v->a[27501] = 1;
	v->a[27502] = anon_sym_DOLLAR_LBRACE;
	v->a[27503] = actions(4092);
	v->a[27504] = 1;
	v->a[27505] = anon_sym_DOLLAR_LPAREN;
	v->a[27506] = actions(4094);
	v->a[27507] = 1;
	v->a[27508] = anon_sym_BQUOTE;
	v->a[27509] = actions(4096);
	v->a[27510] = 1;
	v->a[27511] = anon_sym_DOLLAR_BQUOTE;
	v->a[27512] = actions(4102);
	v->a[27513] = 1;
	v->a[27514] = sym__brace_start;
	v->a[27515] = actions(4352);
	v->a[27516] = 1;
	v->a[27517] = sym__special_character;
	v->a[27518] = actions(4358);
	v->a[27519] = 1;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = sym_test_operator;
	v->a[27521] = state(4546);
	v->a[27522] = 1;
	v->a[27523] = aux_sym__literal_repeat1;
	v->a[27524] = state(4907);
	v->a[27525] = 1;
	v->a[27526] = sym_concatenation;
	v->a[27527] = actions(2500);
	v->a[27528] = 2;
	v->a[27529] = sym_file_descriptor;
	v->a[27530] = aux_sym_heredoc_redirect_token1;
	v->a[27531] = actions(4076);
	v->a[27532] = 2;
	v->a[27533] = anon_sym_LPAREN_LPAREN;
	v->a[27534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27535] = actions(4098);
	v->a[27536] = 2;
	v->a[27537] = anon_sym_LT_LPAREN;
	v->a[27538] = anon_sym_GT_LPAREN;
	v->a[27539] = actions(4356);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 3;
	v->a[27541] = sym_raw_string;
	v->a[27542] = sym_ansi_c_string;
	v->a[27543] = sym_word;
	v->a[27544] = state(4901);
	v->a[27545] = 9;
	v->a[27546] = sym_arithmetic_expansion;
	v->a[27547] = sym_brace_expression;
	v->a[27548] = sym_string;
	v->a[27549] = sym_translated_string;
	v->a[27550] = sym_number;
	v->a[27551] = sym_simple_expansion;
	v->a[27552] = sym_expansion;
	v->a[27553] = sym_command_substitution;
	v->a[27554] = sym_process_substitution;
	v->a[27555] = actions(2498);
	v->a[27556] = 19;
	v->a[27557] = anon_sym_SEMI;
	v->a[27558] = anon_sym_PIPE_PIPE;
	v->a[27559] = anon_sym_AMP_AMP;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = anon_sym_PIPE;
	v->a[27561] = anon_sym_AMP;
	v->a[27562] = anon_sym_LT;
	v->a[27563] = anon_sym_GT;
	v->a[27564] = anon_sym_LT_LT;
	v->a[27565] = anon_sym_GT_GT;
	v->a[27566] = anon_sym_SEMI_SEMI;
	v->a[27567] = anon_sym_PIPE_AMP;
	v->a[27568] = anon_sym_AMP_GT;
	v->a[27569] = anon_sym_AMP_GT_GT;
	v->a[27570] = anon_sym_LT_AMP;
	v->a[27571] = anon_sym_GT_AMP;
	v->a[27572] = anon_sym_GT_PIPE;
	v->a[27573] = anon_sym_LT_AMP_DASH;
	v->a[27574] = anon_sym_GT_AMP_DASH;
	v->a[27575] = anon_sym_LT_LT_DASH;
	v->a[27576] = 3;
	v->a[27577] = actions(71);
	v->a[27578] = 1;
	v->a[27579] = sym_comment;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = actions(2717);
	v->a[27581] = 23;
	v->a[27582] = sym_file_descriptor;
	v->a[27583] = sym_variable_name;
	v->a[27584] = sym_test_operator;
	v->a[27585] = sym__brace_start;
	v->a[27586] = anon_sym_LPAREN_LPAREN;
	v->a[27587] = anon_sym_GT_GT;
	v->a[27588] = anon_sym_LBRACE;
	v->a[27589] = anon_sym_LBRACK_LBRACK;
	v->a[27590] = anon_sym_AMP_GT_GT;
	v->a[27591] = anon_sym_GT_PIPE;
	v->a[27592] = anon_sym_LT_AMP_DASH;
	v->a[27593] = anon_sym_GT_AMP_DASH;
	v->a[27594] = anon_sym_LT_LT_LT;
	v->a[27595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27596] = anon_sym_DOLLAR_LBRACK;
	v->a[27597] = anon_sym_DQUOTE;
	v->a[27598] = sym_raw_string;
	v->a[27599] = sym_ansi_c_string;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
