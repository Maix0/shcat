/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2835.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14175(t_small_parse_table_array *v)
{
	v->a[283500] = sym_raw_string;
	v->a[283501] = sym_ansi_c_string;
	v->a[283502] = anon_sym_DOLLAR_LBRACE;
	v->a[283503] = anon_sym_BQUOTE;
	v->a[283504] = anon_sym_DOLLAR_BQUOTE;
	v->a[283505] = anon_sym_LT_LPAREN;
	v->a[283506] = anon_sym_GT_LPAREN;
	v->a[283507] = 3;
	v->a[283508] = actions(71);
	v->a[283509] = 1;
	v->a[283510] = sym_comment;
	v->a[283511] = actions(12362);
	v->a[283512] = 6;
	v->a[283513] = anon_sym_LPAREN;
	v->a[283514] = anon_sym_DOLLAR;
	v->a[283515] = aux_sym_number_token1;
	v->a[283516] = aux_sym_number_token2;
	v->a[283517] = anon_sym_DOLLAR_LPAREN;
	v->a[283518] = sym_word;
	v->a[283519] = actions(12364);
	small_parse_table_14176(v);
}

void	small_parse_table_14176(t_small_parse_table_array *v)
{
	v->a[283520] = 15;
	v->a[283521] = sym_test_operator;
	v->a[283522] = sym_extglob_pattern;
	v->a[283523] = sym__brace_start;
	v->a[283524] = anon_sym_LPAREN_LPAREN;
	v->a[283525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[283526] = anon_sym_DOLLAR_LBRACK;
	v->a[283527] = sym__special_character;
	v->a[283528] = anon_sym_DQUOTE;
	v->a[283529] = sym_raw_string;
	v->a[283530] = sym_ansi_c_string;
	v->a[283531] = anon_sym_DOLLAR_LBRACE;
	v->a[283532] = anon_sym_BQUOTE;
	v->a[283533] = anon_sym_DOLLAR_BQUOTE;
	v->a[283534] = anon_sym_LT_LPAREN;
	v->a[283535] = anon_sym_GT_LPAREN;
	v->a[283536] = 5;
	v->a[283537] = actions(71);
	v->a[283538] = 1;
	v->a[283539] = sym_comment;
	small_parse_table_14177(v);
}

void	small_parse_table_14177(t_small_parse_table_array *v)
{
	v->a[283540] = state(5328);
	v->a[283541] = 1;
	v->a[283542] = aux_sym_concatenation_repeat1;
	v->a[283543] = actions(12435);
	v->a[283544] = 2;
	v->a[283545] = sym__concat;
	v->a[283546] = aux_sym_concatenation_token1;
	v->a[283547] = actions(4370);
	v->a[283548] = 7;
	v->a[283549] = anon_sym_PIPE;
	v->a[283550] = anon_sym_LT;
	v->a[283551] = anon_sym_GT;
	v->a[283552] = anon_sym_LT_LT;
	v->a[283553] = anon_sym_AMP_GT;
	v->a[283554] = anon_sym_LT_AMP;
	v->a[283555] = anon_sym_GT_AMP;
	v->a[283556] = actions(4372);
	v->a[283557] = 11;
	v->a[283558] = sym_file_descriptor;
	v->a[283559] = anon_sym_PIPE_PIPE;
	small_parse_table_14178(v);
}

void	small_parse_table_14178(t_small_parse_table_array *v)
{
	v->a[283560] = anon_sym_AMP_AMP;
	v->a[283561] = anon_sym_GT_GT;
	v->a[283562] = anon_sym_PIPE_AMP;
	v->a[283563] = anon_sym_RBRACK;
	v->a[283564] = anon_sym_AMP_GT_GT;
	v->a[283565] = anon_sym_GT_PIPE;
	v->a[283566] = anon_sym_LT_AMP_DASH;
	v->a[283567] = anon_sym_GT_AMP_DASH;
	v->a[283568] = anon_sym_LT_LT_DASH;
	v->a[283569] = 5;
	v->a[283570] = actions(71);
	v->a[283571] = 1;
	v->a[283572] = sym_comment;
	v->a[283573] = state(5322);
	v->a[283574] = 1;
	v->a[283575] = aux_sym_concatenation_repeat1;
	v->a[283576] = actions(12435);
	v->a[283577] = 2;
	v->a[283578] = sym__concat;
	v->a[283579] = aux_sym_concatenation_token1;
	small_parse_table_14179(v);
}

void	small_parse_table_14179(t_small_parse_table_array *v)
{
	v->a[283580] = actions(4467);
	v->a[283581] = 7;
	v->a[283582] = anon_sym_PIPE;
	v->a[283583] = anon_sym_LT;
	v->a[283584] = anon_sym_GT;
	v->a[283585] = anon_sym_LT_LT;
	v->a[283586] = anon_sym_AMP_GT;
	v->a[283587] = anon_sym_LT_AMP;
	v->a[283588] = anon_sym_GT_AMP;
	v->a[283589] = actions(4469);
	v->a[283590] = 11;
	v->a[283591] = sym_file_descriptor;
	v->a[283592] = anon_sym_PIPE_PIPE;
	v->a[283593] = anon_sym_AMP_AMP;
	v->a[283594] = anon_sym_GT_GT;
	v->a[283595] = anon_sym_PIPE_AMP;
	v->a[283596] = anon_sym_RBRACK;
	v->a[283597] = anon_sym_AMP_GT_GT;
	v->a[283598] = anon_sym_GT_PIPE;
	v->a[283599] = anon_sym_LT_AMP_DASH;
	small_parse_table_14180(v);
}

/* EOF small_parse_table_2835.c */
