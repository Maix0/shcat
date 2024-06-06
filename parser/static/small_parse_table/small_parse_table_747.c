/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_747.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3735(t_small_parse_table_array *v)
{
	v->a[74700] = sym__special_character;
	v->a[74701] = actions(4344);
	v->a[74702] = 1;
	v->a[74703] = anon_sym_DQUOTE;
	v->a[74704] = actions(4346);
	v->a[74705] = 1;
	v->a[74706] = aux_sym_number_token1;
	v->a[74707] = actions(4348);
	v->a[74708] = 1;
	v->a[74709] = aux_sym_number_token2;
	v->a[74710] = actions(4350);
	v->a[74711] = 1;
	v->a[74712] = anon_sym_DOLLAR_LBRACE;
	v->a[74713] = actions(4352);
	v->a[74714] = 1;
	v->a[74715] = anon_sym_DOLLAR_LPAREN;
	v->a[74716] = actions(4354);
	v->a[74717] = 1;
	v->a[74718] = anon_sym_BQUOTE;
	v->a[74719] = actions(4356);
	small_parse_table_3736(v);
}

void	small_parse_table_3736(t_small_parse_table_array *v)
{
	v->a[74720] = 1;
	v->a[74721] = anon_sym_DOLLAR_BQUOTE;
	v->a[74722] = actions(4358);
	v->a[74723] = 1;
	v->a[74724] = sym_test_operator;
	v->a[74725] = actions(4360);
	v->a[74726] = 1;
	v->a[74727] = sym_extglob_pattern;
	v->a[74728] = actions(4362);
	v->a[74729] = 1;
	v->a[74730] = sym__brace_start;
	v->a[74731] = actions(4443);
	v->a[74732] = 1;
	v->a[74733] = anon_sym_esac;
	v->a[74734] = actions(4447);
	v->a[74735] = 1;
	v->a[74736] = aux_sym_heredoc_redirect_token1;
	v->a[74737] = state(3393);
	v->a[74738] = 1;
	v->a[74739] = aux_sym__literal_repeat1;
	small_parse_table_3737(v);
}

void	small_parse_table_3737(t_small_parse_table_array *v)
{
	v->a[74740] = state(3827);
	v->a[74741] = 1;
	v->a[74742] = sym_last_case_item;
	v->a[74743] = actions(4328);
	v->a[74744] = 2;
	v->a[74745] = sym_raw_string;
	v->a[74746] = sym_word;
	v->a[74747] = state(1748);
	v->a[74748] = 2;
	v->a[74749] = sym_case_item;
	v->a[74750] = aux_sym_case_statement_repeat1;
	v->a[74751] = state(3472);
	v->a[74752] = 2;
	v->a[74753] = sym_concatenation;
	v->a[74754] = sym__extglob_blob;
	v->a[74755] = actions(4445);
	v->a[74756] = 3;
	v->a[74757] = anon_sym_SEMI_SEMI;
	v->a[74758] = anon_sym_AMP;
	v->a[74759] = anon_sym_SEMI;
	small_parse_table_3738(v);
}

void	small_parse_table_3738(t_small_parse_table_array *v)
{
	v->a[74760] = state(3295);
	v->a[74761] = 7;
	v->a[74762] = sym_arithmetic_expansion;
	v->a[74763] = sym_brace_expression;
	v->a[74764] = sym_string;
	v->a[74765] = sym_number;
	v->a[74766] = sym_simple_expansion;
	v->a[74767] = sym_expansion;
	v->a[74768] = sym_command_substitution;
	v->a[74769] = 3;
	v->a[74770] = actions(57);
	v->a[74771] = 1;
	v->a[74772] = sym_comment;
	v->a[74773] = actions(3123);
	v->a[74774] = 14;
	v->a[74775] = anon_sym_PIPE;
	v->a[74776] = anon_sym_LT;
	v->a[74777] = anon_sym_GT;
	v->a[74778] = anon_sym_AMP_GT;
	v->a[74779] = anon_sym_LT_AMP;
	small_parse_table_3739(v);
}

void	small_parse_table_3739(t_small_parse_table_array *v)
{
	v->a[74780] = anon_sym_GT_AMP;
	v->a[74781] = anon_sym_LT_LT;
	v->a[74782] = anon_sym_DOLLAR;
	v->a[74783] = aux_sym_number_token1;
	v->a[74784] = aux_sym_number_token2;
	v->a[74785] = anon_sym_DOLLAR_LPAREN;
	v->a[74786] = anon_sym_BQUOTE;
	v->a[74787] = aux_sym__simple_variable_name_token1;
	v->a[74788] = sym_word;
	v->a[74789] = actions(3125);
	v->a[74790] = 20;
	v->a[74791] = sym_file_descriptor;
	v->a[74792] = sym__concat;
	v->a[74793] = sym_test_operator;
	v->a[74794] = sym__brace_start;
	v->a[74795] = anon_sym_PIPE_AMP;
	v->a[74796] = anon_sym_AMP_AMP;
	v->a[74797] = anon_sym_PIPE_PIPE;
	v->a[74798] = anon_sym_GT_GT;
	v->a[74799] = anon_sym_AMP_GT_GT;
	small_parse_table_3740(v);
}

/* EOF small_parse_table_747.c */
