/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_897.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4485(t_small_parse_table_array *v)
{
	v->a[89700] = anon_sym_GT_GT;
	v->a[89701] = anon_sym_AMP_GT;
	v->a[89702] = anon_sym_AMP_GT_GT;
	v->a[89703] = anon_sym_LT_AMP;
	v->a[89704] = anon_sym_GT_AMP;
	v->a[89705] = anon_sym_GT_PIPE;
	v->a[89706] = anon_sym_LT_AMP_DASH;
	v->a[89707] = anon_sym_GT_AMP_DASH;
	v->a[89708] = aux_sym_concatenation_token1;
	v->a[89709] = 10;
	v->a[89710] = actions(3);
	v->a[89711] = 1;
	v->a[89712] = sym_comment;
	v->a[89713] = actions(749);
	v->a[89714] = 1;
	v->a[89715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89716] = actions(751);
	v->a[89717] = 1;
	v->a[89718] = anon_sym_DOLLAR;
	v->a[89719] = actions(753);
	small_parse_table_4486(v);
}

void	small_parse_table_4486(t_small_parse_table_array *v)
{
	v->a[89720] = 1;
	v->a[89721] = anon_sym_DQUOTE;
	v->a[89722] = actions(755);
	v->a[89723] = 1;
	v->a[89724] = anon_sym_DOLLAR_LBRACE;
	v->a[89725] = actions(757);
	v->a[89726] = 1;
	v->a[89727] = anon_sym_DOLLAR_LPAREN;
	v->a[89728] = actions(759);
	v->a[89729] = 1;
	v->a[89730] = anon_sym_BQUOTE;
	v->a[89731] = state(234);
	v->a[89732] = 2;
	v->a[89733] = sym_concatenation;
	v->a[89734] = aux_sym_for_statement_repeat1;
	v->a[89735] = actions(747);
	v->a[89736] = 3;
	v->a[89737] = sym_raw_string;
	v->a[89738] = sym_number;
	v->a[89739] = sym_word;
	small_parse_table_4487(v);
}

void	small_parse_table_4487(t_small_parse_table_array *v)
{
	v->a[89740] = state(595);
	v->a[89741] = 5;
	v->a[89742] = sym_arithmetic_expansion;
	v->a[89743] = sym_string;
	v->a[89744] = sym_simple_expansion;
	v->a[89745] = sym_expansion;
	v->a[89746] = sym_command_substitution;
	v->a[89747] = 3;
	v->a[89748] = actions(1094);
	v->a[89749] = 1;
	v->a[89750] = sym_comment;
	v->a[89751] = actions(2659);
	v->a[89752] = 7;
	v->a[89753] = anon_sym_PIPE;
	v->a[89754] = anon_sym_LT;
	v->a[89755] = anon_sym_GT;
	v->a[89756] = anon_sym_AMP_GT;
	v->a[89757] = anon_sym_LT_AMP;
	v->a[89758] = anon_sym_GT_AMP;
	v->a[89759] = anon_sym_LT_LT;
	small_parse_table_4488(v);
}

void	small_parse_table_4488(t_small_parse_table_array *v)
{
	v->a[89760] = actions(2657);
	v->a[89761] = 9;
	v->a[89762] = sym_file_descriptor;
	v->a[89763] = anon_sym_AMP_AMP;
	v->a[89764] = anon_sym_PIPE_PIPE;
	v->a[89765] = anon_sym_GT_GT;
	v->a[89766] = anon_sym_AMP_GT_GT;
	v->a[89767] = anon_sym_GT_PIPE;
	v->a[89768] = anon_sym_LT_AMP_DASH;
	v->a[89769] = anon_sym_GT_AMP_DASH;
	v->a[89770] = anon_sym_LT_LT_DASH;
	v->a[89771] = 3;
	v->a[89772] = actions(1094);
	v->a[89773] = 1;
	v->a[89774] = sym_comment;
	v->a[89775] = actions(2638);
	v->a[89776] = 7;
	v->a[89777] = anon_sym_PIPE;
	v->a[89778] = anon_sym_LT;
	v->a[89779] = anon_sym_GT;
	small_parse_table_4489(v);
}

void	small_parse_table_4489(t_small_parse_table_array *v)
{
	v->a[89780] = anon_sym_AMP_GT;
	v->a[89781] = anon_sym_LT_AMP;
	v->a[89782] = anon_sym_GT_AMP;
	v->a[89783] = anon_sym_LT_LT;
	v->a[89784] = actions(2636);
	v->a[89785] = 9;
	v->a[89786] = sym_file_descriptor;
	v->a[89787] = anon_sym_AMP_AMP;
	v->a[89788] = anon_sym_PIPE_PIPE;
	v->a[89789] = anon_sym_GT_GT;
	v->a[89790] = anon_sym_AMP_GT_GT;
	v->a[89791] = anon_sym_GT_PIPE;
	v->a[89792] = anon_sym_LT_AMP_DASH;
	v->a[89793] = anon_sym_GT_AMP_DASH;
	v->a[89794] = anon_sym_LT_LT_DASH;
	v->a[89795] = 10;
	v->a[89796] = actions(3);
	v->a[89797] = 1;
	v->a[89798] = sym_comment;
	v->a[89799] = actions(3172);
	small_parse_table_4490(v);
}

/* EOF small_parse_table_897.c */
