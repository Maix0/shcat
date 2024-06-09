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
	v->a[63700] = anon_sym_GT;
	v->a[63701] = anon_sym_GT_GT;
	v->a[63702] = anon_sym_AMP_GT;
	v->a[63703] = anon_sym_AMP_GT_GT;
	v->a[63704] = anon_sym_LT_AMP;
	v->a[63705] = anon_sym_GT_AMP;
	v->a[63706] = anon_sym_GT_PIPE;
	v->a[63707] = anon_sym_LT_AMP_DASH;
	v->a[63708] = anon_sym_GT_AMP_DASH;
	v->a[63709] = anon_sym_LT_LT;
	v->a[63710] = anon_sym_LT_LT_DASH;
	v->a[63711] = anon_sym_AMP;
	v->a[63712] = aux_sym_concatenation_token1;
	v->a[63713] = anon_sym_SEMI;
	v->a[63714] = 5;
	v->a[63715] = actions(3);
	v->a[63716] = 1;
	v->a[63717] = sym_comment;
	v->a[63718] = actions(1006);
	v->a[63719] = 1;
	small_parse_table_3186(v);
}

void	small_parse_table_3186(t_small_parse_table_array *v)
{
	v->a[63720] = sym_file_descriptor;
	v->a[63721] = actions(1008);
	v->a[63722] = 1;
	v->a[63723] = sym_variable_name;
	v->a[63724] = state(1030);
	v->a[63725] = 2;
	v->a[63726] = sym_variable_assignment;
	v->a[63727] = aux_sym_variable_assignments_repeat1;
	v->a[63728] = actions(1000);
	v->a[63729] = 20;
	v->a[63730] = anon_sym_LT;
	v->a[63731] = anon_sym_GT;
	v->a[63732] = anon_sym_GT_GT;
	v->a[63733] = anon_sym_AMP_GT;
	v->a[63734] = anon_sym_AMP_GT_GT;
	v->a[63735] = anon_sym_LT_AMP;
	v->a[63736] = anon_sym_GT_AMP;
	v->a[63737] = anon_sym_GT_PIPE;
	v->a[63738] = anon_sym_LT_AMP_DASH;
	v->a[63739] = anon_sym_GT_AMP_DASH;
	small_parse_table_3187(v);
}

void	small_parse_table_3187(t_small_parse_table_array *v)
{
	v->a[63740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63741] = anon_sym_DOLLAR;
	v->a[63742] = anon_sym_DQUOTE;
	v->a[63743] = sym_raw_string;
	v->a[63744] = aux_sym_number_token1;
	v->a[63745] = aux_sym_number_token2;
	v->a[63746] = anon_sym_DOLLAR_LBRACE;
	v->a[63747] = anon_sym_DOLLAR_LPAREN;
	v->a[63748] = anon_sym_BQUOTE;
	v->a[63749] = sym_word;
	v->a[63750] = 5;
	v->a[63751] = actions(3);
	v->a[63752] = 1;
	v->a[63753] = sym_comment;
	v->a[63754] = actions(2279);
	v->a[63755] = 1;
	v->a[63756] = sym_variable_name;
	v->a[63757] = actions(2256);
	v->a[63758] = 2;
	v->a[63759] = sym_file_descriptor;
	small_parse_table_3188(v);
}

void	small_parse_table_3188(t_small_parse_table_array *v)
{
	v->a[63760] = aux_sym_heredoc_redirect_token1;
	v->a[63761] = state(1029);
	v->a[63762] = 2;
	v->a[63763] = sym_variable_assignment;
	v->a[63764] = aux_sym_variable_assignments_repeat1;
	v->a[63765] = actions(2254);
	v->a[63766] = 19;
	v->a[63767] = anon_sym_PIPE;
	v->a[63768] = anon_sym_RPAREN;
	v->a[63769] = anon_sym_SEMI_SEMI;
	v->a[63770] = anon_sym_AMP_AMP;
	v->a[63771] = anon_sym_PIPE_PIPE;
	v->a[63772] = anon_sym_LT;
	v->a[63773] = anon_sym_GT;
	v->a[63774] = anon_sym_GT_GT;
	v->a[63775] = anon_sym_AMP_GT;
	v->a[63776] = anon_sym_AMP_GT_GT;
	v->a[63777] = anon_sym_LT_AMP;
	v->a[63778] = anon_sym_GT_AMP;
	v->a[63779] = anon_sym_GT_PIPE;
	small_parse_table_3189(v);
}

void	small_parse_table_3189(t_small_parse_table_array *v)
{
	v->a[63780] = anon_sym_LT_AMP_DASH;
	v->a[63781] = anon_sym_GT_AMP_DASH;
	v->a[63782] = anon_sym_LT_LT;
	v->a[63783] = anon_sym_LT_LT_DASH;
	v->a[63784] = anon_sym_AMP;
	v->a[63785] = anon_sym_SEMI;
	v->a[63786] = 5;
	v->a[63787] = actions(3);
	v->a[63788] = 1;
	v->a[63789] = sym_comment;
	v->a[63790] = actions(2282);
	v->a[63791] = 1;
	v->a[63792] = sym_variable_name;
	v->a[63793] = actions(2267);
	v->a[63794] = 2;
	v->a[63795] = sym_file_descriptor;
	v->a[63796] = aux_sym_heredoc_redirect_token1;
	v->a[63797] = state(1029);
	v->a[63798] = 2;
	v->a[63799] = sym_variable_assignment;
	small_parse_table_3190(v);
}

/* EOF small_parse_table_637.c */
