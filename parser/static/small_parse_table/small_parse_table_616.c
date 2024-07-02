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
	v->a[61600] = anon_sym_SEMI;
	v->a[61601] = 3;
	v->a[61602] = actions(3);
	v->a[61603] = 1;
	v->a[61604] = sym_comment;
	v->a[61605] = actions(2137);
	v->a[61606] = 3;
	v->a[61607] = sym_file_descriptor;
	v->a[61608] = ts_builtin_sym_end;
	v->a[61609] = aux_sym_heredoc_redirect_token1;
	v->a[61610] = actions(2139);
	v->a[61611] = 17;
	v->a[61612] = anon_sym_PIPE;
	v->a[61613] = anon_sym_RPAREN;
	v->a[61614] = anon_sym_SEMI_SEMI;
	v->a[61615] = anon_sym_AMP_AMP;
	v->a[61616] = anon_sym_PIPE_PIPE;
	v->a[61617] = anon_sym_LT;
	v->a[61618] = anon_sym_GT;
	v->a[61619] = anon_sym_GT_GT;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = anon_sym_LT_AMP;
	v->a[61621] = anon_sym_GT_AMP;
	v->a[61622] = anon_sym_GT_PIPE;
	v->a[61623] = anon_sym_LT_GT;
	v->a[61624] = anon_sym_LT_LT;
	v->a[61625] = anon_sym_LT_LT_DASH;
	v->a[61626] = anon_sym_AMP;
	v->a[61627] = anon_sym_BQUOTE;
	v->a[61628] = anon_sym_SEMI;
	v->a[61629] = 6;
	v->a[61630] = actions(3);
	v->a[61631] = 1;
	v->a[61632] = sym_comment;
	v->a[61633] = actions(2064);
	v->a[61634] = 1;
	v->a[61635] = sym_file_descriptor;
	v->a[61636] = actions(2137);
	v->a[61637] = 2;
	v->a[61638] = ts_builtin_sym_end;
	v->a[61639] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = state(1142);
	v->a[61641] = 2;
	v->a[61642] = sym_file_redirect;
	v->a[61643] = aux_sym_redirected_statement_repeat2;
	v->a[61644] = actions(1861);
	v->a[61645] = 7;
	v->a[61646] = anon_sym_LT;
	v->a[61647] = anon_sym_GT;
	v->a[61648] = anon_sym_GT_GT;
	v->a[61649] = anon_sym_LT_AMP;
	v->a[61650] = anon_sym_GT_AMP;
	v->a[61651] = anon_sym_GT_PIPE;
	v->a[61652] = anon_sym_LT_GT;
	v->a[61653] = actions(2139);
	v->a[61654] = 8;
	v->a[61655] = anon_sym_PIPE;
	v->a[61656] = anon_sym_SEMI_SEMI;
	v->a[61657] = anon_sym_AMP_AMP;
	v->a[61658] = anon_sym_PIPE_PIPE;
	v->a[61659] = anon_sym_LT_LT;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = anon_sym_LT_LT_DASH;
	v->a[61661] = anon_sym_AMP;
	v->a[61662] = anon_sym_SEMI;
	v->a[61663] = 5;
	v->a[61664] = actions(3);
	v->a[61665] = 1;
	v->a[61666] = sym_comment;
	v->a[61667] = actions(702);
	v->a[61668] = 1;
	v->a[61669] = sym_file_descriptor;
	v->a[61670] = actions(916);
	v->a[61671] = 1;
	v->a[61672] = sym_variable_name;
	v->a[61673] = state(1181);
	v->a[61674] = 2;
	v->a[61675] = sym_variable_assignment;
	v->a[61676] = aux_sym__variable_assignments_repeat1;
	v->a[61677] = actions(690);
	v->a[61678] = 16;
	v->a[61679] = anon_sym_LT;
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = anon_sym_GT;
	v->a[61681] = anon_sym_GT_GT;
	v->a[61682] = anon_sym_LT_AMP;
	v->a[61683] = anon_sym_GT_AMP;
	v->a[61684] = anon_sym_GT_PIPE;
	v->a[61685] = anon_sym_LT_GT;
	v->a[61686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61687] = anon_sym_DOLLAR;
	v->a[61688] = anon_sym_DQUOTE;
	v->a[61689] = sym_raw_string;
	v->a[61690] = sym_number;
	v->a[61691] = anon_sym_DOLLAR_LBRACE;
	v->a[61692] = anon_sym_DOLLAR_LPAREN;
	v->a[61693] = anon_sym_BQUOTE;
	v->a[61694] = sym_word;
	v->a[61695] = 3;
	v->a[61696] = actions(3);
	v->a[61697] = 1;
	v->a[61698] = sym_comment;
	v->a[61699] = actions(1178);
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
