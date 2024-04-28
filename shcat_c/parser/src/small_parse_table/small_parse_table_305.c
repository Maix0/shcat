/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_305.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1525(t_small_parse_table_array *v)
{
	v->a[30500] = anon_sym_AMP;
	v->a[30501] = anon_sym_EQ_EQ;
	v->a[30502] = anon_sym_LT;
	v->a[30503] = anon_sym_GT;
	v->a[30504] = anon_sym_LT_LT;
	v->a[30505] = anon_sym_GT_GT;
	v->a[30506] = anon_sym_LPAREN;
	v->a[30507] = anon_sym_esac;
	v->a[30508] = anon_sym_SEMI_SEMI;
	v->a[30509] = anon_sym_SEMI_AMP;
	v->a[30510] = anon_sym_SEMI_SEMI_AMP;
	v->a[30511] = anon_sym_PIPE_AMP;
	v->a[30512] = anon_sym_EQ_TILDE;
	v->a[30513] = anon_sym_AMP_GT;
	v->a[30514] = anon_sym_AMP_GT_GT;
	v->a[30515] = anon_sym_LT_AMP;
	v->a[30516] = anon_sym_GT_AMP;
	v->a[30517] = anon_sym_GT_PIPE;
	v->a[30518] = anon_sym_LT_AMP_DASH;
	v->a[30519] = anon_sym_GT_AMP_DASH;
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = anon_sym_LT_LT_DASH;
	v->a[30521] = anon_sym_LT_LT_LT;
	v->a[30522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30523] = anon_sym_DOLLAR_LBRACK;
	v->a[30524] = aux_sym_concatenation_token1;
	v->a[30525] = anon_sym_DOLLAR;
	v->a[30526] = sym__special_character;
	v->a[30527] = anon_sym_DQUOTE;
	v->a[30528] = sym_raw_string;
	v->a[30529] = sym_ansi_c_string;
	v->a[30530] = aux_sym_number_token1;
	v->a[30531] = aux_sym_number_token2;
	v->a[30532] = anon_sym_DOLLAR_LBRACE;
	v->a[30533] = anon_sym_DOLLAR_LPAREN;
	v->a[30534] = anon_sym_BQUOTE;
	v->a[30535] = anon_sym_DOLLAR_BQUOTE;
	v->a[30536] = anon_sym_LT_LPAREN;
	v->a[30537] = anon_sym_GT_LPAREN;
	v->a[30538] = sym_word;
	v->a[30539] = 6;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = actions(71);
	v->a[30541] = 1;
	v->a[30542] = sym_comment;
	v->a[30543] = state(2671);
	v->a[30544] = 1;
	v->a[30545] = aux_sym__literal_repeat1;
	v->a[30546] = state(851);
	v->a[30547] = 2;
	v->a[30548] = sym_concatenation;
	v->a[30549] = aux_sym_for_statement_repeat1;
	v->a[30550] = state(2369);
	v->a[30551] = 9;
	v->a[30552] = sym_arithmetic_expansion;
	v->a[30553] = sym_brace_expression;
	v->a[30554] = sym_string;
	v->a[30555] = sym_translated_string;
	v->a[30556] = sym_number;
	v->a[30557] = sym_simple_expansion;
	v->a[30558] = sym_expansion;
	v->a[30559] = sym_command_substitution;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = sym_process_substitution;
	v->a[30561] = actions(2094);
	v->a[30562] = 12;
	v->a[30563] = anon_sym_PIPE;
	v->a[30564] = anon_sym_LT;
	v->a[30565] = anon_sym_GT;
	v->a[30566] = anon_sym_LT_LT;
	v->a[30567] = anon_sym_AMP_GT;
	v->a[30568] = anon_sym_LT_AMP;
	v->a[30569] = anon_sym_GT_AMP;
	v->a[30570] = anon_sym_DOLLAR;
	v->a[30571] = aux_sym_number_token1;
	v->a[30572] = aux_sym_number_token2;
	v->a[30573] = anon_sym_DOLLAR_LPAREN;
	v->a[30574] = sym_word;
	v->a[30575] = actions(2096);
	v->a[30576] = 26;
	v->a[30577] = sym_file_descriptor;
	v->a[30578] = sym_variable_name;
	v->a[30579] = sym_test_operator;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = sym__brace_start;
	v->a[30581] = anon_sym_LPAREN_LPAREN;
	v->a[30582] = anon_sym_PIPE_PIPE;
	v->a[30583] = anon_sym_AMP_AMP;
	v->a[30584] = anon_sym_GT_GT;
	v->a[30585] = anon_sym_PIPE_AMP;
	v->a[30586] = anon_sym_AMP_GT_GT;
	v->a[30587] = anon_sym_GT_PIPE;
	v->a[30588] = anon_sym_LT_AMP_DASH;
	v->a[30589] = anon_sym_GT_AMP_DASH;
	v->a[30590] = anon_sym_LT_LT_DASH;
	v->a[30591] = anon_sym_LT_LT_LT;
	v->a[30592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30593] = anon_sym_DOLLAR_LBRACK;
	v->a[30594] = sym__special_character;
	v->a[30595] = anon_sym_DQUOTE;
	v->a[30596] = sym_raw_string;
	v->a[30597] = sym_ansi_c_string;
	v->a[30598] = anon_sym_DOLLAR_LBRACE;
	v->a[30599] = anon_sym_BQUOTE;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
