/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = anon_sym_AMP_AMP;
	v->a[61601] = anon_sym_PIPE_PIPE;
	v->a[61602] = actions(754);
	v->a[61603] = 2;
	v->a[61604] = anon_sym_LT_LT;
	v->a[61605] = anon_sym_LT_LT_DASH;
	v->a[61606] = actions(2007);
	v->a[61607] = 2;
	v->a[61608] = anon_sym_LT_AMP_DASH;
	v->a[61609] = anon_sym_GT_AMP_DASH;
	v->a[61610] = actions(750);
	v->a[61611] = 3;
	v->a[61612] = anon_sym_SEMI_SEMI;
	v->a[61613] = anon_sym_AMP;
	v->a[61614] = anon_sym_SEMI;
	v->a[61615] = state(1128);
	v->a[61616] = 3;
	v->a[61617] = sym_file_redirect;
	v->a[61618] = sym_heredoc_redirect;
	v->a[61619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = actions(2005);
	v->a[61621] = 6;
	v->a[61622] = anon_sym_LT;
	v->a[61623] = anon_sym_GT;
	v->a[61624] = anon_sym_GT_GT;
	v->a[61625] = anon_sym_LT_AMP;
	v->a[61626] = anon_sym_GT_AMP;
	v->a[61627] = anon_sym_GT_PIPE;
	v->a[61628] = 12;
	v->a[61629] = actions(3);
	v->a[61630] = 1;
	v->a[61631] = sym_comment;
	v->a[61632] = actions(682);
	v->a[61633] = 1;
	v->a[61634] = anon_sym_PIPE;
	v->a[61635] = actions(695);
	v->a[61636] = 1;
	v->a[61637] = anon_sym_RPAREN;
	v->a[61638] = actions(2009);
	v->a[61639] = 1;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = aux_sym_heredoc_redirect_token1;
	v->a[61641] = actions(2011);
	v->a[61642] = 1;
	v->a[61643] = sym_file_descriptor;
	v->a[61644] = state(756);
	v->a[61645] = 1;
	v->a[61646] = sym_terminator;
	v->a[61647] = actions(752);
	v->a[61648] = 2;
	v->a[61649] = anon_sym_AMP_AMP;
	v->a[61650] = anon_sym_PIPE_PIPE;
	v->a[61651] = actions(754);
	v->a[61652] = 2;
	v->a[61653] = anon_sym_LT_LT;
	v->a[61654] = anon_sym_LT_LT_DASH;
	v->a[61655] = actions(2007);
	v->a[61656] = 2;
	v->a[61657] = anon_sym_LT_AMP_DASH;
	v->a[61658] = anon_sym_GT_AMP_DASH;
	v->a[61659] = actions(750);
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = 3;
	v->a[61661] = anon_sym_SEMI_SEMI;
	v->a[61662] = anon_sym_AMP;
	v->a[61663] = anon_sym_SEMI;
	v->a[61664] = state(1128);
	v->a[61665] = 3;
	v->a[61666] = sym_file_redirect;
	v->a[61667] = sym_heredoc_redirect;
	v->a[61668] = aux_sym_redirected_statement_repeat1;
	v->a[61669] = actions(2005);
	v->a[61670] = 6;
	v->a[61671] = anon_sym_LT;
	v->a[61672] = anon_sym_GT;
	v->a[61673] = anon_sym_GT_GT;
	v->a[61674] = anon_sym_LT_AMP;
	v->a[61675] = anon_sym_GT_AMP;
	v->a[61676] = anon_sym_GT_PIPE;
	v->a[61677] = 3;
	v->a[61678] = actions(3);
	v->a[61679] = 1;
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = sym_comment;
	v->a[61681] = actions(970);
	v->a[61682] = 2;
	v->a[61683] = sym_file_descriptor;
	v->a[61684] = sym__concat;
	v->a[61685] = actions(968);
	v->a[61686] = 21;
	v->a[61687] = anon_sym_AMP_AMP;
	v->a[61688] = anon_sym_PIPE_PIPE;
	v->a[61689] = anon_sym_LT;
	v->a[61690] = anon_sym_GT;
	v->a[61691] = anon_sym_GT_GT;
	v->a[61692] = anon_sym_LT_AMP;
	v->a[61693] = anon_sym_GT_AMP;
	v->a[61694] = anon_sym_GT_PIPE;
	v->a[61695] = anon_sym_LT_AMP_DASH;
	v->a[61696] = anon_sym_GT_AMP_DASH;
	v->a[61697] = aux_sym_heredoc_redirect_token1;
	v->a[61698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61699] = aux_sym_concatenation_token1;
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
