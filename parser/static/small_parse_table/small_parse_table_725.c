/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_725.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3625(t_small_parse_table_array *v)
{
	v->a[72500] = anon_sym_BQUOTE;
	v->a[72501] = aux_sym__simple_variable_name_token1;
	v->a[72502] = sym_word;
	v->a[72503] = actions(3024);
	v->a[72504] = 20;
	v->a[72505] = sym_file_descriptor;
	v->a[72506] = sym__concat;
	v->a[72507] = sym_test_operator;
	v->a[72508] = sym__brace_start;
	v->a[72509] = anon_sym_PIPE_AMP;
	v->a[72510] = anon_sym_AMP_AMP;
	v->a[72511] = anon_sym_PIPE_PIPE;
	v->a[72512] = anon_sym_GT_GT;
	v->a[72513] = anon_sym_AMP_GT_GT;
	v->a[72514] = anon_sym_GT_PIPE;
	v->a[72515] = anon_sym_LT_AMP_DASH;
	v->a[72516] = anon_sym_GT_AMP_DASH;
	v->a[72517] = anon_sym_LT_LT_DASH;
	v->a[72518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72519] = aux_sym_concatenation_token1;
	small_parse_table_3626(v);
}

void	small_parse_table_3626(t_small_parse_table_array *v)
{
	v->a[72520] = sym__special_character;
	v->a[72521] = anon_sym_DQUOTE;
	v->a[72522] = sym_raw_string;
	v->a[72523] = anon_sym_DOLLAR_LBRACE;
	v->a[72524] = anon_sym_DOLLAR_BQUOTE;
	v->a[72525] = 24;
	v->a[72526] = actions(3);
	v->a[72527] = 1;
	v->a[72528] = sym_comment;
	v->a[72529] = actions(4332);
	v->a[72530] = 1;
	v->a[72531] = anon_sym_LPAREN;
	v->a[72532] = actions(4338);
	v->a[72533] = 1;
	v->a[72534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72535] = actions(4340);
	v->a[72536] = 1;
	v->a[72537] = anon_sym_DOLLAR;
	v->a[72538] = actions(4342);
	v->a[72539] = 1;
	small_parse_table_3627(v);
}

void	small_parse_table_3627(t_small_parse_table_array *v)
{
	v->a[72540] = sym__special_character;
	v->a[72541] = actions(4344);
	v->a[72542] = 1;
	v->a[72543] = anon_sym_DQUOTE;
	v->a[72544] = actions(4346);
	v->a[72545] = 1;
	v->a[72546] = aux_sym_number_token1;
	v->a[72547] = actions(4348);
	v->a[72548] = 1;
	v->a[72549] = aux_sym_number_token2;
	v->a[72550] = actions(4350);
	v->a[72551] = 1;
	v->a[72552] = anon_sym_DOLLAR_LBRACE;
	v->a[72553] = actions(4352);
	v->a[72554] = 1;
	v->a[72555] = anon_sym_DOLLAR_LPAREN;
	v->a[72556] = actions(4354);
	v->a[72557] = 1;
	v->a[72558] = anon_sym_BQUOTE;
	v->a[72559] = actions(4356);
	small_parse_table_3628(v);
}

void	small_parse_table_3628(t_small_parse_table_array *v)
{
	v->a[72560] = 1;
	v->a[72561] = anon_sym_DOLLAR_BQUOTE;
	v->a[72562] = actions(4358);
	v->a[72563] = 1;
	v->a[72564] = sym_test_operator;
	v->a[72565] = actions(4360);
	v->a[72566] = 1;
	v->a[72567] = sym_extglob_pattern;
	v->a[72568] = actions(4362);
	v->a[72569] = 1;
	v->a[72570] = sym__brace_start;
	v->a[72571] = actions(4390);
	v->a[72572] = 1;
	v->a[72573] = anon_sym_esac;
	v->a[72574] = actions(4394);
	v->a[72575] = 1;
	v->a[72576] = aux_sym_heredoc_redirect_token1;
	v->a[72577] = state(3393);
	v->a[72578] = 1;
	v->a[72579] = aux_sym__literal_repeat1;
	small_parse_table_3629(v);
}

void	small_parse_table_3629(t_small_parse_table_array *v)
{
	v->a[72580] = state(3936);
	v->a[72581] = 1;
	v->a[72582] = sym_last_case_item;
	v->a[72583] = actions(4328);
	v->a[72584] = 2;
	v->a[72585] = sym_raw_string;
	v->a[72586] = sym_word;
	v->a[72587] = state(1796);
	v->a[72588] = 2;
	v->a[72589] = sym_case_item;
	v->a[72590] = aux_sym_case_statement_repeat1;
	v->a[72591] = state(3472);
	v->a[72592] = 2;
	v->a[72593] = sym_concatenation;
	v->a[72594] = sym__extglob_blob;
	v->a[72595] = actions(4392);
	v->a[72596] = 3;
	v->a[72597] = anon_sym_SEMI_SEMI;
	v->a[72598] = anon_sym_AMP;
	v->a[72599] = anon_sym_SEMI;
	small_parse_table_3630(v);
}

/* EOF small_parse_table_725.c */
