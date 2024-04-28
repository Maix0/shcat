/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_25(t_small_parse_table_array *v)
{
	v->a[500] = actions(1508);
	v->a[501] = 1;
	v->a[502] = aux_sym_number_token1;
	v->a[503] = actions(1511);
	v->a[504] = 1;
	v->a[505] = aux_sym_number_token2;
	v->a[506] = actions(1514);
	v->a[507] = 1;
	v->a[508] = anon_sym_DOLLAR_LBRACE;
	v->a[509] = actions(1517);
	v->a[510] = 1;
	v->a[511] = anon_sym_DOLLAR_LPAREN;
	v->a[512] = actions(1520);
	v->a[513] = 1;
	v->a[514] = anon_sym_BQUOTE;
	v->a[515] = actions(1523);
	v->a[516] = 1;
	v->a[517] = anon_sym_DOLLAR_BQUOTE;
	v->a[518] = actions(1529);
	v->a[519] = 1;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = sym_file_descriptor;
	v->a[521] = actions(1532);
	v->a[522] = 1;
	v->a[523] = sym_test_operator;
	v->a[524] = actions(1535);
	v->a[525] = 1;
	v->a[526] = sym__bare_dollar;
	v->a[527] = actions(1538);
	v->a[528] = 1;
	v->a[529] = sym__brace_start;
	v->a[530] = state(532);
	v->a[531] = 1;
	v->a[532] = aux_sym_command_repeat2;
	v->a[533] = state(1045);
	v->a[534] = 1;
	v->a[535] = aux_sym__literal_repeat1;
	v->a[536] = state(1181);
	v->a[537] = 1;
	v->a[538] = sym_herestring_redirect;
	v->a[539] = state(1182);
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = 1;
	v->a[541] = sym_concatenation;
	v->a[542] = actions(1483);
	v->a[543] = 2;
	v->a[544] = anon_sym_LPAREN_LPAREN;
	v->a[545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[546] = actions(1488);
	v->a[547] = 2;
	v->a[548] = anon_sym_EQ_EQ;
	v->a[549] = anon_sym_EQ_TILDE;
	v->a[550] = actions(1526);
	v->a[551] = 2;
	v->a[552] = anon_sym_LT_LPAREN;
	v->a[553] = anon_sym_GT_LPAREN;
	v->a[554] = actions(1480);
	v->a[555] = 3;
	v->a[556] = sym_raw_string;
	v->a[557] = sym_ansi_c_string;
	v->a[558] = sym_word;
	v->a[559] = state(874);
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = 9;
	v->a[561] = sym_arithmetic_expansion;
	v->a[562] = sym_brace_expression;
	v->a[563] = sym_string;
	v->a[564] = sym_translated_string;
	v->a[565] = sym_number;
	v->a[566] = sym_simple_expansion;
	v->a[567] = sym_expansion;
	v->a[568] = sym_command_substitution;
	v->a[569] = sym_process_substitution;
	v->a[570] = actions(1486);
	v->a[571] = 22;
	v->a[572] = anon_sym_SEMI;
	v->a[573] = anon_sym_PIPE_PIPE;
	v->a[574] = anon_sym_AMP_AMP;
	v->a[575] = anon_sym_PIPE;
	v->a[576] = anon_sym_AMP;
	v->a[577] = anon_sym_LT;
	v->a[578] = anon_sym_GT;
	v->a[579] = anon_sym_LT_LT;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = anon_sym_GT_GT;
	v->a[581] = anon_sym_esac;
	v->a[582] = anon_sym_SEMI_SEMI;
	v->a[583] = anon_sym_SEMI_AMP;
	v->a[584] = anon_sym_SEMI_SEMI_AMP;
	v->a[585] = anon_sym_PIPE_AMP;
	v->a[586] = anon_sym_AMP_GT;
	v->a[587] = anon_sym_AMP_GT_GT;
	v->a[588] = anon_sym_LT_AMP;
	v->a[589] = anon_sym_GT_AMP;
	v->a[590] = anon_sym_GT_PIPE;
	v->a[591] = anon_sym_LT_AMP_DASH;
	v->a[592] = anon_sym_GT_AMP_DASH;
	v->a[593] = anon_sym_LT_LT_DASH;
	v->a[594] = 28;
	v->a[595] = actions(3);
	v->a[596] = 1;
	v->a[597] = sym_comment;
	v->a[598] = actions(19);
	v->a[599] = 1;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
