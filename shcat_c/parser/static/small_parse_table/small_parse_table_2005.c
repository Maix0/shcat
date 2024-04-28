/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2005.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10025(t_small_parse_table_array *v)
{
	v->a[200500] = anon_sym_DOLLAR;
	v->a[200501] = actions(4508);
	v->a[200502] = 1;
	v->a[200503] = anon_sym_DQUOTE;
	v->a[200504] = actions(4512);
	v->a[200505] = 1;
	v->a[200506] = aux_sym_number_token1;
	v->a[200507] = actions(4514);
	v->a[200508] = 1;
	v->a[200509] = aux_sym_number_token2;
	v->a[200510] = actions(4516);
	v->a[200511] = 1;
	v->a[200512] = anon_sym_DOLLAR_LBRACE;
	v->a[200513] = actions(4518);
	v->a[200514] = 1;
	v->a[200515] = anon_sym_DOLLAR_LPAREN;
	v->a[200516] = actions(4520);
	v->a[200517] = 1;
	v->a[200518] = anon_sym_BQUOTE;
	v->a[200519] = actions(4522);
	small_parse_table_10026(v);
}

void	small_parse_table_10026(t_small_parse_table_array *v)
{
	v->a[200520] = 1;
	v->a[200521] = anon_sym_DOLLAR_BQUOTE;
	v->a[200522] = actions(4526);
	v->a[200523] = 1;
	v->a[200524] = sym_test_operator;
	v->a[200525] = actions(4528);
	v->a[200526] = 1;
	v->a[200527] = sym__brace_start;
	v->a[200528] = actions(9156);
	v->a[200529] = 1;
	v->a[200530] = sym__special_character;
	v->a[200531] = state(2715);
	v->a[200532] = 1;
	v->a[200533] = aux_sym__literal_repeat1;
	v->a[200534] = actions(4500);
	v->a[200535] = 2;
	v->a[200536] = anon_sym_LPAREN_LPAREN;
	v->a[200537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200538] = actions(4510);
	v->a[200539] = 2;
	small_parse_table_10027(v);
}

void	small_parse_table_10027(t_small_parse_table_array *v)
{
	v->a[200540] = sym_raw_string;
	v->a[200541] = sym_ansi_c_string;
	v->a[200542] = actions(4524);
	v->a[200543] = 2;
	v->a[200544] = anon_sym_LT_LPAREN;
	v->a[200545] = anon_sym_GT_LPAREN;
	v->a[200546] = state(867);
	v->a[200547] = 2;
	v->a[200548] = sym_concatenation;
	v->a[200549] = aux_sym_for_statement_repeat1;
	v->a[200550] = state(2438);
	v->a[200551] = 9;
	v->a[200552] = sym_arithmetic_expansion;
	v->a[200553] = sym_brace_expression;
	v->a[200554] = sym_string;
	v->a[200555] = sym_translated_string;
	v->a[200556] = sym_number;
	v->a[200557] = sym_simple_expansion;
	v->a[200558] = sym_expansion;
	v->a[200559] = sym_command_substitution;
	small_parse_table_10028(v);
}

void	small_parse_table_10028(t_small_parse_table_array *v)
{
	v->a[200560] = sym_process_substitution;
	v->a[200561] = 19;
	v->a[200562] = actions(3);
	v->a[200563] = 1;
	v->a[200564] = sym_comment;
	v->a[200565] = actions(363);
	v->a[200566] = 1;
	v->a[200567] = anon_sym_DOLLAR_LBRACK;
	v->a[200568] = actions(367);
	v->a[200569] = 1;
	v->a[200570] = anon_sym_DOLLAR;
	v->a[200571] = actions(371);
	v->a[200572] = 1;
	v->a[200573] = anon_sym_DQUOTE;
	v->a[200574] = actions(375);
	v->a[200575] = 1;
	v->a[200576] = aux_sym_number_token1;
	v->a[200577] = actions(377);
	v->a[200578] = 1;
	v->a[200579] = aux_sym_number_token2;
	small_parse_table_10029(v);
}

void	small_parse_table_10029(t_small_parse_table_array *v)
{
	v->a[200580] = actions(379);
	v->a[200581] = 1;
	v->a[200582] = anon_sym_DOLLAR_LBRACE;
	v->a[200583] = actions(381);
	v->a[200584] = 1;
	v->a[200585] = anon_sym_DOLLAR_LPAREN;
	v->a[200586] = actions(385);
	v->a[200587] = 1;
	v->a[200588] = anon_sym_DOLLAR_BQUOTE;
	v->a[200589] = actions(391);
	v->a[200590] = 1;
	v->a[200591] = sym__brace_start;
	v->a[200592] = actions(5809);
	v->a[200593] = 1;
	v->a[200594] = anon_sym_BQUOTE;
	v->a[200595] = actions(8836);
	v->a[200596] = 1;
	v->a[200597] = sym_word;
	v->a[200598] = actions(8844);
	v->a[200599] = 1;
	small_parse_table_10030(v);
}

/* EOF small_parse_table_2005.c */
