/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_687.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3435(t_small_parse_table_array *v)
{
	v->a[68700] = sym_raw_string;
	v->a[68701] = sym_number;
	v->a[68702] = sym_word;
	v->a[68703] = state(623);
	v->a[68704] = 5;
	v->a[68705] = sym_arithmetic_expansion;
	v->a[68706] = sym_string;
	v->a[68707] = sym_simple_expansion;
	v->a[68708] = sym_expansion;
	v->a[68709] = sym_command_substitution;
	v->a[68710] = 3;
	v->a[68711] = actions(501);
	v->a[68712] = 1;
	v->a[68713] = sym_comment;
	v->a[68714] = actions(513);
	v->a[68715] = 4;
	v->a[68716] = anon_sym_PIPE;
	v->a[68717] = anon_sym_LT;
	v->a[68718] = anon_sym_GT;
	v->a[68719] = anon_sym_LT_LT;
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = actions(515);
	v->a[68721] = 12;
	v->a[68722] = sym_file_descriptor;
	v->a[68723] = sym__concat;
	v->a[68724] = sym_variable_name;
	v->a[68725] = anon_sym_AMP_AMP;
	v->a[68726] = anon_sym_PIPE_PIPE;
	v->a[68727] = anon_sym_GT_GT;
	v->a[68728] = anon_sym_LT_AMP;
	v->a[68729] = anon_sym_GT_AMP;
	v->a[68730] = anon_sym_GT_PIPE;
	v->a[68731] = anon_sym_LT_GT;
	v->a[68732] = anon_sym_LT_LT_DASH;
	v->a[68733] = aux_sym_concatenation_token1;
	v->a[68734] = 10;
	v->a[68735] = actions(3);
	v->a[68736] = 1;
	v->a[68737] = sym_comment;
	v->a[68738] = actions(962);
	v->a[68739] = 1;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68741] = actions(964);
	v->a[68742] = 1;
	v->a[68743] = anon_sym_DOLLAR;
	v->a[68744] = actions(966);
	v->a[68745] = 1;
	v->a[68746] = anon_sym_DQUOTE;
	v->a[68747] = actions(968);
	v->a[68748] = 1;
	v->a[68749] = anon_sym_DOLLAR_LBRACE;
	v->a[68750] = actions(970);
	v->a[68751] = 1;
	v->a[68752] = anon_sym_DOLLAR_LPAREN;
	v->a[68753] = actions(972);
	v->a[68754] = 1;
	v->a[68755] = anon_sym_BQUOTE;
	v->a[68756] = state(303);
	v->a[68757] = 2;
	v->a[68758] = sym_concatenation;
	v->a[68759] = aux_sym_for_statement_repeat1;
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = actions(960);
	v->a[68761] = 3;
	v->a[68762] = sym_raw_string;
	v->a[68763] = sym_number;
	v->a[68764] = sym_word;
	v->a[68765] = state(519);
	v->a[68766] = 5;
	v->a[68767] = sym_arithmetic_expansion;
	v->a[68768] = sym_string;
	v->a[68769] = sym_simple_expansion;
	v->a[68770] = sym_expansion;
	v->a[68771] = sym_command_substitution;
	v->a[68772] = 10;
	v->a[68773] = actions(3);
	v->a[68774] = 1;
	v->a[68775] = sym_comment;
	v->a[68776] = actions(962);
	v->a[68777] = 1;
	v->a[68778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68779] = actions(964);
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = 1;
	v->a[68781] = anon_sym_DOLLAR;
	v->a[68782] = actions(966);
	v->a[68783] = 1;
	v->a[68784] = anon_sym_DQUOTE;
	v->a[68785] = actions(968);
	v->a[68786] = 1;
	v->a[68787] = anon_sym_DOLLAR_LBRACE;
	v->a[68788] = actions(970);
	v->a[68789] = 1;
	v->a[68790] = anon_sym_DOLLAR_LPAREN;
	v->a[68791] = actions(972);
	v->a[68792] = 1;
	v->a[68793] = anon_sym_BQUOTE;
	v->a[68794] = state(299);
	v->a[68795] = 2;
	v->a[68796] = sym_concatenation;
	v->a[68797] = aux_sym_for_statement_repeat1;
	v->a[68798] = actions(960);
	v->a[68799] = 3;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
