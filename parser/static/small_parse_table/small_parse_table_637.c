/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_637.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3185(t_small_parse_table_array *v)
{
	v->a[63700] = sym_brace_expression;
	v->a[63701] = sym_string;
	v->a[63702] = sym_number;
	v->a[63703] = sym_simple_expansion;
	v->a[63704] = sym_expansion;
	v->a[63705] = sym_command_substitution;
	v->a[63706] = 5;
	v->a[63707] = actions(57);
	v->a[63708] = 1;
	v->a[63709] = sym_comment;
	v->a[63710] = state(1345);
	v->a[63711] = 1;
	v->a[63712] = aux_sym_concatenation_repeat1;
	v->a[63713] = actions(4056);
	v->a[63714] = 2;
	v->a[63715] = sym__concat;
	v->a[63716] = aux_sym_concatenation_token1;
	v->a[63717] = actions(2662);
	v->a[63718] = 14;
	v->a[63719] = anon_sym_PIPE;
	small_parse_table_3186(v);
}

void	small_parse_table_3186(t_small_parse_table_array *v)
{
	v->a[63720] = anon_sym_LT;
	v->a[63721] = anon_sym_GT;
	v->a[63722] = anon_sym_AMP_GT;
	v->a[63723] = anon_sym_LT_AMP;
	v->a[63724] = anon_sym_GT_AMP;
	v->a[63725] = anon_sym_LT_LT;
	v->a[63726] = anon_sym_DOLLAR;
	v->a[63727] = aux_sym_number_token1;
	v->a[63728] = aux_sym_number_token2;
	v->a[63729] = anon_sym_DOLLAR_LPAREN;
	v->a[63730] = anon_sym_BQUOTE;
	v->a[63731] = aux_sym__simple_variable_name_token1;
	v->a[63732] = sym_word;
	v->a[63733] = actions(2664);
	v->a[63734] = 19;
	v->a[63735] = sym_file_descriptor;
	v->a[63736] = sym_variable_name;
	v->a[63737] = sym_test_operator;
	v->a[63738] = sym__brace_start;
	v->a[63739] = anon_sym_PIPE_AMP;
	small_parse_table_3187(v);
}

void	small_parse_table_3187(t_small_parse_table_array *v)
{
	v->a[63740] = anon_sym_AMP_AMP;
	v->a[63741] = anon_sym_PIPE_PIPE;
	v->a[63742] = anon_sym_GT_GT;
	v->a[63743] = anon_sym_AMP_GT_GT;
	v->a[63744] = anon_sym_GT_PIPE;
	v->a[63745] = anon_sym_LT_AMP_DASH;
	v->a[63746] = anon_sym_GT_AMP_DASH;
	v->a[63747] = anon_sym_LT_LT_DASH;
	v->a[63748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63749] = sym__special_character;
	v->a[63750] = anon_sym_DQUOTE;
	v->a[63751] = sym_raw_string;
	v->a[63752] = anon_sym_DOLLAR_LBRACE;
	v->a[63753] = anon_sym_DOLLAR_BQUOTE;
	v->a[63754] = 6;
	v->a[63755] = actions(57);
	v->a[63756] = 1;
	v->a[63757] = sym_comment;
	v->a[63758] = actions(4056);
	v->a[63759] = 1;
	small_parse_table_3188(v);
}

void	small_parse_table_3188(t_small_parse_table_array *v)
{
	v->a[63760] = aux_sym_concatenation_token1;
	v->a[63761] = actions(4118);
	v->a[63762] = 1;
	v->a[63763] = sym__concat;
	v->a[63764] = state(1340);
	v->a[63765] = 1;
	v->a[63766] = aux_sym_concatenation_repeat1;
	v->a[63767] = actions(2688);
	v->a[63768] = 14;
	v->a[63769] = anon_sym_PIPE;
	v->a[63770] = anon_sym_LT;
	v->a[63771] = anon_sym_GT;
	v->a[63772] = anon_sym_AMP_GT;
	v->a[63773] = anon_sym_LT_AMP;
	v->a[63774] = anon_sym_GT_AMP;
	v->a[63775] = anon_sym_LT_LT;
	v->a[63776] = anon_sym_DOLLAR;
	v->a[63777] = aux_sym_number_token1;
	v->a[63778] = aux_sym_number_token2;
	v->a[63779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3189(v);
}

void	small_parse_table_3189(t_small_parse_table_array *v)
{
	v->a[63780] = anon_sym_BQUOTE;
	v->a[63781] = aux_sym__simple_variable_name_token1;
	v->a[63782] = sym_word;
	v->a[63783] = actions(2690);
	v->a[63784] = 19;
	v->a[63785] = sym_file_descriptor;
	v->a[63786] = sym_variable_name;
	v->a[63787] = sym_test_operator;
	v->a[63788] = sym__brace_start;
	v->a[63789] = anon_sym_PIPE_AMP;
	v->a[63790] = anon_sym_AMP_AMP;
	v->a[63791] = anon_sym_PIPE_PIPE;
	v->a[63792] = anon_sym_GT_GT;
	v->a[63793] = anon_sym_AMP_GT_GT;
	v->a[63794] = anon_sym_GT_PIPE;
	v->a[63795] = anon_sym_LT_AMP_DASH;
	v->a[63796] = anon_sym_GT_AMP_DASH;
	v->a[63797] = anon_sym_LT_LT_DASH;
	v->a[63798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63799] = sym__special_character;
	small_parse_table_3190(v);
}

/* EOF small_parse_table_637.c */
