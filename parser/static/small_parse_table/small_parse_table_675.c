/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_675.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3375(t_small_parse_table_array *v)
{
	v->a[67500] = aux_sym__simple_variable_name_token1;
	v->a[67501] = sym_word;
	v->a[67502] = actions(2967);
	v->a[67503] = 21;
	v->a[67504] = sym_file_descriptor;
	v->a[67505] = sym__concat;
	v->a[67506] = sym_variable_name;
	v->a[67507] = sym_test_operator;
	v->a[67508] = sym__brace_start;
	v->a[67509] = anon_sym_PIPE_AMP;
	v->a[67510] = anon_sym_AMP_AMP;
	v->a[67511] = anon_sym_PIPE_PIPE;
	v->a[67512] = anon_sym_GT_GT;
	v->a[67513] = anon_sym_AMP_GT_GT;
	v->a[67514] = anon_sym_GT_PIPE;
	v->a[67515] = anon_sym_LT_AMP_DASH;
	v->a[67516] = anon_sym_GT_AMP_DASH;
	v->a[67517] = anon_sym_LT_LT_DASH;
	v->a[67518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67519] = aux_sym_concatenation_token1;
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = sym__special_character;
	v->a[67521] = anon_sym_DQUOTE;
	v->a[67522] = sym_raw_string;
	v->a[67523] = anon_sym_DOLLAR_LBRACE;
	v->a[67524] = anon_sym_DOLLAR_BQUOTE;
	v->a[67525] = 6;
	v->a[67526] = actions(57);
	v->a[67527] = 1;
	v->a[67528] = sym_comment;
	v->a[67529] = actions(4223);
	v->a[67530] = 1;
	v->a[67531] = aux_sym_concatenation_token1;
	v->a[67532] = actions(4242);
	v->a[67533] = 1;
	v->a[67534] = sym__concat;
	v->a[67535] = state(1430);
	v->a[67536] = 1;
	v->a[67537] = aux_sym_concatenation_repeat1;
	v->a[67538] = actions(2694);
	v->a[67539] = 13;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = anon_sym_PIPE;
	v->a[67541] = anon_sym_LT;
	v->a[67542] = anon_sym_GT;
	v->a[67543] = anon_sym_AMP_GT;
	v->a[67544] = anon_sym_LT_AMP;
	v->a[67545] = anon_sym_GT_AMP;
	v->a[67546] = anon_sym_LT_LT;
	v->a[67547] = anon_sym_DOLLAR;
	v->a[67548] = aux_sym_number_token1;
	v->a[67549] = aux_sym_number_token2;
	v->a[67550] = anon_sym_DOLLAR_LPAREN;
	v->a[67551] = anon_sym_BQUOTE;
	v->a[67552] = sym_word;
	v->a[67553] = actions(2696);
	v->a[67554] = 19;
	v->a[67555] = sym_file_descriptor;
	v->a[67556] = sym_variable_name;
	v->a[67557] = sym_test_operator;
	v->a[67558] = sym__brace_start;
	v->a[67559] = anon_sym_PIPE_AMP;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = anon_sym_AMP_AMP;
	v->a[67561] = anon_sym_PIPE_PIPE;
	v->a[67562] = anon_sym_GT_GT;
	v->a[67563] = anon_sym_AMP_GT_GT;
	v->a[67564] = anon_sym_GT_PIPE;
	v->a[67565] = anon_sym_LT_AMP_DASH;
	v->a[67566] = anon_sym_GT_AMP_DASH;
	v->a[67567] = anon_sym_LT_LT_DASH;
	v->a[67568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67569] = sym__special_character;
	v->a[67570] = anon_sym_DQUOTE;
	v->a[67571] = sym_raw_string;
	v->a[67572] = anon_sym_DOLLAR_LBRACE;
	v->a[67573] = anon_sym_DOLLAR_BQUOTE;
	v->a[67574] = 19;
	v->a[67575] = actions(57);
	v->a[67576] = 1;
	v->a[67577] = sym_comment;
	v->a[67578] = actions(4120);
	v->a[67579] = 1;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = anon_sym_PIPE;
	v->a[67581] = actions(4122);
	v->a[67582] = 1;
	v->a[67583] = anon_sym_AMP_AMP;
	v->a[67584] = actions(4124);
	v->a[67585] = 1;
	v->a[67586] = anon_sym_PIPE_PIPE;
	v->a[67587] = actions(4126);
	v->a[67588] = 1;
	v->a[67589] = anon_sym_EQ;
	v->a[67590] = actions(4132);
	v->a[67591] = 1;
	v->a[67592] = anon_sym_COMMA;
	v->a[67593] = actions(4138);
	v->a[67594] = 1;
	v->a[67595] = anon_sym_CARET;
	v->a[67596] = actions(4140);
	v->a[67597] = 1;
	v->a[67598] = anon_sym_AMP;
	v->a[67599] = actions(4150);
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
