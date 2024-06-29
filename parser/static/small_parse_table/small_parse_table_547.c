/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_547.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2735(t_small_parse_table_array *v)
{
	v->a[54700] = 1;
	v->a[54701] = anon_sym_DOLLAR;
	v->a[54702] = actions(1817);
	v->a[54703] = 1;
	v->a[54704] = anon_sym_DQUOTE;
	v->a[54705] = actions(1820);
	v->a[54706] = 1;
	v->a[54707] = anon_sym_DOLLAR_LBRACE;
	v->a[54708] = actions(1823);
	v->a[54709] = 1;
	v->a[54710] = anon_sym_DOLLAR_LPAREN;
	v->a[54711] = actions(1826);
	v->a[54712] = 1;
	v->a[54713] = anon_sym_BQUOTE;
	v->a[54714] = actions(536);
	v->a[54715] = 2;
	v->a[54716] = sym_file_descriptor;
	v->a[54717] = sym_variable_name;
	v->a[54718] = state(883);
	v->a[54719] = 2;
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = sym_concatenation;
	v->a[54721] = aux_sym_for_statement_repeat1;
	v->a[54722] = actions(1808);
	v->a[54723] = 3;
	v->a[54724] = sym_raw_string;
	v->a[54725] = sym_number;
	v->a[54726] = sym_word;
	v->a[54727] = state(1109);
	v->a[54728] = 5;
	v->a[54729] = sym_arithmetic_expansion;
	v->a[54730] = sym_string;
	v->a[54731] = sym_simple_expansion;
	v->a[54732] = sym_expansion;
	v->a[54733] = sym_command_substitution;
	v->a[54734] = actions(516);
	v->a[54735] = 10;
	v->a[54736] = anon_sym_LT;
	v->a[54737] = anon_sym_GT;
	v->a[54738] = anon_sym_GT_GT;
	v->a[54739] = anon_sym_AMP_GT;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = anon_sym_AMP_GT_GT;
	v->a[54741] = anon_sym_LT_AMP;
	v->a[54742] = anon_sym_GT_AMP;
	v->a[54743] = anon_sym_GT_PIPE;
	v->a[54744] = anon_sym_LT_AMP_DASH;
	v->a[54745] = anon_sym_GT_AMP_DASH;
	v->a[54746] = 6;
	v->a[54747] = actions(3);
	v->a[54748] = 1;
	v->a[54749] = sym_comment;
	v->a[54750] = actions(961);
	v->a[54751] = 1;
	v->a[54752] = sym_file_descriptor;
	v->a[54753] = actions(1792);
	v->a[54754] = 1;
	v->a[54755] = aux_sym_concatenation_token1;
	v->a[54756] = actions(1829);
	v->a[54757] = 1;
	v->a[54758] = sym__concat;
	v->a[54759] = state(875);
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = 1;
	v->a[54761] = aux_sym_concatenation_repeat1;
	v->a[54762] = actions(957);
	v->a[54763] = 24;
	v->a[54764] = anon_sym_PIPE;
	v->a[54765] = anon_sym_AMP_AMP;
	v->a[54766] = anon_sym_PIPE_PIPE;
	v->a[54767] = anon_sym_LT;
	v->a[54768] = anon_sym_GT;
	v->a[54769] = anon_sym_GT_GT;
	v->a[54770] = anon_sym_AMP_GT;
	v->a[54771] = anon_sym_AMP_GT_GT;
	v->a[54772] = anon_sym_LT_AMP;
	v->a[54773] = anon_sym_GT_AMP;
	v->a[54774] = anon_sym_GT_PIPE;
	v->a[54775] = anon_sym_LT_AMP_DASH;
	v->a[54776] = anon_sym_GT_AMP_DASH;
	v->a[54777] = anon_sym_LT_LT;
	v->a[54778] = anon_sym_LT_LT_DASH;
	v->a[54779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = anon_sym_DOLLAR;
	v->a[54781] = anon_sym_DQUOTE;
	v->a[54782] = sym_raw_string;
	v->a[54783] = sym_number;
	v->a[54784] = anon_sym_DOLLAR_LBRACE;
	v->a[54785] = anon_sym_DOLLAR_LPAREN;
	v->a[54786] = anon_sym_BQUOTE;
	v->a[54787] = sym_word;
	v->a[54788] = 3;
	v->a[54789] = actions(3);
	v->a[54790] = 1;
	v->a[54791] = sym_comment;
	v->a[54792] = actions(1088);
	v->a[54793] = 3;
	v->a[54794] = sym_file_descriptor;
	v->a[54795] = sym__concat;
	v->a[54796] = sym_variable_name;
	v->a[54797] = actions(1086);
	v->a[54798] = 25;
	v->a[54799] = anon_sym_PIPE;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
