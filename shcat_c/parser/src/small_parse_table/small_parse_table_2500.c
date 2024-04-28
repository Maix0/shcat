/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2500.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12500(t_small_parse_table_array *v)
{
	v->a[250000] = anon_sym_LT_LT_LT;
	v->a[250001] = anon_sym_BQUOTE;
	v->a[250002] = 8;
	v->a[250003] = actions(3);
	v->a[250004] = 1;
	v->a[250005] = sym_comment;
	v->a[250006] = actions(11363);
	v->a[250007] = 1;
	v->a[250008] = aux_sym_heredoc_redirect_token1;
	v->a[250009] = actions(11607);
	v->a[250010] = 1;
	v->a[250011] = anon_sym_LT_LT_LT;
	v->a[250012] = actions(11609);
	v->a[250013] = 1;
	v->a[250014] = sym_file_descriptor;
	v->a[250015] = actions(11605);
	v->a[250016] = 2;
	v->a[250017] = anon_sym_LT_AMP_DASH;
	v->a[250018] = anon_sym_GT_AMP_DASH;
	v->a[250019] = state(4517);
	small_parse_table_12501(v);
}

void	small_parse_table_12501(t_small_parse_table_array *v)
{
	v->a[250020] = 3;
	v->a[250021] = sym_file_redirect;
	v->a[250022] = sym_herestring_redirect;
	v->a[250023] = aux_sym_redirected_statement_repeat2;
	v->a[250024] = actions(11603);
	v->a[250025] = 8;
	v->a[250026] = anon_sym_LT;
	v->a[250027] = anon_sym_GT;
	v->a[250028] = anon_sym_GT_GT;
	v->a[250029] = anon_sym_AMP_GT;
	v->a[250030] = anon_sym_AMP_GT_GT;
	v->a[250031] = anon_sym_LT_AMP;
	v->a[250032] = anon_sym_GT_AMP;
	v->a[250033] = anon_sym_GT_PIPE;
	v->a[250034] = actions(11357);
	v->a[250035] = 10;
	v->a[250036] = anon_sym_SEMI;
	v->a[250037] = anon_sym_PIPE_PIPE;
	v->a[250038] = anon_sym_AMP_AMP;
	v->a[250039] = anon_sym_PIPE;
	small_parse_table_12502(v);
}

void	small_parse_table_12502(t_small_parse_table_array *v)
{
	v->a[250040] = anon_sym_AMP;
	v->a[250041] = anon_sym_LT_LT;
	v->a[250042] = anon_sym_RPAREN;
	v->a[250043] = anon_sym_SEMI_SEMI;
	v->a[250044] = anon_sym_PIPE_AMP;
	v->a[250045] = anon_sym_LT_LT_DASH;
	v->a[250046] = 6;
	v->a[250047] = actions(3);
	v->a[250048] = 1;
	v->a[250049] = sym_comment;
	v->a[250050] = actions(11512);
	v->a[250051] = 1;
	v->a[250052] = aux_sym_concatenation_token1;
	v->a[250053] = actions(11514);
	v->a[250054] = 1;
	v->a[250055] = sym__concat;
	v->a[250056] = state(4592);
	v->a[250057] = 1;
	v->a[250058] = aux_sym_concatenation_repeat1;
	v->a[250059] = actions(5697);
	small_parse_table_12503(v);
}

void	small_parse_table_12503(t_small_parse_table_array *v)
{
	v->a[250060] = 2;
	v->a[250061] = sym_file_descriptor;
	v->a[250062] = aux_sym_heredoc_redirect_token1;
	v->a[250063] = actions(5695);
	v->a[250064] = 21;
	v->a[250065] = anon_sym_SEMI;
	v->a[250066] = anon_sym_PIPE_PIPE;
	v->a[250067] = anon_sym_AMP_AMP;
	v->a[250068] = anon_sym_PIPE;
	v->a[250069] = anon_sym_AMP;
	v->a[250070] = anon_sym_LT;
	v->a[250071] = anon_sym_GT;
	v->a[250072] = anon_sym_LT_LT;
	v->a[250073] = anon_sym_GT_GT;
	v->a[250074] = anon_sym_RPAREN;
	v->a[250075] = anon_sym_SEMI_SEMI;
	v->a[250076] = anon_sym_PIPE_AMP;
	v->a[250077] = anon_sym_AMP_GT;
	v->a[250078] = anon_sym_AMP_GT_GT;
	v->a[250079] = anon_sym_LT_AMP;
	small_parse_table_12504(v);
}

void	small_parse_table_12504(t_small_parse_table_array *v)
{
	v->a[250080] = anon_sym_GT_AMP;
	v->a[250081] = anon_sym_GT_PIPE;
	v->a[250082] = anon_sym_LT_AMP_DASH;
	v->a[250083] = anon_sym_GT_AMP_DASH;
	v->a[250084] = anon_sym_LT_LT_DASH;
	v->a[250085] = anon_sym_LT_LT_LT;
	v->a[250086] = 3;
	v->a[250087] = actions(3);
	v->a[250088] = 1;
	v->a[250089] = sym_comment;
	v->a[250090] = actions(1294);
	v->a[250091] = 3;
	v->a[250092] = sym_file_descriptor;
	v->a[250093] = sym__concat;
	v->a[250094] = aux_sym_heredoc_redirect_token1;
	v->a[250095] = actions(1292);
	v->a[250096] = 23;
	v->a[250097] = anon_sym_SEMI;
	v->a[250098] = anon_sym_PIPE_PIPE;
	v->a[250099] = anon_sym_AMP_AMP;
	small_parse_table_12505(v);
}

/* EOF small_parse_table_2500.c */
