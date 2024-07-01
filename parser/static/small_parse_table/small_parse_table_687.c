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
	v->a[68700] = 1;
	v->a[68701] = anon_sym_DOLLAR_LBRACE;
	v->a[68702] = actions(2498);
	v->a[68703] = 1;
	v->a[68704] = anon_sym_DOLLAR_LPAREN;
	v->a[68705] = actions(2500);
	v->a[68706] = 1;
	v->a[68707] = anon_sym_BQUOTE;
	v->a[68708] = actions(2606);
	v->a[68709] = 1;
	v->a[68710] = sym__bare_dollar;
	v->a[68711] = actions(2691);
	v->a[68712] = 1;
	v->a[68713] = anon_sym_DOLLAR;
	v->a[68714] = actions(2604);
	v->a[68715] = 5;
	v->a[68716] = aux_sym_concatenation_token1;
	v->a[68717] = sym_raw_string;
	v->a[68718] = sym_number;
	v->a[68719] = sym__comment_word;
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = sym_word;
	v->a[68721] = state(1104);
	v->a[68722] = 5;
	v->a[68723] = sym_arithmetic_expansion;
	v->a[68724] = sym_string;
	v->a[68725] = sym_simple_expansion;
	v->a[68726] = sym_expansion;
	v->a[68727] = sym_command_substitution;
	v->a[68728] = 10;
	v->a[68729] = actions(3);
	v->a[68730] = 1;
	v->a[68731] = sym_comment;
	v->a[68732] = actions(1074);
	v->a[68733] = 1;
	v->a[68734] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68735] = actions(1076);
	v->a[68736] = 1;
	v->a[68737] = anon_sym_DOLLAR;
	v->a[68738] = actions(1078);
	v->a[68739] = 1;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = anon_sym_DQUOTE;
	v->a[68741] = actions(1080);
	v->a[68742] = 1;
	v->a[68743] = anon_sym_DOLLAR_LBRACE;
	v->a[68744] = actions(1082);
	v->a[68745] = 1;
	v->a[68746] = anon_sym_DOLLAR_LPAREN;
	v->a[68747] = actions(1084);
	v->a[68748] = 1;
	v->a[68749] = anon_sym_BQUOTE;
	v->a[68750] = actions(2640);
	v->a[68751] = 1;
	v->a[68752] = sym__bare_dollar;
	v->a[68753] = actions(2636);
	v->a[68754] = 5;
	v->a[68755] = aux_sym_concatenation_token1;
	v->a[68756] = sym_raw_string;
	v->a[68757] = sym_number;
	v->a[68758] = sym__comment_word;
	v->a[68759] = sym_word;
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = state(1450);
	v->a[68761] = 5;
	v->a[68762] = sym_arithmetic_expansion;
	v->a[68763] = sym_string;
	v->a[68764] = sym_simple_expansion;
	v->a[68765] = sym_expansion;
	v->a[68766] = sym_command_substitution;
	v->a[68767] = 5;
	v->a[68768] = actions(3);
	v->a[68769] = 1;
	v->a[68770] = sym_comment;
	v->a[68771] = actions(2693);
	v->a[68772] = 1;
	v->a[68773] = sym_variable_name;
	v->a[68774] = actions(1914);
	v->a[68775] = 2;
	v->a[68776] = sym_file_descriptor;
	v->a[68777] = aux_sym_heredoc_redirect_token1;
	v->a[68778] = state(1348);
	v->a[68779] = 2;
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = sym_variable_assignment;
	v->a[68781] = aux_sym__variable_assignments_repeat1;
	v->a[68782] = actions(1916);
	v->a[68783] = 12;
	v->a[68784] = anon_sym_PIPE;
	v->a[68785] = anon_sym_AMP_AMP;
	v->a[68786] = anon_sym_PIPE_PIPE;
	v->a[68787] = anon_sym_LT;
	v->a[68788] = anon_sym_GT;
	v->a[68789] = anon_sym_GT_GT;
	v->a[68790] = anon_sym_LT_AMP;
	v->a[68791] = anon_sym_GT_AMP;
	v->a[68792] = anon_sym_GT_PIPE;
	v->a[68793] = anon_sym_LT_GT;
	v->a[68794] = anon_sym_LT_LT;
	v->a[68795] = anon_sym_LT_LT_DASH;
	v->a[68796] = 12;
	v->a[68797] = actions(3);
	v->a[68798] = 1;
	v->a[68799] = sym_comment;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
