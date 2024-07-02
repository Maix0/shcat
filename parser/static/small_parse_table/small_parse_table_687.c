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
	v->a[68700] = sym__bare_dollar;
	v->a[68701] = actions(2717);
	v->a[68702] = 5;
	v->a[68703] = aux_sym_concatenation_token1;
	v->a[68704] = sym_raw_string;
	v->a[68705] = sym_number;
	v->a[68706] = sym__comment_word;
	v->a[68707] = sym_word;
	v->a[68708] = state(477);
	v->a[68709] = 5;
	v->a[68710] = sym_arithmetic_expansion;
	v->a[68711] = sym_string;
	v->a[68712] = sym_simple_expansion;
	v->a[68713] = sym_expansion;
	v->a[68714] = sym_command_substitution;
	v->a[68715] = 10;
	v->a[68716] = actions(3);
	v->a[68717] = 1;
	v->a[68718] = sym_comment;
	v->a[68719] = actions(479);
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = 1;
	v->a[68721] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68722] = actions(483);
	v->a[68723] = 1;
	v->a[68724] = anon_sym_DQUOTE;
	v->a[68725] = actions(485);
	v->a[68726] = 1;
	v->a[68727] = anon_sym_DOLLAR_LBRACE;
	v->a[68728] = actions(487);
	v->a[68729] = 1;
	v->a[68730] = anon_sym_DOLLAR_LPAREN;
	v->a[68731] = actions(489);
	v->a[68732] = 1;
	v->a[68733] = anon_sym_BQUOTE;
	v->a[68734] = actions(2719);
	v->a[68735] = 1;
	v->a[68736] = sym__bare_dollar;
	v->a[68737] = actions(2721);
	v->a[68738] = 1;
	v->a[68739] = anon_sym_DOLLAR;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = actions(2717);
	v->a[68741] = 5;
	v->a[68742] = aux_sym_concatenation_token1;
	v->a[68743] = sym_raw_string;
	v->a[68744] = sym_number;
	v->a[68745] = sym__comment_word;
	v->a[68746] = sym_word;
	v->a[68747] = state(477);
	v->a[68748] = 5;
	v->a[68749] = sym_arithmetic_expansion;
	v->a[68750] = sym_string;
	v->a[68751] = sym_simple_expansion;
	v->a[68752] = sym_expansion;
	v->a[68753] = sym_command_substitution;
	v->a[68754] = 4;
	v->a[68755] = actions(3);
	v->a[68756] = 1;
	v->a[68757] = sym_comment;
	v->a[68758] = actions(995);
	v->a[68759] = 2;
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = sym_file_descriptor;
	v->a[68761] = aux_sym_heredoc_redirect_token1;
	v->a[68762] = state(1354);
	v->a[68763] = 3;
	v->a[68764] = sym_file_redirect;
	v->a[68765] = sym_heredoc_redirect;
	v->a[68766] = aux_sym_redirected_statement_repeat1;
	v->a[68767] = actions(997);
	v->a[68768] = 12;
	v->a[68769] = anon_sym_PIPE;
	v->a[68770] = anon_sym_AMP_AMP;
	v->a[68771] = anon_sym_PIPE_PIPE;
	v->a[68772] = anon_sym_LT;
	v->a[68773] = anon_sym_GT;
	v->a[68774] = anon_sym_GT_GT;
	v->a[68775] = anon_sym_LT_AMP;
	v->a[68776] = anon_sym_GT_AMP;
	v->a[68777] = anon_sym_GT_PIPE;
	v->a[68778] = anon_sym_LT_GT;
	v->a[68779] = anon_sym_LT_LT;
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = anon_sym_LT_LT_DASH;
	v->a[68781] = 10;
	v->a[68782] = actions(3);
	v->a[68783] = 1;
	v->a[68784] = sym_comment;
	v->a[68785] = actions(441);
	v->a[68786] = 1;
	v->a[68787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68788] = actions(443);
	v->a[68789] = 1;
	v->a[68790] = anon_sym_DOLLAR;
	v->a[68791] = actions(445);
	v->a[68792] = 1;
	v->a[68793] = anon_sym_DQUOTE;
	v->a[68794] = actions(447);
	v->a[68795] = 1;
	v->a[68796] = anon_sym_DOLLAR_LBRACE;
	v->a[68797] = actions(449);
	v->a[68798] = 1;
	v->a[68799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
